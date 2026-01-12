// An Armstrong number (for 3-digit numbers) is a number such that:

// The sum of the cubes of its digits is equal to the number itself.

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b,c,n;
    cout << "Enter a 3 digit number to check it is Armstrong number or not: " << endl;
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
    cout << "No. is Armstrong" << endl;
    }
else{
    cout << "Not an Armstrong number" << endl;
    }
return 0;
}