#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

// Function Definition
// Default Arguments

float add_nums(float num1 = 0, float num2 = 0){
    float sum = num1 + num2;
    return sum;
}

void age_printer(int age){
    cout << "Your age is " << age;
}

void name_printer(string nm = "Zohaib"){
    cout << "Your name is " + nm << endl;
}


int main(){

    // Calling a function
    cout << add_nums(1.1, 2) + 2 << endl;

    float number1, number2;
    cout << "Enter the 1st value = ";
    cin >> number1;
    
    cout << "Enter the 2nd value = ";
    cin >> number2;

    cout << add_nums(number1, number2) << endl;
    age_printer(10);
    cout << endl;

    cout << add_nums() << endl;
    name_printer();
    name_printer("Huzaifa");
    
    return 0;
}