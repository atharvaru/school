// Atharva Usturge
// 12/6
// lab

#include <iostream>
#include <cctype>
#include <string>

using namespace std;

int main() {
    string name;

    cout << "Enter your name: ";
    getline(cin, name);
    
    // Convert to uppercase
    for (char& c : name) {
        if(!isalpha(c)){
            cout<<"their is a special letter goodbye";
          return 0;  
        }
        else{
              c = toupper(c);
        }
      
    }

    cout << "Your name in uppercase: " << name << endl;

    return 0;
}
