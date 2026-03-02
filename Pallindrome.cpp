#include <iostream>
using namespace std;
int main() {
    int n;
    cout <<"Enter the number ";
    cin>> n;
    int a=n;
       int ans=0,rem;
       while (n>0)
       {
       rem=n%10;
       n=n/10;
       ans=ans*10+rem;
       }
 if(ans==a)
 {
     cout<<"It is a Pallindrome";
 }
 else
  {
     cout<<"It is  Not a Pallindrome";
 }
    }
