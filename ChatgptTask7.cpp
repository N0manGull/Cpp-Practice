// Fibonacci series till given number:
#include<iostream>
using namespace std;

int main(){
    int a = 0, b = 1, c, n;
    cout << "Enter the number to get Fibonacci series to that number: " << endl;
    cin >> n;
    if (n<=0){
        cout << "Fibonacci series doesn't exist in negative numbers or at zero." << endl;
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
        cout << endl;
    }
return 0;
}