//wap to print the power of a number

#include<iostream>
using namespace std;

int main(){
  int a,b;
  int i;
  int temp=1;

  cout<<"enter the power:"<<endl;
  cin>>b;

  cout<<"enter the base number:"<<endl;
  cin>>a;

  for(i=1;i<=b;i++){
    temp=temp*a;
  }
  cout<<"the answer is:"<<temp<<endl;
  return 0;
}