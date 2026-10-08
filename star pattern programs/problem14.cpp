//wap to print this pattern 

/*

10 
10 11 
10 11 12 
10 11 12 13 
10 11 12 13 14 

*/

#include<iostream>
using namespace std;

int main()
{

  int i,j;
  int count=10;

  for(i=1;i<6;i++)
  {
    for(j=0;j<i;j++)
    {
      //count=count=j; this would store the last count value instead of 10
      cout<<count+j<<" "; //yaha count=count+j karke fhir cout karne se previous derv. vlaue sotre hojata hai. so beware
    }
    cout<<endl;
  }
  return 0;
}