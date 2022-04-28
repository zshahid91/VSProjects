#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    string food = "anday waala burger";
    int age = 22;

    cout << food << endl;

    cout << &food << endl;

    string* ptr = &food; // Recommended method
    string** ptr2 = &ptr;
    string*** ptr3 = &ptr2;
    
    int *age_ptr = &age;
    int** age_ptr2 = &age_ptr; // Pointer-to-pointer
    // string * ptr = &food;
    // string *ptr = &food;

    // Dereference Operator
    cout << *ptr << "    " << **ptr2 << "     " << age_ptr << "   " << age_ptr2 << endl;

    *ptr = "Cheese Burger";
    **ptr2 = "chicken sandwich";

    cout << food << "   " << **age_ptr2 << "    " << **ptr2 << endl;

    return 0;
}