#include<iostream>
#include<cmath>

using namespace std;

// Function Definition
float add_nums(float num1, float num2){
    float sum = num1 + num2;
    return sum;
}


int main(){

    // Calling a function
    cout << add_nums(1.1, 2) + 2;

    float number1, number2;
    cout << "Enter the 1st value = ";
    cin >> number1;
    
    cout << "Enter the 2nd value = ";
    cin >> number2;

    cout << add_nums(number1, number2);
    return 0;
}