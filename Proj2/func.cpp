#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

// Function Definition
// Default Arguments
// User-Defined Functions

float add_nums(float num1 = 0, float num2 = 0){
    float sum = num1 + num2;
    return sum;
}

// Passing arrays to a function

float mul_nums(float mul_array[3]){
    float product = 1;
    for(int i = 0;i <= 2;i++){
        product *= mul_array[i];
    }
    
    return product;
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

    cout << add_nums() << endl; // Empty Function
    name_printer();
    name_printer("Huzaifa");

    float mul_array[3] = {2, 4, 4};
    cout << mul_nums(mul_array);
    
    return 0;
}