/*
WAP THIS PATTERN :-

 *********
  *******
   *****
    ***
     *

*/

#include<iostream>
using namespace std;

int  main()
{

  int row,col;
  int n=5;
  
  for(row=1;row<=n;row++)
  {
    for(col=n;col>n-row;col--)
    {
        cout<<" ";
    }
    for(col=n;col>=row;col--)
    {
        cout<<"*";
    }
    if (row>=1)
    {
        for(col=n;col>row;col--)
        {
            cout<<"*";
        }
    }
    cout<<endl;
  }

  return 0;
}