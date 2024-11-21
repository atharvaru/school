// Atharva
// 11/21
// Function Lab
#include <iostream>
using namespace std;

void countdown();
void customGreet(string name, int times);
int getFavoriteNumber();
float calculateAverage(int a, int b, int c);
string name;
int times;
int a;
int b;
int c;
int main()
{
    // first program
    countdown();
  
    cout << "Whats your name" << endl;
    cin >> name;
    cout << "Enter a Number" << endl;
    cin >> times;
    customGreet(name,times);
    int number = getFavoriteNumber();

    cout << "Your favorite number is: " << number << endl;

    cout << "Enter threes numeros" << endl;
    cin >> a >> b >> c;

    float finav = calculateAverage(a, b, c);
    cout << finav;
}
// number 1
void countdown() {
    for (int i = 10; i >= 0; i--) {
        cout << i << endl;
    }
    cout << "Lift off!" << endl;
}
// number 2
void customGreet(string name, int times) {
    for (int i = 0; i <
        times; i++) {
        cout << "Hello " << name << endl;
    }
}
// number 3
int getFavoriteNumber() {
    return 7;
}
// number 4
float calculateAverage(int a, int b, int c) {
    float average = (a + b + c) / 3;
    return average;
}
