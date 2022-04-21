#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    string food = "teenday";
    int age = 22;

    cout << food << endl;

    cout << &food << endl;

    string* ptr = &food;
    int *age_ptr = &age;
    // string * ptr = &food;
    // string *ptr = &food;

    cout << ptr << "    " << age_ptr << "   " << ptr2;

    return 0;
}