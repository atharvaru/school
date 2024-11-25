// Atharva
// Pizza Shop
// 11/25/24
// closing function
#include <iostream>
using namespace std;

string shopName(); 
double calculatePizzaPrice(char sizeOfPizza, int numToppings);
string closing();
double priceOfSmall = 10.50;
double priceOfLarge = 18.75;
double pricePerTopping = 0.80;
char sizeOfPizza;
int numToppings;


int main() {
    string shop = shopName();
    cout << "Welcome to " << shop << endl;

    cout << "Would you like to order a small or a large (s/l)? " << endl;
    cin >> sizeOfPizza;

    cout << "How many toppings would you like?" << endl;
    cin >> numToppings;

    double totalPrice = calculatePizzaPrice(sizeOfPizza, numToppings);

    
    if (totalPrice > 0) {
        cout<< "Size of Pizza: " << sizeOfPizza << endl;
        cout << "Number of Toppings: " << numToppings << endl;
        cout << "Your total price is: $" << totalPrice << endl;
    }
    
    string hi = closing();
    
    cout<< hi << endl;
    return 0;
}

string shopName() {
    return "Uncs Puzza";
}

double calculatePizzaPrice(char sizeOfPizza, int numToppings) {
    double totalPrice = 0.0;

    if (sizeOfPizza == 's' || sizeOfPizza == 'S') {
        totalPrice = priceOfSmall + (numToppings * pricePerTopping);
    } 
    else if (sizeOfPizza == 'l' || sizeOfPizza == 'L') {
        totalPrice = priceOfLarge + (numToppings * pricePerTopping);
    }
    else {
        cout << "Invalid size selected." << endl;
    }

    return totalPrice;
}
string closing(){
    return "Thank you for eating at my Pizza";
}
