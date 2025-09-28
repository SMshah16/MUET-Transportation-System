#include<iostream>
#include<cmath>
using namespace std;
int main()
{ float rounded , num;
 char choice = 'y';
do
  {
    cout<<"Enter the number that you want to round off"<<endl;
   cin>>num;
   rounded =round (num);
   cout<<"rounded value ="<<rounded<<endl; the 
   cout<<"do you want continue or not , if yes press y or no press any key "<<endl;
   cin>>choice;
  } 
  while(choice=='y') ;
  return 0;
} 