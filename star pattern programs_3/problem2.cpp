/*
WAP THIS PATTERN :-
        1 
      1 2 1 
    1 2 3 2 1 
  1 2 3 4 3 2 1 
1 2 3 4 5 4 3 2 1 

*/

#include<iostream>
using namespace std;

int  main()
{
int row,col;
int n=5;

for(row=1;row<=n;row++)
{
    for(col=1;col<=n-row;col=col+1)
    {
        cout<<"  ";
    }
    for(col=1;col<=row;col=col+1)
    {
        cout<<col<<" ";
    }

    if(row>=2){
        for(col=row;col>1;col=col-1)
        {
            cout<<col-1<<" ";
        }
    }
    
    cout<<endl;
}
return 0;
}