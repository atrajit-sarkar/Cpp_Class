#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Enter a number: ";
    cin >> n;

    // for loop - factorial (long long holds up to 20!)
    long long fact = 1;
    for (int i = 1; i <= n; i++)
    {
        // fact=fact*i;
        // Short way of writing the above line is:
        fact *= i;
    }
    cout << "\nFactorial of " << n << " = " << fact << endl;

    // while loop - sum of digits
    int num = n, sum = 0;
    // n=1729=(1*10^3)+(7*10^2)+(2*10^1)+9*10^0=10*172+9
    // we need to find: 1+7+2+9
    while (num > 0)
    {
        sum += num % 10;
        // sum=sum+num%10; // sum=sum+(num%10)
        num /= 10;
        // num=num/10; // num=num/10
    }
    cout << "Sum of digits of " << n << " = " << sum << endl;

    return 0;
}
