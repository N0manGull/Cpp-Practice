// An Armstrong number (for 3-digit numbers) is a number such that:

// The sum of the cubes of its digits is equal to the number itself.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,n;
<<<<<<< HEAD
    cout << "Enter a 3 digit number to check it is Armstrong number or not: " << endl;
=======
    cout << "Enter a 3 digit number to check it is Armstrong number or not: ";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
    cin >> n ;
    int orignal = n;
    c = 0;
    while (n>0){
        a = n % 10;
        b = a*a*a;
        c = c + b;
        n = n / 10;
    }
if (c == orignal){
<<<<<<< HEAD
    cout << "No. is Armstrong" << endl;
    }
else{
    cout << "Not an Armstrong number" << endl;
=======
    cout << "No. is Armstrong";
    }
else{
    cout << "Not an Armstrong number";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
    }
return 0;
}