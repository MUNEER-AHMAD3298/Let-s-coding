#include <iostream>
using namespace std;
int main() {
   int n;
   cout<<"Enter the number to print sum from  1 to that number  ";
   cin>>n;
   int i=0;
 int ans=0;
  do
{
      
      ans=ans+i;
      i++;
     
}while(i<=n);
cout<<ans;
    return 0;
}
