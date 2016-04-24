/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/
#include <iostream>
#include "queue.hpp"
using namespace std;

Queue::Queue()
{
	front = NULL;
	rear = NULL;
	count = 0;
}

bool Queue::enqueue(Customer_record cust_rec)
{	
	bool success = false;
	
	Node *new_ptr = new Node(cust_rec);
	if(front == NULL)
	{
		front = new_ptr;
		rear = new_ptr;
		count++;
		success = true;
	}
	else
	{
		rear -> set_link(new_ptr);
		rear = new_ptr;
		count++;
		success = true;
	}
	return(success);
}

bool Queue::dequeue()
{
	bool success = false;
	if(front == NULL)
	{
		return(success);
	}
	
	Node *temp;
	temp = front;
	front = front -> get_link();
	delete temp;
	count--;
	success = true;
	
	return(success);
}

Customer_record Queue::front_cust()
{
	return(front -> get_cust());
}

Customer_record Queue::rear_cust()
{
	return(rear -> get_cust());
}

bool Queue::is_empty()
{
	if(front == NULL)
		return(true);
		
	else
		return(false);
}
