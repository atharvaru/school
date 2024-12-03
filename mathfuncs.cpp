// Atharva
// Math functions
// 12/3
#include <iostream>
#include <cmath>
using namespace std;

int main() {
  // problem 1 (one side of triangle is 8 inches the other side is 5 inches find the hypotenuse)

int sideOne = 8;
int sideTwo = 5;
float mano = ceil(69.56);
  float hypotenuse = hypot(sideOne, sideTwo);
  cout<<"When one side of triangle is: " << sideOne << " and the other is: " << sideTwo << " the hypotenuse is: " << hypotenuse << endl;
  cout << ""<<endl;
  //problem 2(mano gets his test back and gets a 69.56 round to the ceiling does he pass)

  cout<<"When Manos got a 69.56 on the test the teacher raised it to the ceiling and then mano got a: " << mano << " so mano was able to get a C- pretty bad but its ok " << endl;

  cout << ""<<endl;

  // problem 3 (Ayaan wants to be a garabage man like his friend Vinood. The amount of gargage he picks up in a day can be represented in is day is the sqrt of 34567885746.
  // while his friend vinood picks up 973^2 pieces of garbage who picks up more

  float ayaan = sqrt(34567885746);
  float vinood = pow(439, 2);


 

cout << "Ayaan picks up the square root of 34567885746 while Vinood picks up 439 square who makes more"<<endl;
cout << ""<<endl;
cout<< "Ayaan picks up " << ayaan << " pieces of trash" << endl;
cout << ""<<endl;
cout<< "Vinood picks up " << vinood << " pieces of trash" << endl;
cout << ""<<endl;
cout << "Vinood picks up " << vinood - ayaan << " more pieces of trash" << endl;


}

