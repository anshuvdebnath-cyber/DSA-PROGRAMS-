//wap to print this pattern

/*

F G H I J K  
F G H I J K
F G H I J K
F G H I J K
F G H I J K

*/

#include<iostream>
using namespace std;

int main()
{
  int row,col;
  char count='f';

  for(row=1;row<=5;row++){
    for(col=1;col<=6;col++){
      count='f'+(col-1);
      cout<<count<<" ";
    }
    cout<<endl;
  }
  return 0;
}