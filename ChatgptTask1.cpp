// Write a C++ function that takes a positive integer 
// and returns the sum of its digits.

#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 0, n;

    cout << "Enter a positive number to get the sum of its digits: ";
    cin >> n;
    if (n<=0){
        cout << "I told you to enter a \"positive number\" !";
        return 0;
    }
    while (n>0){
        a = n % 10;
        b = b + a; 
        n = n / 10;
        
    }
    cout << b << endl;   
return 0;
}