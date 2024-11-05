// Atharva Usturge
// Looping Lab
// 11/5
// Extra: Higher or Lower

#include <iostream>
#include <string>

int main() {
    // variables to store quotes for each day of the week
    std::string mondayQuote;
    std::string tuesdayQuote;
    std::string wednesdayQuote;
    std::string thursdayQuote;
    std::string fridayQuote;
    std::string saturdayQuote;
    std::string sundayQuote;

    // loop to prompt the user for each day's quote
    for (int i = 0; i < 7; i++) {
        std::string day;

        // determine the day of the week and prompt for the corresponding quote
        switch (i) {
            case 0:
                day = "Monday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, mondayQuote);
                break;
            case 1:
                day = "Tuesday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, tuesdayQuote);
                break;
            case 2:
                day = "Wednesday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, wednesdayQuote);
                break;
            case 3:
                day = "Thursday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, thursdayQuote);
                break;
            case 4:
                day = "Friday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, fridayQuote);
                break;
            case 5:
                day = "Saturday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, saturdayQuote);
                break;
            case 6:
                day = "Sunday";
                std::cout << "Enter a motivational quote for " << day << ": ";
                std::getline(std::cin, sundayQuote);
                break;
        }
    }

    // display all 
    std::cout << "\nYour Motivational Quotes for the Week:\n";
    std::cout << "Monday: " << mondayQuote << std::endl;
    std::cout << "Tuesday: " << tuesdayQuote << std::endl;
    std::cout << "Wednesday: " << wednesdayQuote << std::endl;
    std::cout << "Thursday: " << thursdayQuote << std::endl;
    std::cout << "Friday: " << fridayQuote << std::endl;
    std::cout << "Saturday: " << saturdayQuote << std::endl;
    std::cout << "Sunday: " << sundayQuote << std::endl;

// Exercise 2
int energy = 5;
    int supplies = 0;

    while (energy > 0 && supplies < 10) {
        int action;
        std::cout << "Current Energy: " << energy << ", Supplies: " << supplies << std::endl;
        std::cout << "Choose an action (1: Search for supplies, 2: Rest): ";
        std::cin >> action;

        if (action == 1) {
            // Search for supplies
            if (energy >= 1) {
                energy -= 1; // Cost 1 energy
                supplies += 1; // Gain 1 supply
                std::cout << "You searched for supplies and found 1 supply" << std::endl;
            } else {
                std::cout << "Not enough energy to search for supplies" << std::endl;
            }
        } else if (action == 2) {
            // Rest
            energy += 2; // Restore 2 energy
            std::cout << "You rested and restored 2 energy" << std::endl;
        } else {
            std::cout << "Invalid action. Please choose 1 or 2." << std::endl;
        }
    }

    // End conditions
    if (supplies >= 10) {
        std::cout << "You've gathered enough supplies to escape" << std::endl;
    } else {
        std::cout << "You ran out of energy budd" << std::endl;
    }

// exersise 3

     int code = 783; // Example code

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
