/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/
#include "bay_type.hpp"
using namespace std;

Bay_type::Bay_type()
{
	timer = 0;
	status = 'E';
	bay_size = 'E';
	time_limit = 0;
}
Bay_type::Bay_type(int tr, char stat, char sz, int lim)
{
	timer = tr;
	status = stat;
	bay_size = sz;
	time_limit = lim;
}
int Bay_type::get_timer()
{
	return(timer);
}
char Bay_type::get_status()
{
	return(status);
}
char Bay_type::get_bay_size()
{
	return(bay_size);
}
int Bay_type::get_time_limit()
{
	return(time_limit);
}
void Bay_type::set_timer(int time)
{
	timer = time;
}
void Bay_type::set_status(char stat)
{
	status = stat;
}
void Bay_type::set_time_limit(int lim)
{
	time_limit = lim;
}

void Bay_type::add_timer()
{
	timer++;
}

bool Bay_type::check_timer()
{
	//returns true if time is up, false if time is not up
	if(timer == time_limit)
		return(true);
	else
		return(false);
}
