// Write a program that prints a pyramid/triangle number pattern based on user input
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number to get number's triangle: ";
    cin >> n;
    if (n <= 0) { 
        cout << "Enter a positive No";
    }
    else{
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= i; j++){
            cout << j << " ";
        }
    cout << endl;
    }
    }
    
return 0;
}