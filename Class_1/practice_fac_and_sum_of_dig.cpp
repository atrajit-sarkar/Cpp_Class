#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number ~ ";
    cin >> n;

    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }

    cout << "The value of the factorial of " << n << " = " << fact << endl;


    int sum = 0;
    while (n>0)
    {
        sum=sum+(n%10); //last digit, n=1729 ~ 9, 172~ 2, 17 ~7, 1~1
        n=n/10; // Rest of the number except the last digit 172~ 17~ 1~0
    }

    cout << "Sum of the digits of " << n << " is: "<<sum<<endl;
    
}