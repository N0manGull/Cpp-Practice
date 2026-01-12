// A prime number is a number greater than 1 that has only two divisors:

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a=2, n;
    cout << "Enter a number to check either it is prime or not: ";
    cin >> n;
    if (n<=1){
<<<<<<< HEAD
        cout << "Not a Prime Number" << endl;
=======
        cout << "Not a Prime Number";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
        return 0;
    }
    while (a <= sqrt(n)){
        if (n % a == 0){
<<<<<<< HEAD
            cout << "Not a Prime number" << endl;
=======
            cout << "Not a Prime number";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
            return 0;
        }
    a++;
    }
<<<<<<< HEAD
    cout << "Prime Number" << endl;
=======
    cout << "Prime Number";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
return 0;
}