#include <iostream>  
using namespace std;  
int main()  
{  
int n,rev,sum=0,temp;    
cout<<"Enter the Number=  ";    
cin>>n;    
temp=n;    
while(n>0)    
{    
rev=n%10;    
sum=sum+(rev*rev*rev);    
n=n/10;    
}    
if(temp==sum)    
cout<<"Number is Armstrong"<<endl;    
else    
cout<<"Number is not Armstrong"<<endl;   
return 0;  
} 
