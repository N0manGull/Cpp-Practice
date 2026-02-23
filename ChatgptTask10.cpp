#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b, size, orignal;

    cout << "Enter the starting range number: ";
    cin >> a;
    orignal = a;

    cout << "Enter the ending range number: ";
    cin >> b;

    if (a <= 0 || b <= 0) {
        cout << "Provided number/numbers are less than or equal to 0" << endl;
        return 0;
    }

    // Create array for the range
    size = b - a + 1;
    int arr[size];
    for (int i = 0; i < size; i++) {
        arr[i] = orignal + i;
    }

    // Print the array
    cout << "Numbers in the range:" << endl;
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n\n";

    // Prime checking
    cout << "Prime check for each number:" << endl;
    for (int i = 0; i < size; i++) {
        int num = arr[i];

        if (num == 1) { // 1 is not prime
            cout << num << " is Not Prime" << endl;
            continue;
        }

        bool isPrime = true;
        for (int n = 2; n <= sqrt(num); n++) {
            if (num % n == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            cout << num << " is Prime" << endl;
        } else {
            cout << num << " is Not Prime" << endl;
        }
    }

    return 0;
}