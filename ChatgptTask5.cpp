// A prime number is a number greater than 1 that has only two divisors:

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a=2, n;
    cout << "Enter a number to check either it is prime or not: ";
    cin >> n;
    if (n<=1){
        cout << "Not a Prime Number";
        return 0;
    }
    while (a <= sqrt(n)){
        if (n % a == 0){
            cout << "Not a Prime number";
            return 0;
        }
    a++;
    }
    cout << "Prime Number";
return 0;
}