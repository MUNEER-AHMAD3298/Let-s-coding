#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the number";
    cin>> n;
    
   while(n>9)
   {
       int ans=0,rem;
       while (n>0)
       {
       rem=n%10;
       n=n/10;
       ans=ans+rem;
       }
       n=ans;
   }
   cout<<n;
    }
    
