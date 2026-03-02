#include <iostream>
using namespace std;
int fact(int n)
{
    int ans =1;
    for(int i=n;i>=1;i--)
    {
        ans=ans*i;
    }
    return ans;
}
int main() {
    int m;
    cout <<"Enter First number to its Factorial ";
    cin>> m;
    cout<<"Factoiral of "<<m<<" = "<<fact(m);
    }
