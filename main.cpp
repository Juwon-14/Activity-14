//Juwon Hong
//CIS 25
//16/09/2024

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(static_cast<unsigned int>(time(0)));
    int number = rand() % 10 + 1;
    int guess;

    do {
        cout << "Guess the number (1 to 10): " << endl;
        cin >> guess;

        if (guess < number) {
            cout << "Too low!" << endl;
        } else if (guess > number) {
            cout << "Too high!" << endl;
        }
    } while (guess != number);

    cout << "You got it!" << endl;

    return 0;
}
