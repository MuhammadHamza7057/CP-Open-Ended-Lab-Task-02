#include <iostream>
#include <cmath>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int choice, start, end, num;

    cout << "Enter 1 to find prime numbers in a range, 2 to check if a number is prime: ";
    cin >> choice;

    if (choice == 1) {
        cout << "Enter the range (start and end): ";
        cin >> start >> end;
        cout << "Prime numbers in the range " << start << " to " << end << " are:" << endl;
        for (int i = start; i <= end; ++i) {
            if (isPrime(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }
    else if (choice == 2) {
        cout << "Enter a number: ";
        cin >> num;
        if (isPrime(num)) {
            cout << num << " is a prime number." << endl;
        }
        else {
            cout << num << " is not a prime number." << endl;
        }
    }
    else {
        cout << "Invalid choice. Please enter 1 or 2." << endl;
    }

    return 0;
}
