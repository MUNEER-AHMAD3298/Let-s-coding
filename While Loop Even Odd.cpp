
#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter the number to find either it is EVen or Odd ";
   cin>>n;
 
   while(n!=0)
{
      if(n%2==0)
      {
     cout<<"Even number";
     return 0;
      }
      else
      {
          cout<<"Odd number";
          return 0;
      }
}
    return 0;
}
