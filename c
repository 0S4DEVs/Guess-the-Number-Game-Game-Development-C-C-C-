#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main()
{
    int randomNumber, guess, attemptsLeft = 10;
    
    // Generate random number between 1 and 100
    srand(time(NULL));
    randomNumber = rand() % 100 + 1;
    
    cout << "Welcome to Guess the Number Game!\n\n";
    cout << "You have 10 attempts to guess the number between 1 and 100.\n\n";
    
    do {
        cout << "Attempts left: " << attemptsLeft << endl;
        cout << "Enter your guess: ";
        cin >> guess;
        
        if (guess == randomNumber) {
            cout << "\nCongratulations! You guessed the number!\n";
            break;
        } else if (guess < randomNumber) {
            cout << "Your guess is too low.\n\n";
        } else {
            cout << "Your guess is too high.\n\n";
        }
        
        attemptsLeft--;
        
    } while (attemptsLeft > 0);
    
    if (attemptsLeft == 0) {
        cout << "\nSorry, you ran out of attempts. The number was " << randomNumber << ".\n";
    }
    
    return 0;
}
