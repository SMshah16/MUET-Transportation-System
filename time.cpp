
#include<iostream>
using namespace std;
int main ()
{
	char m , a , p;
	int  total_time_spend;
	int start_hour , start_min , start_sec;
	int end_hour , end_min , end_sec;
	cout<<"Enter the starting time : (hours , minutes , sec)"<<endl;
	cin>>start_hour>>start_min>>start_sec;
	cout<<"Enter the ending time : (hours , minutes , sec)"<<endl;
	cin>>end_hour>>end_min>>end_sec;
	int start_time_in_sec= start_hour*3600+ start_min*60 + start_sec;
	int end_time_in_sec= end_hour*3600+ end_min*60 + end_sec;
	int total_time_in_sec =( end_hour*3600+ end_min*60 + end_sec) - (start_hour*3600+ start_min*60 + start_sec);
	if ( total_time_in_sec <0 )
	   {
	   	cout<<"Enter the meridiem : (for AM press a , for PM press p"<<endl;
	   	cin>>m ;
	   	if(m==a)
	   	 total_time_spend+=12*3600;
	   	if(m=p)
	   	 total_time_spend+=24*3600;
	   	else 
	   	 cout<<"Please enter valid instruction";
	   	
	   }
	int  total_hour_spend= total_time_in_sec/ 3600;
	if( total_time_in_sec % 3600 >0)
	   total_hour_spend++; 
	int charge ;
	if(total_hour_spend >0)
	  charge +=20;
	if(total_hour_spend>1)
	  charge +=15;
	if(total_hour_spend>2)
	 charge =(total_hour_spend -2)*10;
	cout<<"Client had used service"<<total_hour_spend<<endl;
	cout<<"client is charges : Rs."<<charge<<endl;
	return 0;
}    
