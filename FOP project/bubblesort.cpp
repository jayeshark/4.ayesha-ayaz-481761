//Implement Bubble Sort on an array of 6 integers. 

#include <iostream>
using namespace std;

int main() {
     int temp,i,j;
     int x[6]={14,2,9,1,89,24};
     for(int i=0; i<=5; i++)
{
    for(int j=i+1; j<=5; j++)
  {
   if(x[i]>x[j])
   {
    temp=x[i];
    x[i]=x[j];
    x[j]=temp;
  							  //successfully sorted it in ascending porder using bubble sort 
   } }  
}
for (int k=0; k<=5;k++)
cout<<x[k]<<endl;			//displaying the ascending order array using for loop
    return 0;
}