/*
WAP THIS PATTERN :-

    A
   AB
  ABC
 ABCD
ABCDE

*/


#include<iostream>
using namespace std;

int main()
{

  int row,col;
  int n;

  cout<<"enter a number:";
  cin>>n;

  for(row=1;row<=n;row++)
  {
    for(col=1;col<=(n-row);col++)
    {
      cout<<" ";
    }
    for(col=0;col<row;col++)
    {
      char name='A';
      name=name+col;
      cout<<name;
    }
    cout<<endl;
  }

  return 0;
}