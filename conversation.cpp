#include <iostream>
using namespace std;
int DeciToBin(int deci)
{ 
  int ans=0, pow=1; 
  while(deci>0)
  {
   int rem=deci%2;
   ans+=(rem*pow);
   deci/=2;
   pow*=10;
  } return ans;
}  
int binToDeci(int bin)
{ 
  int ans=0, pow=1; 
  while(bin>0)
  {
   int rem=bin%10;
   ans+=(rem*pow);
   bin/=10;
   pow*=2;
  } return ans;
}  
int main()
{
 int bin , deci;
 cout << "Enter the binary number to convert it into decimal" << endl;
 cin>>bin;
 cout<<binToDeci(bin)<<endl;
 cout << "Enter the decimal number to convert it into binary" << endl;
 cin>>deci;
 cout<<DeciToBin(deci);
 
 
 }