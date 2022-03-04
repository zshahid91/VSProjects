#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string username = "Ronaldo7";

    cout << username[4] << endl;
    cout << username[7] << endl;
    
    cout << username[3] << username[0] << endl;

    // Square brackets have index numbers

    //username[8] = '7';

    username[0] = '7';
    username[7] = '8';
    cout << username;

    return 0;
}