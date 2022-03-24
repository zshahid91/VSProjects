#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int i = 0, j= 0;

    for(i = 0;i <= 4;i++){
        
        for(j = 0;j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }

    for(i = 4;i >= 0;i--){
        
        for(j = 0;j <= i;j++){
            cout << "*";
        }
        cout << endl;
    }

    // count = count2 = 0;

    // while(count <= 4){
    //     while(count2 <= 2){
    //         cout << "*";
    //         count2++;
    //     }

    //     cout << endl;
    //     count2 = 0;
    //     count++;
    // }
    return 0;
}