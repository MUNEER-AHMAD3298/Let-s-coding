#include <iostream>
using namespace std;
int sum(int a,int b)
{
    int ans=a+b;
    return ans;
}
int main() {
    int m,n;
    cout <<"Enter First number ";
    cin>> m;
    cout <<"Enter Second number ";
    cin>> n;
  cout<<"Sum of "<<m<<" and "<<n<<" = "<<sum(m,n);
    }
    
