// Atharva 
// top list
// 11/11
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int listLength; 
    cout << "Create a list of the best Youtubers" << endl;
    
    cout << "How long do you want your list to be?" << endl;
    cin >> listLength;
    cin.ignore(); 
    
    string youtubers[listLength]; 
    
    
    for (int i = 0; i < listLength; i++) {
        cout << "Enter your youtuber here: " << endl; 
        getline(cin, youtubers[i]); 
    }
    
    
    for (int i = 0; i < listLength; i++) {
 cout << youtubers[i] << endl; 
    }
    return 0;
}
