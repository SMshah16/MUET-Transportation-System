#include<iostream>
using namespace std;
int  count_nmb(int x)
{
 int count =0;
 while(x>0)
 x/=10; 
 count++;}
 return count ;
 }
int main ()
{
int n  ;
cin>>n;
int count =count_nmb(n);
cout<<count;

}