#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){
    int count;
    // for(count = 0;count <= 10;count += 1){
    //     cout << "10 " << "x" << " " << count << " = " << count * 10 << endl;
    // }

    // for(count = 0;count <= 10;count++){
    //     cout << count << endl;
    //     if(count == 4)
    //         break;
    // }

    // for(count = 0;count <= 10;count++){
    //     if(count >= 6 and count <= 9 )
    //         continue;
        
    //     cout << count << endl;
    // } // for(count = 0;count <= 10;count++){
    //     if(count >= 6 and count <= 9 )
    //         continue;
        
    //     cout << count << endl;
    // }
    // count = 0; // Initialize the counter

    // while(count <= 10){ // Condition
    //     if(count == 4){
    //         break;
    //     }
        
    //     cout << count << endl;
    //     count = count + 1; // Increment/Decrement
        
    // }

    count = 0; // Initialize the counter

    while(count <= 10){ // Condition
        if(count == 4){
            count++;
            continue;
        }
        
        cout << count << endl;
        count = count + 1; // Increment/Decrement
        
    }

    cout << "While loop skipped!";

    // do{
    //     cout << count << endl;
    //     count++;
    // }
    // while(count <= 25);

    return 0;
}