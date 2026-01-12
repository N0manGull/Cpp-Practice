// A number is called a palindrome if it reads the same forward and backward.

#include<iostream>
using namespace std;

int main(){
    int a, b=0, orignal, n;
    cout << "Enter a positive number to get check either it is palindrome or not: ";
    cin >> n;
    orignal = n;
    if(n<=0){
        cout << "I told you to enter a \"positive number\" !";
        return 0;
    }
    while (n>0){
        a = n % 10;
        b = b * 10 + a;
        n /= 10;
    }
    cout << b << "\n";
    if (b==orignal){
<<<<<<< HEAD
        cout << "Palindrome" << endl;
    }
    else{ 
        cout << "Not a Palindrome" << endl;
=======
        cout << "Palindrome";
    }
    else{ 
        cout << "Not a Palindrome";
>>>>>>> 044897c681968c18bd64d44e3976d6f749bf85ae
    }
return 0;
}