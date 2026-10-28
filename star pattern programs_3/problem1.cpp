/*
WAP THIS PATTERN :-
    * 
   * * * 
  * * * * * 
 * * * * * * * 
* * * * * * * * * 

*/

#include<iostream>
using namespace std;

int main()
{

 int row,col;
 int n=5;

 for(row=1;row<=n;row++)
 {
  for(col=1;col<=n-row;col=col+1)
  {
    cout<<"  ";
  }
  for(col=1;col<=2*row-1;col=col+1)
  {
    cout<<"*"<<" ";
  }
  cout<<endl;
 }
  return 0;
}