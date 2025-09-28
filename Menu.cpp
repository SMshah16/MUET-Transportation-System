#include<iostream>
using namespace std;
int main()
{
	int choice = 0;
	cout<<"Enter:"<<endl<<"1- for coffee"<<endl<<"2- for tea"<<endl;
	cin>>choice;
	if ( choice==1)
	{
		cout<<"Your coffee is on it's way.Thank you."<<endl;
		
	}
	else if (choice==2)
	{
		cout<<"Your tea is on it's way.Thank you.:"<<endl;
	}
	else 
	{
		cout<<"You have entered a wrong nmber :";
	}
	
	
	return 0;
}
	
