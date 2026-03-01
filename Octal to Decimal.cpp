#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter the Octal Number  to convert it into  Decimal Number  ";
  cin>>num;
  int rem, mul=1,ans=0;
    while(num>0)
  {
      rem=num%10;
      num=num/10;
      ans=ans+rem*mul;
      mul=mul*8;
  }
  cout<<ans;

    return 0;
}
