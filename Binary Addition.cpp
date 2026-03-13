#include <iostream>
using namespace std;
int main() {
  int a,b;
  cin>>a>>b;
  int rem,mul=1,ans=0;
  while(a>0)
  {
     rem=a%10;
     a=a/10;
     ans=ans+rem*mul;
     mul=mul*2;
    
  }
//cout<<ans<<endl;
int rem_1,mul_1=1,ans_1=0;
while(b>0)
  {
     rem_1=b%10;
     b=b/10;
     ans_1=ans_1+rem_1*mul_1;
     mul_1=mul_1*2;
    
  }
  //cout<<ans_1<<endl;
  int sum=ans+ans_1;
  //cout<<sum<<endl;
 int rem_2,mul_2=1,ans_2=0; 
  while(sum>0)
  {
     rem_2=sum%2;
     sum=sum/2;
     ans_2=ans_2+rem_2*mul_2;
     mul_2=mul_2*10;
    
  }
  cout<<ans_2;
    return 0;
}
