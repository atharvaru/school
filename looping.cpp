// Atharva Usturge
// Looping Lab
// 11/5
// Extra: Higher or Lower

#include <iostream>
#include <string>

int main() {
   const std::string daysOfWeek[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
    std::string quotes[7];

    // Loop to
    for (int i = 0; i < 7; i++) {
        std::cout << "Enter a motivational quote for " << daysOfWeek[i] << ": ";
        std::getline(std::cin, quotes[i]);
    }

    // Display all quotes
    std::cout << "\nYour Motivational Quotes for the Week:\n";
    for (int i = 0; i < 7; i++) {
        std::cout << daysOfWeek[i] << ": " << quotes[i] << std::endl;
    }

// Exercise 2
int energy = 5;
    int supplies = 0;

    while (energy > 0 && supplies < 10) {
        int action;
        std::cout << "Current Energy: " << energy << ", Supplies: " << supplies << std::endl;
        std::cout << "Choose an action (1: Search for supplies, 2: Rest): ";
        std::cin >> action;

        if (action == 1) {

            if (energy >= 1) {
                energy -= 1; // cost 1 energy
                supplies += 1; // gain 1 supply
                std::cout << "You searched for supplies and found 1 supply" << std::endl;
            } else {
                std::cout << "Not enough energy to search for supplies" << std::endl;
            }
        } else if (action == 2) {
            // Rest
            energy += 2; 
            std::cout << "You rested and restored 2 energy" << std::endl;
        } else {
            std::cout << "Invalid action. Please choose 1 or 2." << std::endl;
        }
    }

    // end conditions
    if (supplies >= 10) {
        std::cout << "You've gathered enough supplies to escape" << std::endl;
    } else {
        std::cout << "You ran out of energy budd" << std::endl;
    }

// exersise 3

     int code = 783; 

    int guess;
    char tryAgain;

    do {
        std::cout << "Enter your guess (3-digit code): ";
        std::cin >> guess;

        if (guess == code) {
            std::cout << "Congratulations! You've unlocked the box!" << std::endl;
            break; // exit the loop if the guess i
        } else {
            // EXTRA the guess is higher or lower
            if (guess < code) {
                std::cout << "Your guess is too low." << std::endl;
            } else {
                std::cout << "Your guess is too high." << std::endl;
            }

            std::cout << "Would you like to try again? (Y/N): ";
            std::cin >> tryAgain;

            // Convert to upper
            tryAgain = toupper(tryAgain);
        }
    } while (tryAgain == 'Y');

    if (tryAgain == 'N') {
        std::cout << "The box remains locked." << std::endl;
    }
    return 0;
}
