#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int count = 0, count2 = 0;

    for(count = 0;count <= 4;count++){
        
        for(count2 = 0;count2 <= 2;count2++){
            cout << "*";
        }
        cout << endl;
    }

    count = count2 = 0;

    while(count <= 4){
        while(count2 <= 2){
            cout << "*";
            count2++;
        }

        cout << endl;
        count2 = 0;
        count++;
    }
    return 0;
}