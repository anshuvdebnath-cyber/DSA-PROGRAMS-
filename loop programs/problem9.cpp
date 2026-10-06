//wap to print the factorial of a number

#include<iostream>
using namespace std;

int main(){

  int i;
  long int n;
  long int temp=1;

  cout<<"enter the number to get the factorial:"<<endl;
  cin>>n;

  for(i=1;i<=n;i++){
    temp=temp*i;
  }
  cout<<"factorial:"<<temp<<endl;
  return 0;
}