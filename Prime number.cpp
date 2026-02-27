#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "enter the number to find either it is prime or not\n";
    cin >> n;
    if (n < 2)
        cout << "It is not a prime number";

    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                cout << "It is not a prime number";
                return 0;
            }
        }
        cout << "It is a prime number";
    }

}
