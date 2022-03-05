#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

    int count, total = 0, marks = 0;

    for(count = 1;count <= 5;count++){
        cout << endl <<"Enter the marks = ";
        cin >> marks;

        total += marks;

        cout << endl << "Running Total = " << total; // Running total
    }

    cout << endl <<"Final total = " << total;


    return 0;
}