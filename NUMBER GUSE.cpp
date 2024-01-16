#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Generate a random number between 1 and 100
    int secretNumber = std::rand() % 100 + 1;

    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Number Guessing Game!\n";
    std::cout << "Try to guess the number between 1 and 100.\n\n";

    do {
        // Ask the user to guess
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;

        // Increment the number of attempts
        attempts++;

        // Provide feedback
        if (userGuess > secretNumber) {
            std::cout << "Too high! Try again.\n";
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Congratulations! You guessed the number in " << attempts << " attempts.\n";
        }

    } while (userGuess != secretNumber);
      system("pause");
    return 0;
}
