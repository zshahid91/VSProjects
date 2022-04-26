#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    string food = "pizza";
    int age = 22;

    cout << food << endl;

    cout << &food << endl;

    string* ptr = &food;
    int *age_ptr = &age;
    int** age_ptr2 = &age_ptr; // Pointer-to-pointer
    // string * ptr = &food;
    // string *ptr = &food;

    cout << *ptr << "    " << age_ptr <<"   " << age_ptr2 << endl;

    return 0;
}