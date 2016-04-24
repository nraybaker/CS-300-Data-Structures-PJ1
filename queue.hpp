/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
	 
	 
	Psuedo Code:
	Class Name: Queue
	 
		Data:
			rear  - keeps track of the rear of the Queue
			front - keeps track of the front of the queue
			count - keeps track of the number of Nodes in the list
		 
		Class Functions:
			Function: Queue
				Default constructor - sets count to 0 and front and rear to NULL
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
				
			Function: dequeue
				dequeues the front node from the queue
				Input: int
				Outputs: None
				Return: false if enqueue is unsuccessful
						true if enqueue is successful
						
			Function: enqueue
				enqueues a node to the rear of the queue
				Input: None
				Outputs: None
				Return: false if enqueue is unsuccessful
						true if enqueue is successful
						
			Function: front_cust
				returns the top of the stack
				Input: None
				Output: None
				Return: the cust on the front of the queue	
				 
			Function: rear_ cust
			 	returns the rear of the queue
			 	Input: None
			 	Output: None
			 	Return: the cust on the rear of the queue
			 
			Function: is_empty
			 	returns true if empty false if non-empty
			 	Input: None
			 	Output: None
			 	Return: true if queue is empty, false if queue is non-empty
			 
			Function: size
			 	returns size of queue
			 	Input: None
			 	Output: None
			 	Return: the size of the queue
*/
#include "node.hpp"
using namespace std;


class Queue
{
	Node *front;
	Node *rear;
	int count;
	
public:
	Queue();
	
	bool enqueue(Customer_record);
	
	bool dequeue();
	
	Customer_record front_cust();
	
	Customer_record rear_cust();
	
	bool is_empty();
	
	int size(){ return(count); };
};
