// Atharva Usturge
// 12/18/24
// do now lab

#include <iostream>
#include <iomanip>


using namespace std;


int main() {
// number 1
    int arr[10];
    int evenCount = 0;

    srand(time(0));
    for (int i = 0; i < 10; i++) {
        arr[i] = rand() % 10 + 1; 
    }
   printf("Array: ");
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Array backwards: ";
    for (int i = 10 - 1; i >= 0; i--) {
        cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Total number of even numbers: " << evenCount << endl;
// number 2

    int sales[5];
    string daysOfWeek[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday"};
    string choice;
    cout << "Enter total sales for the week:" << endl;
    for (int i = 0; i < 5; i++) {
        cout << daysOfWeek[i] << ": ";
        cin >> sales[i];
    }

    do {
        int day;
        cout << "\nChoose a day of the week: ";
        cin >> day;
        if (day >= 1 && day <= 5) {
            cout << "Total sales for " << daysOfWeek[day - 1] << ": $" << sales[day - 1] << endl;
        } else {
            cout << "Invalid choice. Please choose a number between 1 and 5." << endl;
        }
        cout << "Do you wish to continue? (Yes/No): ";
        cin >> choice;

    } while (choice == "Yes" || choice == "yes");
    //  number 3
    int numPeople = 20;
    int ageList[numPeople];
    int countAbove15 = 0;
    for (int index = 0; index < numPeople; index++) {
        cout << "Enter age #" << (index + 1) << ": ";
        cin >> ageList[index];
    }
    for (int index = 0; index < numPeople; index++) {
        if (ageList[index] > 15) {
            countAbove15++;
        }
    }
    cout << "\nTotal number of ages greater than 15: " << countAbove15 << endl;
    // number 4
    double finalGrade[6] = {85.8, 93.7, 76, 88.5, 100, 91.3};
    double sum = 0.0;
    for (int i = 0; i < 6; i++) {
        sum += finalGrade[i];
    }
    double average = sum / 6;
    cout << fixed << setprecision(1);
    cout << "The average grade is: " << average << endl;
   
}
