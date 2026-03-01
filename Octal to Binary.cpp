
#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter the Octal Number to convert it into Binary  Number  ";
  cin>>num;
  int rem, mul=1,ans=0;
    while(num>0)
  {
      rem=num%10;
      num=num/10;
      ans=ans+rem*mul;
      mul=mul*8;
  }

  int rem_1,mul_1=1,ans_1=0;
  while(ans>0)
 {
     rem_1=ans%2;
    ans=ans/2;
     ans_1=ans_1+rem_1*mul_1;
     mul_1=mul_1*10;
 }
 cout<<ans_1;
  

    return 0;
}
