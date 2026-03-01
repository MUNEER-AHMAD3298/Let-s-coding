#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the year to find either it is a Leap year or Not  ";
    cin>>n;
if(n%400==0)
cout<<n<<" is a Leap year";
else if(n%4==0&&n%100!=0)
cout<<n<<" is a Leap year";
else
cout<<n<<" is Not a  Leap year";
    return 0;
}
