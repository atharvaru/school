// Atharva Usturge
// 12/18/24
// do now lab

#include <iostream>
#include <cmath>
#include <ctime>


using namespace std;


int main() {

   double num = 8.973582365492873;
    double roundedNum = round(num * 100.0) / 100.0; 

    cout << roundedNum << endl;


    srand(time(0)); 

    int randomNumber = rand() % 10 + 1;

    std::cout << "Random number: " << randomNumber << std::endl;
    return 0;

   
}
