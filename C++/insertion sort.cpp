#include<iostream>
using namespace std;
int main ()
{
   int array[5] = { 12,4,3,1,15};
   cout<<"\nInput\n";
   for(int i=0;i<5;i++)
   {
      cout <<array[i]<<"\t";
   }
   for(int k=1; k<5; k++)
   {
      int temp = array[k];
      int j= k-1;
      while(j>=0 && temp <= array[j])
      {
         array[j+1] = array[j];
         j = j-1;
      }
   array[j+1] = temp;
   }
cout<<"\nSorted\n";
for(int i=0;i<5;i++)
   {
   cout <<array[i]<<"\t";
   }
}
