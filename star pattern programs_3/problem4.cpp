/*
WAP THIS PATTERN :-

********
***  ***
**    **
*      *
*      *
**    **
***  ***
********

*/

#include<iostream>
using namespace std;

int  main()
{

    int row,col;
    int n=4;

    //upper diagram logic
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=(2*n)-(2*row);col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    //lower diagram logic
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        for(col=1;col<=(2*n)-(2*row);col++)
        {
            cout<<" ";
        }
        for(col=1;col<=row;col++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}