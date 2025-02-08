
#include <iostream>
using namespace std;

bool isPrime(int value) {
    for (int i = 2; i < value; i++) {
        if (value % i == 0) {
            return false;
        }
    }
    return true;
}

void displayFactors(int value) {
    for (int i = 1; i <= value; i++) {
        if (value % i == 0) {
            cout << i;
        }
        cout << endl;
    }
}

int findNextPrime(int value) {
    int nextVal = value + 1;
    while (!isPrime(nextVal)) {
        nextVal++;
    }
    return nextVal;
}

int main() {
    int number;
    cout << "Enter a number: " << endl;
    cin >> number;
    
    bool primeCheck = isPrime(number);
    if (primeCheck) {
        cout << "A prime number" << endl;
        cout << "Next prime number greater than " << number << " is " << findNextPrime(number) << endl;
    } else {
        cout << number << " is not a prime number" << endl;
        displayFactors(number);
    }
}

