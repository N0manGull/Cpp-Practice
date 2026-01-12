// Fibonacci series till given number:
#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c, n;
<<<<<<< HEAD
    cout << "Enter the number to get Fibonacci series to that number: " << endl;
    cin >> n;
    if (n<=0){
        cout << "Fibonacci series doesn't exist in negative numbers or at zero." << endl;
=======
    cout << "Enter the number to get Fibonacci series to that number: ";
    cin >> n;
    if (n<=0){
        cout << "Fibonacci series doesn't exist in negative numbers or at zero.";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
    }
    else if (n>0){
        cout << a << " " << b << " ";
        while (true) {    // in case of for loop, for (;;)
            c = a + b;
            if (c > n){
                break;
            }
            cout << c << " ";  
            a = b;
            b = c;

        } 
<<<<<<< HEAD
        cout << endl;
=======
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
    }
return 0;
}