#include<iostream>
using namespace std;
int main()
{
 int salary , note_5000 , note_1000 , note_500 ,note_100 ,note_50 ,note_20 , note_10 , coin_5 , coin_2 , coin_1;
 cout<<"Enter salary : ";
 cin>>salary;
 if (salary >=5000)
     {
       note_5000 = salary/5000;
       salary = salary % 5000 ;
     }
 if (salary >=1000) 
     {
      note_1000=salary/1000;
      salary = salary %1000;
     }
  if (salary >=500)
     {
       note_500 = salary/500;
       salary = salary % 500 ;
     }
 if (salary >=100) 
     {
      note_100=salary/100;
      salary = salary %100;
     }
  if (salary >=50)
     {
       note_50 = salary/50;
       salary = salary % 50 ;
     }
 if (salary >=20) 
     {
      note_20=salary/20;
      salary = salary % 20;
     }
 if (salary >=10) 
     {
      note_10=salary/10;
      salary = salary % 10;
     }
 if (salary >=5) 
     {
      coin_5=salary/5;
      salary = salary % 5;
     }          
 if (salary >=2) 
     {
      coin_2=salary/2;
      salary = salary % 2; 
      }
 if (salary >=1) 
      {
      coin_1=salary/1;
      salary = salary % 1;     
      }
   cout<<"You will get :"<<endl;
   cout<<"5000 notes ="<<note_5000<<endl;
   cout<<"1000 notes ="<<note_1000<<endl;
   cout<<"500 notes ="<<note_500<<endl;
   cout<<"100 notes ="<<note_100<<endl;
   cout<<"50 notes ="<<note_50<<endl;
   cout<<"20 notes ="<<note_20<<endl;
   cout<<"10 notes ="<<note_10<<endl;   
   cout<<"5 coins ="<<coin_5<<endl;   
   cout<<"2 coins ="<<coin_2<<endl;  
   cout<<"1 coins ="<<coin_1<<endl;   
   cout<<"thanks ";  
   return 0;   
}