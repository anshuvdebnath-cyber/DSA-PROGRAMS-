//wap to print this pattern 

/*

a b c d 
a b c 
a b 
a 

*/

#include<iostream>
using namespace std;

int main()
{
  int i,j;
  char name='a';

  for(i=4;i>=1;i--)
  {
    for(j=1;j<=i;j++)
    {
      name='a'+(j-1);
      cout<<name<<" ";
    }
    cout<<endl;
  }
  return 0;
}