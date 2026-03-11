#include <iostream>
using namespace std;
int main() {
 string s,p,sum;
 
 // addition of two strings
 cout<<"Enter first string  ";
 cin>>s;
  cout<<"Enter second string  ";
 cin>>p;
 sum=s.append(p);
 cout<<sum;
 

    return 0;
}
