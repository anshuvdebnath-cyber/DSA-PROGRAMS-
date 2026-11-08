//wap to write binary to decimal number

#include<iostream>
using namespace std;

int main()
{

  int num,mult=1,rem=0;
  int div;

  cout<<"enter a binary number:";
  cin>>num;

  int copyNum=num;

  while(num>0)
  {
    div=num%10;
    num=num/10;
    rem=div*mult+rem;
    mult=mult*2;
  }
  cout<<"the decimal number of "<<copyNum<<" is :"<<rem<<endl;

  return 0;
}