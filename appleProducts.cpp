//Atharva
// 1/27/25
//  vector lab 2
// have user replace a product
#include<iostream>
#include<vector>
#include<string>
using namespace std;

int main(){

    vector<string> products = {"iPhone", "AirPods", "MacBook","iPad", "Apple Watch" };

    for(auto itr = products.begin(); itr != products.end(); itr++){
        cout << *itr << endl;
    }

    cout << "Enter a new product: ";
    string newProduct;
     getline(cin, newProduct);

    cout<< "Enter the position you want to insert the product in the hierarchy: " << endl;
    int position;
    cin >> position;

    products.insert(products.begin() + position, newProduct);

    for(auto itr = products.begin(); itr != products.end(); itr++){
        cout << *itr << endl;
    }

    cout<<"Enter the position you want delete your least favorite product: " << endl;
    int deletePosition;
    cin >> deletePosition;
    products.erase(products.begin() + deletePosition);

    for(auto itr = products.begin(); itr != products.end(); itr++){
        cout << *itr << endl;
    }
    // extra

    cout<<"Enter the position you want to replace a product: " << endl;
    int replacePosition;
    cin >> replacePosition;
    cout << "Enter the new product: ";
    string newProduct2;
    cin.ignore(); 
    getline(cin, newProduct2);
    products[replacePosition] = newProduct2;
    
     for(auto itr = products.begin(); itr != products.end(); itr++){
        cout << *itr << endl;
    }

    return 0;   
}
