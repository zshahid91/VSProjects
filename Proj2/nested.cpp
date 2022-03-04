#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int count = 0, count2 = 0;

    for(count = 0;count <= 4;count++){
        
        for(count2 = 0;count2 <= 4;count2++){
            cout << "*";
        }
        cout << endl;
    }

    // for(count = 0;count <= 4;count++){
        
    //     for(count2 = 0;count2 <= 4;count2++){
    //         cout << count2;
    //     }
    //     cout << endl;
    // }

    // for(count = 0;count <= 4;count++){
        
    //     for(count2 = 0;count2 <= 4;count2++){
    //         cout << count * 2;
    //     }

    //     cout << endl;
    // }

    count = count2 = 0;

    while(count <= 4){

        count2 = 0;
        while(count2 <= count){
            cout << "*";
            count2++;
        }
        
        cout << "\n";
        count++;
    }


    // for(count = 0;count <= 4;count++){
        
    //     for(count2 = 0;count2 <= count;count2++){
    //         cout << "*";
    //     }
        
    //     cout << endl;
    // }

    return 0;
}