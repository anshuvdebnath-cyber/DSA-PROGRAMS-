//wap to print the fibonacci series

#include<iostream>
using namespace std;

int main(){

  int i;
  int n;
  int last=0;
  int prev=1;
  int cur;

  cout<<"enter the index :"<<endl;
  cin>>n;

  for(i=2;i<n;i++){ //here i will start from 2 kyuki hamne 0 and 1 pehle hi leleiya hai    
    cur=last+prev;
    last=prev;
    prev=cur;
  }
  cout<<cur<<endl;
  return 0;
}