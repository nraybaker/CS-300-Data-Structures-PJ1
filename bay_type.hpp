/*******************************************************************************
	Author: Nathan Baker
	Student ID: A767P375
	Project: #1
	 
	 
	Psuedo Code:
	Class Name: Bay_type
	 
		Data:
			timer - keeps track of the time the bay has been used
			status - keeps track of status of the bay (F or E for full/empty)
			bay_size - size of the bay (L or S)
			time_limit - time limit of the bay (12 min for small bay, 20 for large)
			
		Class Functions:
			Function: Bay_type
				Default constructor - sets all data to 0 or blank
				Inputs: None
				Outputs: None
				Return: N/A (defaults to above)
				
			Function: Bay_type
				Constructor - creates bay_type with data initialized to given data
				Input: int timer, char status, char bay_size, int time_limit
				Outputs: None
				Return: None
						
			Function: get_timer
				returns the timer of the bar
				Input: None
				Outputs: None
				Return: timer
						
			Function: get_bay_size
				returns the size of the bay
				Input: None
				Output: None
				Return: the char representing the size of the bay
				
			Function: get_status
				returns the status of the bay
				Input: None
				Output: None
				Return: the char representing whether the bay is full or empty
				
			Function: get_time_limit
				returns the time_limit of the bay (12 min for small car, 20 for L)
				Input: None
				Output: None
				Return: the time limit of the bay
				
			Function: set_timer
				sets the timer of the bay
				Input: int time
				Output: None
				Return: None
				
			Function: set_status
				set status of the bay to F or E
				Input: char stat ('F' or 'E')
				Output: None
				Return: None
				
			Function: set_time_limit
				set the time_limit of the bay to 12 or 20 for a S or a L car
				Input: int time
				Output: None
				Return: None
				
			Function: add_timer
				adds 1 minute to the timer of the bay
				Input: None
				Output: None
				Return: None (Just ups the timer by 1)
*/

class Bay_type
{
	int timer;
	char status;
	char bay_size;
	int time_limit;
	
public:
	Bay_type();
	
	Bay_type(int, char, char, int);
	
	int get_timer();
	
	char get_status();
	
	char get_bay_size();
	
	int get_time_limit();
	
	void set_timer(int);
	
	void set_status(char);
	
	void set_time_limit(int);
	
	void add_timer();
	
	bool check_timer();
	
	void check_bay();
};
