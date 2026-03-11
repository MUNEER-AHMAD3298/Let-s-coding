#include <iostream>
using namespace std;
int main() {
 string s;
 
 //   Pallindrome
 cout<<"Enter any  string  ";
 cin>>s;
  int start=0;
  int end=s.size()-1;
  while(start<end)
  {
      if(s[start]!=s[end])
      {
          cout<<"Not a Pallindrome";
           return 0;
      }
      else
      {
      cout<<"It is a pallindrome";
      return 0;
      }
      start++,end--;
     
  }
 
}
