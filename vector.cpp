// Atharva Usturge
// 1/23/25
//  vector lab

#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

void displayGreeting(vector<string>names) {
    cout << "Hello, ";
    for (int i = 0; i < names.size(); i++) {
        cout << names[i];
        if (i < names.size() - 1) {
            cout << " ";
        }
    }
    cout << "!" << endl;
}

int main(){
    // number `
    vector<int> numbers = {5,12,7,10,8,9,15,7,4,1};
    // print number 3
    cout << numbers.at(2) << '\n' << endl;
    numbers.pop_back();

    // print all
    for(int i = 0; i <numbers.size(); i++){
        cout << numbers[i] << endl;
    }

    // number 2
    vector<int> user;
char buildVector;
int numBuildVector;
cout << "Lets Build A Vector(Enter A to add, D to Display, S for Size, X to stop): " << endl;
cin >> buildVector;

while(buildVector != 'X'){
    if(buildVector == 'A'){
        cout << "What number would you like to input"<< endl;
        cin >> numBuildVector;
        user.push_back(numBuildVector);
    }
    else if(buildVector == 'D'){
        for(int i = 0; i < user.size(); i++){
            cout << user[i] << endl;
        }
    }
    else if(buildVector == 'S'){
        cout << user.size() << endl;
    }
    
    cout << "Lets Build A Vector(Enter A to add, D to Display, S for Size, X to stop)" << endl;
    cin >> buildVector;
}
// number 3

vector<string>colors;
string color;

cout<<"Enter a color (No for stop): "<<endl;
cin >> color;
colors.push_back(color);

while(color != "No"){
cout<<"Enter a color (No for stop): "<<endl;
    cin >> color;
    colors.push_back(color);    
}

if (color == "No"){
    colors.pop_back();
    cout<< "Here are your colors" << endl;
    for(int i = 0; i<colors.size(); i++){
        cout<<colors[i]<<endl;
    }
}

// number 4 Open
 vector<string> names;
    int numNames;
    
    cout << "How many names do you have: ";
    cin >> numNames;
    
    // Input names
    for (int i = 0; i < numNames; i++) {
        string name;
        cout << "Enter name " << i + 1 << ": ";
        cin >> name;
        names.push_back(name);
    }
    displayGreeting(names);

    return 0;
}
