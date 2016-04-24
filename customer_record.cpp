/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/
#include "customer_record.hpp"
using namespace std;

Customer_record::Customer_record()
{
	number = 0;
	size = ' ';
	arrival_time = 0;
}

Customer_record::Customer_record(int num, char sz, int time)
{
	number = num;
	size = sz;
	arrival_time = time;
}

int Customer_record::get_number()
{
	return(number);
}

char Customer_record::get_size()
{
	return(size);
}

int Customer_record::get_time()
{
	return(arrival_time);
}
