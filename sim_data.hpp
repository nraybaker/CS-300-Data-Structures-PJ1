/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
	 
	 
	Description of the problem:
		Sim_data will be used to keep track of data that we want to report at the end
			of the program

	Psuedo Code:
	Class Name: Sim_data

		Data:
			time_cnt: keeps track of the time the business was open
			num_serviced: keeps track of the number of cars that were able to be serviced
			tot_wait_time: keeps track of the total wait time of every customer in the queue
			num_turned_away: keeps track of the total number of customers turned away
				because the queue was full
			
		Accesor Functions:
			Function: get_time_cnt
				Accessor function to access the time count
				Input: None
				Output: Node
				Return: the time count
			
		
			Function: get_num_serviced
				Accessor function to get the number of customers serviced
				Input: None
				Output: None
				Return: the number of customers serviced
				
			Function: get_tot_wait_time
				Accessor function to get the total wait time of customers in the waiting queue
				Input: None
				Output: None
				Return: the total wait time of customers in the waiting queue
				
			Function: get_num_turned_away
				Accessor function to get the number of customers turned away because the 
					waiting queue was full
				Input: None
				Output: None
				Return the number of customers turned away
		
		
		Class Functions:
			Function: Sim_data
				Default constructor - sets all data to 0
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
		
			Function: process_data
				function that will print the data to the screen
				Inputs: None
				Outputs: the data the node contains: num
				Return: N/A
				
			Function: add_time
				adds time to time_cnt in increments of 1
				Inputs: None
				Outputs: None
				Return: N/A just increments time_cnt
				
			Function: add_num_serviced
				adds 1 to num_serviced
				Inputs: None
				Outputs: None
				Return: N/A just increments num_serviced when a customer was serviced
				
			Function: add_wait_time
				adds to tot_wait_time in given increments
				Inputs: Amount to add to tot_wait_time
				Outputs: None
				Return: NA just adds to tot_wait_time a given number
				
			Function: add_turned_away
				adds 1 to the num_turned_away
				Inputs: None
				Outputs: None
				Return: NA just adds 1 to the number of customers turned away
*/

class Sim_data
{
	int time_cnt;
	int num_serviced;
	int tot_wait_time;
	int num_turned_away;
public:
	Sim_data();
	
	void add_time();
	
	void add_num_serviced();
	
	void add_wait_time(int);
	
	void add_turned_away();
	
	int get_time_cnt();
	
	int get_num_serviced();
	
	int get_tot_wait_time();
	
	int get_num_turned_away();
};
