/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
	 
	 
	Description of the problem:
		This Node will be used in the implementation of a Queue to keep track
		* of customers

	Psuedo Code:
	Class Name: Node

		Data:
			customer of class Customer_record that gives the record of the person in the queue
			Link that is a the pointer to other nodes
	
		Mutator Functions:
		
			Function: set_link
				mutator function to set the pointer to another node
				Input: where the pointer should point to
				Outputs: None
				Return: N/A (Just sets the pointer)
			
		
		Accesor Functions:
			
			Function: get_link
				Accessor function to access the location of the node the 
				* current node's link is pointing to
				Input: None
				Output: Node
				Return: Memory location of the node "ahead" of current node
			
		
			Function: get_cust
				Accessor function to get the customer stored in the node
				Input: None
				Output: None
				Return: the customer record
		
		
		Class Functions:
			Function: Node
				Default constructor - sets num to 0 and link to NULL
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
		
			Function: Node
				constructor that accepts an int to pass into num and sets link
				* to NULL
				Inputs: a number
				Outputs: None
				Return: N/A
					just set link to NULL and num = a number
			
			Function: process_data
				function that will print the data to the screen
				Inputs: None
				Outputs: the data the node contains: num
				Return: N/A
*/	
#include "customer_record.hpp"
#ifndef NODE_H
#define NODE_H
class Node
{
	Customer_record customer_record;
	Node *link;
	
public:
	Node();
	
	Node(Customer_record);
	
	void set_link(Node *ptr);
	
	Node *get_link();
	
	Customer_record get_cust();
};

#endif
