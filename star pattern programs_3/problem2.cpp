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

int  main()
{
int row,col;
int n=5;
int subrow;

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
        for(subrow=1;subrow=row;subrow++)
        {
            for(col=subrow;col>=1;col=col-1)
            {
                cout<<col<<" ";
            }
        }
    }
    cout<<endl;
}
return 0;
}