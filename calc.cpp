#include <iostream>
using namespace std;
// Atharva
// 9/12
// Calc Lab

int main()
{
    
    
   
    cout <<" Hey Sigmma give me a number" << endl;
    int num;
    cin >> num;
    cout << " Operator [+,-,*,/,%,++,--]";
    string op;
    cin >> op;
    cout <<" Give me another number";
    int num2;
    cin >> num2;
    int num3;

    if(op == "+"){
        
        num3 = num + num2;
        cout << num3;
    }
    if(op == "-"){
        num3 = num - num2;
        cout << num3;
    }
    
  
}
