#include <iostream>
using namespace std;
int main() {
  int num;
  cout<<"Enter the Decimal Number  to convert it into Binary Number  ";
  cin>>num;
  int rem, mul=1,ans=0;
    while(num>0)
  {
      rem=num%2;
      num=num/2;
      ans=ans+rem*mul;
      mul=mul*10;
  }
  cout<<ans;

    return 0;
}
