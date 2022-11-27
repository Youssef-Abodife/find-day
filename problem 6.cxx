#include <iostream>
#include <math.h>
using namespace std;
bool checkYear(int year)
{
   
    if (year % 400 == 0)
        return true;
 
    if (year % 100 == 0)
        return false;
 
   
    if (year % 4 == 0)
        return true;
    return false;
}
int main()
{
    int x,y,z,n,c,w,m,co;
    cin>>x>>y>>z;
    if(x>31||y>12)
    {cout<<"error";
    }
   else{
   n=(z%1000)%100;
  c= ((n/4)+n)%7;
  w=(z-(z % 100));
  
  if(((w)-300)%400==0){
//  cout <<4+c;
  m=4+c;}
  else if((w)%400==0){
 //  cout<<3+c;
   m=3+c;}
  else  if((w-100)%400==0){
 //   cout<<c+1;
    m=1+c;}
   else  if((w-200)%400==0)
   {
 // cout<<6+c;
  m=6+c;
 
   }
   
   
  //  cout<<m;
   if(checkYear(z)==false){
   switch(y)
   {case 1 :
 co=((x-3)%7)+m;
 break;
 case 2:
 co=(abs(x-28)%7)+m;
 break;
 case 3:
 co=(abs(x-14)%7)+m;
 break;
 case 4:
 co=(abs(x-4)%7)+m;
 break;
 case 5:
 co=(abs(x-9)%7)+m;
 break;
 case 6:
 co=(abs(x-6)%7)+m;
 break;
 case 7:
 co=(abs(x-11)%7)+m;
 break;
 case 8:
 co=(abs(x-8)%7)+m;
 break;
 case 9:
 co=(abs(x-5)%7)+m;
 break;
 case 10:
 co=((x-3)%7)+m;
 break;
 case 11:
 co=(abs(x-7)%7)+m;
 break;
 case 12:
 co=(abs(x-12)%7)+m;
 break;
 
   }
   }
   else if(checkYear(z)==true){
   switch(y)
   {case 1 :
 co=((x-4)%7)+m;
 break;
 case 2:
 co=(abs(x-29)%7)+m;
 break;
 case 3:
 co=(abs(x-14)%7)+m;
 break;
 case 4:
 co=(abs(x-4)%7)+m;
 break;
 case 5:
 co=(abs(x-9)%7)+m;
 break;
 case 6:
 co=(abs(x-6)%7)+m;
 break;
 case 7:
 co=(abs(x-11)%7)+m;
 break;
 case 8:
 co=(abs(x-8)%7)+m;
 break;
 case 9:
 co=(abs(x-5)%7)+m;
 break;
 case 10:
 co=((x-3)%7)+m;
 break;
 case 11:
 co=(abs(x-7)%7)+m;
 break;
 case 12:
 co=(abs(x-12)%7)+m;
 break;
   }
   }
   if(co>7){
  
  	co=co-7;}
  	switch (co)
  	{
  	case 1:
  	cout<<"Sunday";
  	break;
  	case 2:
  	cout<<"Monday";
  	break;
  	case 3:
  	cout<<"Tuesday";
  	
  	break;
  	case 4:
  	cout<<"Wednesday";
  	break;
  	case 5:
  	cout<<"Thursday";
  	break;
  	case 6:
  	cout<<"Friday";
  	break;
  	case 7:
  	cout<<"Saturday";
  	break;	
  		
  		
  	}
   
   }
    return 0;
}
