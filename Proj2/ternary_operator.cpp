#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // Ternary Operator/ Conditional Operator/ Short hand if...else
    
    float marks = 0;
    string result;
    int position = 0, m = 1, n = 2;

    cout << "Enter the marks = ";
    cin >> marks;

    // (marks < 0 || !(marks > 100) ) ? (cout << "Wrong entry" << endl):(cout << "Go on!" << endl);

    //(3 > 4) or (3 < 4)


    // (marks >= 10 and marks <= 40 ) ? (cout << "Fail"):(cout << "Pass");

    position = (marks >= 40 and marks <= 100 ) ? (m += 2) : (n *= 4);

    cout << position << endl;

    // if(marks >= 40 and marks <= 100){
    //     cout << "Pass" << endl;
    // }
    
    // else{
    //     cout << "Fail" << endl; 
    // }

    return 0;
}