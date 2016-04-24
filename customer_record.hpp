/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
	 
	 
	Psuedo Code:
	Class Name: Customer_record
	 
		Data:
			number - customer number
			size - customer car size (S or L)
			arrival_time - time in minutes between 0 and 570 the customer arrived
		 
		Class Functions:
			Function: Customer_record
				Default constructor - sets num to 0, size to blank and time to 0
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
				
			Function: Customer_record
				Constructor - creates customer_record with given number, size, and time
				Input: int, char, int
				Outputs: None
				Return: None
						
			Function: get_number
				returns the number of the customer_record
				Input: None
				Outputs: None
				Return: number
						
			Function: get_size
				returns the size of the customer_record car
				Input: None
				Output: None
				Return: the char representing the size of the car
				
			Function: get_time
				returns the arrival_time of the customer_record
				Input: None
				Output: None
				Return: the int arrival_time of the customer_record
*/
#ifndef CUSTOMER_RECORD_H
#define CUSTOMER_RECORD_H
class Customer_record
{
	int number;
	char size;
	int arrival_time;
	
public:
	Customer_record();
	
	Customer_record(int, char, int);
	
	int get_number();
	
	char get_size();
	
	int get_time();
};
#endif
