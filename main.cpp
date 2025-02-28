#include <iostream>
using namespace std;

int factorial(int n)
{ 
    int result = 1;
    if (n==0)
      return result;
    for (int i = n; i>=1; i--)
    {
        result *= i;
    }
    return result;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "Factorial of " << num << " is: " << factorial(num) << endl;
    return 0;
}