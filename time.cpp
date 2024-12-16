// Atharva Usturge
// 12/12/24
// time lab

#include <iostream>
#include <ctime>
#include <chrono>
#include <iomanip>  

using namespace std;
using namespace std::chrono;

int main() {

    string name;
    time_t start, end; 

    //1. If it is 10AM in London. What time is it in Tokyo? What is the UTC offset?
    // +9 UTC so it would be 7pm
    //2. What is the UTC offset for Mountain Standard Time?
    // -7

    // 1)
    time_t now = time(nullptr);
    cout<<"Current time: " << ctime(&now);

    // 2)
    time_t then = time(nullptr);

    int offset;
    cout << "Enter a time offset: ";
    cin >> offset;

    then += offset * 3600;

    tm* timeZoneTime = gmtime(&then);

    cout<<"Time with Offset: " << asctime(timeZoneTime);

    // 3)
    time(&start); 
    cout<<"Whats your name: ";
    cin >> name;
    time(&end); 

    double time_taken = double(end - start); 
    cout << "Time taken by program is : " << fixed << time_taken<< setprecision(2); 
    cout << " sec " << endl; 


    return 0;

   
}
