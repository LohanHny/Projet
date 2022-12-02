#include <ctime>
#include <iostream>
using namespace std;

int main()
{
	time_t curr_time;
	tm * curr_tm;

	char time_string[100];
	
	time(&curr_time);
	curr_tm = localtime(&curr_time);
	

	strftime(time_string, 50, "%T", curr_tm);
	

	cout << time_string << endl;
	
	return 0;
}