//wap to print sum of squares of n numbers

#include<iostream>
using namespace std;

int main(){
  int i,n;
  int temp=0;
  
  cout<<"enter the number:"<<endl;
  cin>>n;

  for(i=1;i<=n;i++){
    temp=temp+i*i;
  }
  cout<<"the sum of "<<n<<" is:"<<temp<<endl;
  return 0;
} 