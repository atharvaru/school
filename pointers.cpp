#include <iostream>
using namespace std;
int main(){
    int x  = 50;
    int *p = &x;
    *p = 75; 
    cout << x << endl;
    cout <<  &p << endl;
    cout << " " << endl;

    // part 2
    int nums[5] = {10, 20, 30, 40 , 50};
    cout << *nums << endl;
    cout << *(nums + 1) << endl;
    cout << *(nums + 2) << endl;
    cout << *(nums + 3) << endl;
    cout << *(nums + 4) << endl;
    cout << " " << endl;
    *(nums + 2) = 100;
    cout << *nums << endl;
    cout << *(nums + 1) << endl;
    cout << *(nums + 2) << endl;
    cout << *(nums + 3) << endl;
    cout << *(nums + 4) << endl;
    //  challenege 
    cout << " " << endl;
     char yo = 'a';
     char *p2 = &yo;
     cout << yo << endl;
     cout << &p2 << endl;
     *p2 = 'b';
     cout << *p2 << endl;
    return 0;
}
