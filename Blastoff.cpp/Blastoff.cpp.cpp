#include <iostream>
using namespace std;

int main() {
    int startNumber;

    // Prompt the user to enter a starting number
    cout << "Enter a number to start the countdown: ";
    cin >> startNumber;

    // Countdown using a for loop
    for (int i = startNumber; i >= 1; --i) {
        cout << i << endl;
    }

    // Print the "Blast off!" message
    cout << "Blast off!" << endl;

    return 0;
}
