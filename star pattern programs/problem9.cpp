//wap to print this pattern

/*

a b c d e 
a b c d e 
a b c d e 
a b c d e 
a b c d e 

*/

#include<iostream>
using namespace std;

int main(){
 
  int i,j;
  char name='a';

  for(i=1;i<=5;i++){
    for(j=1;j<=5;j++){
      name='a'+(j-1);
      cout<<name<<" ";
    }
    cout<<endl;
  }
  return 0;
}