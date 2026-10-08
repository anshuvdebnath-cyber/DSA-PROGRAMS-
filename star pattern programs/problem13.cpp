//wap to print this pattern 

/*

A
A B
A B C
A B C D
A B C D E

*/

#include<iostream>
using namespace std;

int main()
{

  int i,j;
  char count='a';

  for(i=1;i<=5;i++)
  {
    for(j=1;j<=i;j++)
    {
      count='a'+(j-1);
      cout<<count<<" ";
    }
    cout<<endl;
  }
  return 0;
}