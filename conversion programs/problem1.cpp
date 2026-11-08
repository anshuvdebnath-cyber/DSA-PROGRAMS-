//wap to convert decimal to binary number

#include<iostream>
using namespace std;

int main()
{

  int mult=1;
  int num;
  int rem=0;
  int div;

  cout<<"enter a number:";
  cin>>num;

  while(num>0)
  {
    div=num%2;
    num=num/2;
    rem=div*mult+rem;
    mult=mult*10;
  }

  cout<<"the binary number of "<<num<<" is : "<<rem<<endl;
  return 0;
}