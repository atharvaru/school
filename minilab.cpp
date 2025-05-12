// Atharva U
// 5/12
// Reference Mini Lab
#include <iostream>

using namespace std;

void toLower(string &str) {
    for (int i = 0; i < str.length(); i++) {
        str[i] = tolower(str[i]);
    }
}
void multiply(int& num) {
    num *= 2;
}

int addRandomNumber(int num) {
    int randomValue = rand() % 100 + 1;
    int result = num + randomValue; 
    return result;   
}

void addToVector(vector<int> &num){
    num.push_back(4);
    num.push_back(5);
}
int main() {
    // part 1
    string user = "";
    cout << "Enter a string: ";
    getline(cin, user);
    toLower(user);
    cout << user << endl;

    // part 2
    int number;
    cout << "Enter a number: ";
    cin >> number;
    multiply(number);
    cout << number << endl;

    // part 3
    int nummer;
    cout << "Enter a number: ";
    cin >> nummer;
    int r = addRandomNumber(nummer);
    cout << r << endl;
    cout << " " << endl;
    
    //part 4

    vector<int>numss = {1, 2, 3}; 
    cout << numss[0] << endl;
    cout << numss[1] << endl;   
    cout << numss[2] << endl;
    cout << " " << endl;
    addToVector(numss);
    cout << numss[0] << endl;
    cout << numss[1] << endl;
    cout << numss[2] << endl;
    cout << numss[3] << endl;
    cout << numss[4] << endl;

}
