/*
WAP THIS PATTERN :-

    E
   ED
  EDC
 EDCB
EDCBA

*/

#include<iostream>
using namespace std;

int main()
{

  int row,col;

  for(row=1;row<=5;row++)
  {
    for(col=1;col<=(5-row);col++)
    {
      cout<<" ";
    }
    for(col=0;col<row;col++)
    {
      char n='E';
      n=n-col;
      cout<<n;
    }
    cout<<endl;
  }

  return 0;
}