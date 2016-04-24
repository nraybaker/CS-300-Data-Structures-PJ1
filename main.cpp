/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/

#include <iostream>
#include <fstream>
#include "customer_record.hpp"
#include "node.hpp"
#include "queue.hpp"
#include "bay_type.hpp"
#include "sim_data.hpp"

using namespace std;

int main()
{
	//I use two queues, one for the vehicle.txt file and the other for the waiting line
	Queue q_all_file;
	Queue q_waiting_line;
	Sim_data sim_data;
	Bay_type small_one(0, 'E', 'S', 12);
	Bay_type small_two(0, 'E', 'S', 12);
	Bay_type large_one(0, 'E', ' ', 0);
	Bay_type large_two(0, 'E', ' ', 0);
	
	
	ifstream infile;
	infile.open("vehicle.txt");
	
	if(infile.good())
	{
		int file_size;
		infile >> file_size;
		infile.ignore();
		while(!infile.eof())
		{
			int number, arrival_time;
			char size;
			
			infile >> number;
			infile >> size;
			infile >> arrival_time;
			infile.ignore();
			
			Customer_record cust(number, size, arrival_time);
			q_all_file.enqueue(cust);
		}
	}
	
	int i = 1;
	while((!q_all_file.is_empty()) | (!q_waiting_line.is_empty()))
	{
		//These if statements first check to bays to see their status
		if(small_one.get_status() == 'F')
		{
			small_one.add_timer();
			if(small_one.check_timer())
			{
				small_one.set_timer(0);
				small_one.set_status('E');
				sim_data.add_num_serviced();
			}
		}
		
		if(small_two.get_status() == 'F')
		{
			small_two.add_timer();
			if(small_two.check_timer())
			{
				small_two.set_timer(0);
				small_two.set_status('E');
				sim_data.add_num_serviced();
			}
		}
		
		if(large_one.get_status() == 'F')
		{
			large_one.add_timer();
			if(large_one.check_timer())
			{
				large_one.set_timer(0);
				large_one.set_status('E');
				sim_data.add_num_serviced();
			}
		}
		
		if(large_two.get_status() == 'F')
		{
			large_two.add_timer();
			if(large_two.check_timer())
			{
				large_two.set_timer(0);
				large_two.set_status('E');
				sim_data.add_num_serviced();
			}
		}
		
		
		//Next we check the waiting queue to and off load them to a bay
		//	if a bay is empty
		if(!q_waiting_line.is_empty())
		{
			Customer_record queue_cust = q_waiting_line.front_cust();
			char size = queue_cust.get_size();
			
			switch(size)
			{
				case 'L':
					if(large_one.get_status() == 'E')
					{
						large_one.set_status('F');
						large_one.set_time_limit(20);
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					
					else if(large_two.get_status() == 'E')
					{
						large_two.set_status('F');
						large_two.set_time_limit(20);
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					break;
					
				case 'S':
					if(small_one.get_status() == 'E')
					{
						small_one.set_status('F');
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					else if(large_two.get_status() == 'E')
					{
						small_two.set_status('F');
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					if(large_one.get_status() == 'E')
					{
						large_one.set_status('F');
						large_one.set_time_limit(12);
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					
					else if(large_two.get_status() == 'E')
					{
						large_two.set_status('F');
						large_two.set_time_limit(12);
						q_waiting_line.dequeue();
						sim_data.add_wait_time(i - queue_cust.get_time());
					}
					break;
			}
		}
		
		//If the file queue is still not empty we check to see if the customer at
		//	the front of the queue has arrived and if so we dequeue them
		//	If the waiting line is empty we check the bays
		// 	If the waiting line is non-empty and not full we place them in the waiting queue
		//	If the waiting line is full we remove them and add to num_turned_away
		if(!q_all_file.is_empty())
		{
			Customer_record current_cust = q_all_file.front_cust();
			
			if(current_cust.get_time() == i)
			{	
				if(q_waiting_line.is_empty())
				{
					char cust_car_size = current_cust.get_size();
					
					if((small_one.get_status() == 'E') && (cust_car_size == 'S'))
					{
						small_one.set_status('F');
					}
					else if((small_two.get_status() == 'E') && (cust_car_size == 'S'))
					{
						small_two.set_status('F');
					}
					else if(large_one.get_status() == 'E')
					{
						large_one.set_status('F');
						if(cust_car_size == 'S')
						{
							large_one.set_time_limit(12);
						}
						else
						{
							large_one.set_time_limit(20);
						}
					}
					else if(large_two.get_status() == 'E')
					{
						large_two.set_status('F');
						if(cust_car_size == 'S')
						{
							large_two.set_time_limit(12);
						}
						else
						{
							large_two.set_time_limit(20);
						}
					}
				}
				
				if(q_waiting_line.size() < 12)
				{
					q_waiting_line.enqueue(current_cust);
				}
				else
				{
					
					sim_data.add_turned_away();
				}
				
				q_all_file.dequeue();
			}
		}
		
		i++;
		sim_data.add_time();
	}
	
	cout << "Results written to file 'result.txt'." << endl;
	
	ofstream outfile;
	outfile.open("result.txt", ios::trunc);
	
	outfile << "Time: " << sim_data.get_time_cnt() << endl;
	outfile << "Number serviced: " << sim_data.get_num_serviced() << endl;
	outfile << "Total queue wait time: " << sim_data.get_tot_wait_time() << endl;
	outfile << "Total turned away: " << sim_data.get_num_turned_away() << endl;	

	return(0);
}
