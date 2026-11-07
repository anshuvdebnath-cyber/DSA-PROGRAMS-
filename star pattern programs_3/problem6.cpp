/*
WAP THIS PATTERN :-

     *
    * *
   * * *
  * * * *
 * * * * *
  * * * *
   * * *
    * *
     *
*/

#include<iostream>
using namespace std;

int main()
{

  int row,col;
  int n=5;
  

  //upper diagram logic
  for(row=1;row<=n;row++)
  {
    for(col=1;col<=n-row;col++)
    {
      cout<<" ";
    }
    for(col=1;col<=row;col++)
    {
      cout<<" *";
    }
    cout<<endl;
  }

  //lower diagram logic
   for(row=n-1;row>=1;row--)// yaha 1 row kam karna hai we don't wanna print two 5 star row only one
  {
    for(col=n-row;col>=1;col--)
    {
      cout<<" ";
    }
    for(col=1;col<=row;col++)
    {
      cout<<" *";
    }
    cout<<endl;
  }

  return 0;
}