#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
   
    srand(static_cast<unsigned int>(time(0)));

    int secretNumber = rand() % 100 + 1;

    std::cout << "Welcome to the Guess the Number Game!\n";
    std::cout << "I've selected a random number between 1 and 100. Can you guess it?\n";

    int userGuess;
    int attempts = 0;

    while (true) {
  
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        attempts++;
        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber
                      << " in " << attempts << " attempts.\n";
            break;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low! Try again.\n";
        } else {
            std::cout << "Too high! Try again.\n";
        }
    }

    return 0;
}

