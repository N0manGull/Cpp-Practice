// Write a C++ function that takes a positive integer and returns how many digits it has.

#include<iostream>
using namespace std;

int main(){
    int a=0, n;
    cout << "Enter a positive number to get the not of digits it has: ";
    cin >> n;
    if (n<=0){
        cout << "I told you to enter a \"positive number\" ! ";
        return 0;
    }
    while (n>0){
        a = a + 1;
        n /= 10; 
    }
<<<<<<< HEAD
    cout << a << endl;
=======
    cout << a;
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
return 0;
}