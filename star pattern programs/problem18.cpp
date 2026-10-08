//wap to print this pattern 

/*

5 
5 4 
5 4 3 
5 4 3 2 
5 4 3 2 1 

*/

#include<iostream>
using namespace std;

int main()
{

  int i,j;
  int count=5;

  for(i=1;i<6;i++)
  {
    for(j=0;j<i;j++)
    {
      cout<<count-j<<" ";
    }
    cout<<endl;
  }
  return 0;
}