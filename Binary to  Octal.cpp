
#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter the Binary Number to convert it into  Octal  Number  ";
  cin>>num;
  int rem, mul=1,ans=0;
    while(num>0)
  {
      rem=num%10;
      num=num/10;
      ans=ans+rem*mul;
      mul=mul*2;
  }
  int rem_1,mul_1=1,ans_1=0;
  while(ans>0)
 {
     rem_1=ans%8;
    ans=ans/8;
     ans_1=ans_1+rem_1*mul_1;
     mul_1=mul_1*10;
 }
 cout<<ans_1;
  

    return 0;
}
