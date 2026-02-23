// Write a program using nested for loop such that by entering a number we get continuous number's floyd triangle. 
#include<iostream>
using namespace std;

int main(){
	int n,m=1;
	cout << "Enter the number to get floyd triangle: "; 
	cin >> n; 
	for(int i=1; i <= n; i++){
	    for(int j=1; j<= i; j++){
	        cout << m << " ";
	        m++;
	    }
	    cout << "\n";
	}
return 0; 
}