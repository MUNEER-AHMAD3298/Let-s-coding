#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter the number to print its factorial  ";
   cin>>n;
   int i=n;
   long int ans=1;
   while(i>=1)
   {
       
       ans=ans*i;
      i--;
   }
   cout<<"Factorial of "<<n<<" = "<<ans<<endl;
    return 0;
}
