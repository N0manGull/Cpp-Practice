// Fibonacci series till given number:
#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c, n;
    cout << "Enter the number to get Fibonacci series to that number: ";
    cin >> n;
    if (n<=0){
        cout << "Fibonacci series doesn't exist in negative numbers or at zero.";
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
    }
return 0;
}