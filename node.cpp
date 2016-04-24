/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/
#include "node.hpp"
#include <iostream>
using namespace std;

Node::Node()
{
	link = NULL;
}

Node::Node(Customer_record cust_rec)
{
	customer_record = cust_rec;
	link = NULL;
}

void Node::set_link(Node *ptr)
{
	link = ptr;
}

Node *Node::get_link()
{
	return(link);
}

Customer_record Node::get_cust()
{
	return(customer_record);
}



