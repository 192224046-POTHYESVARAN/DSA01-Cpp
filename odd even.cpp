#include <iostream>
using namespace std;
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (number % 2 == 0) {
        cout << number << " is even." << std::endl;
    } else {
        cout << number << " is odd." << std::endl;
    }
    return 0;
}

