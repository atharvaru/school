//Atharva
// Pizza Shop
// 11/25/24
// Extra:
#include <iostream>
using namespace std;
string shopName(); 
double priceOfSmall = 10.50;
double priceOfLarge = 18.75;
double pricePerTopping = 0.80;
char sizeOfPizza;
int numToppings;
int main()
{
    

    string shop = shopName();
    cout << "Welcome to " << shop << endl;

    cout << "Would you like to order a small or a large (s/l) " << endl;
    cin >> sizeOfPizza;

    cout << "How many toppings would you like" << endl;
    cin >> numToppings;

}

string shopName() {
    return "Uncs Puzza";
}

void calculatePizzaPrice(char sizeOfPizza, int numToppings) {
    
}

