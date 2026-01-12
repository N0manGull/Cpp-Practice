// Write a C++ program that takes a positive integer and returns its reverse.

#include<iostream>
using namespace std;

int main(){
    int a, b=0, n;
    cout << "Enter a positive number to get its reverse: ";
    cin >> n;
    if(n<=0){
        cout << "I told you to enter a \"positive number\" !";
        return 0;
    }
    while (n>0){
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
<<<<<<< HEAD
    cout << b << endl;
=======
    cout << b;
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
return 0;
}