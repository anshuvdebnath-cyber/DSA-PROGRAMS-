//wap to find out if a number is prime or not 

#include<iostream>
using namespace std;

int main(){

  int i;
  int n;
  int temp;

  cout<<"enter the number to search:";
  cin>>n;

  if(n<2){
    cout<<"not a prime number";
    return 0;
  }
  else{
    for(i=2;i<n;i++){
      if(n%i==0){
        cout<<"not a prime"<<endl;
        return 0;
      }
    }
    cout<<"the number is prime"<<endl;
  }
  return 0;
}