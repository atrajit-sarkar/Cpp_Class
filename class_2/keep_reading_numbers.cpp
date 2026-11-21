#include<iostream>

using namespace std;

int main(){
    int number;
    do
    {
        cout << "Enter a number: ";
        cin >> number;
        cout << "You have entered: "<< number << endl;   
    } while (number!=0);
    
    cout << "You are wasted!"<< endl;

    return 0;
    
    
    
}