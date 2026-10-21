/*
WAP THIS PATTERN :-

    5
   54
  543
 5432
54321

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
      int n=5;
      n=n-col;
      cout<<n;
    }
    cout<<endl;
  }

  return 0;
}