/***************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
*/
#include "sim_data.hpp"
using namespace std;

Sim_data::Sim_data()
{
	time_cnt = 0;
	num_serviced = 0;
	tot_wait_time = 0;
	num_turned_away = 0;
}

void Sim_data::add_time()
{
	time_cnt++;
}

void Sim_data::add_num_serviced()
{
	num_serviced++;
}

void Sim_data::add_wait_time(int wait_time)
{
	tot_wait_time += wait_time;
}

void Sim_data::add_turned_away()
{
	num_turned_away++;
}

int Sim_data::get_time_cnt()
{
	return(time_cnt);
}

int Sim_data::get_num_serviced()
{
	return(num_serviced);
}

int Sim_data::get_tot_wait_time()
{
	return(tot_wait_time);
}

int Sim_data::get_num_turned_away()
{
	return(num_turned_away);
}
