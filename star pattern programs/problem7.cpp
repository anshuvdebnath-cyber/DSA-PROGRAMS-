//wap to print this pattern

/*

1 8 27 64 125 
1 8 27 64 125 
1 8 27 64 125 
1 8 27 64 125 
1 8 27 64 125 

*/

#include<iostream>
using namespace std;

int main(){
 
  int i,j;

  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      cout<<j*j*j<<" ";
    }
    cout<<endl;
  }
  return 0;
}