//print the table of 6

#include<iostream>
using namespace std;

int main(){

  int i;
  int temp=1;

  for(i=1;i<=10;i++){
    temp=6*i;
    cout<<"6 x "<<i<<" = "<<temp<<endl;
  }
  return 0;
}

//alternate way to write the table of any number. 

/*
#include<iostream>
using namespace std;

int main(){
  int i;
  int n;

  cout<<"enter n:"<<endl;
  cin>>n;

  for(i=n;i<=n*10;i=i+n){
    cout<<i<<endl;
  }
  return 0;
}

*/