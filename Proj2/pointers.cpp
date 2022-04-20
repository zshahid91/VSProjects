#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    string food = "teenday";

    cout << food << endl;

    cout << &food << endl;

    string* ptr = &food;
    // string * ptr = &food;
    // string *ptr = &food;

    cout << ptr;

    return 0;
}