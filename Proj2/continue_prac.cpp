#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){

    int count;

    for(count=0;count <= 10;count++){
        if(count % 2 != 0){
            continue;
        }
        cout << count << endl;
    }

    cout << "\n";

    count = 0;
    while(count <= 10){
        if(count % 2 != 0){
            count++;
            continue;
        }
        
        cout << count << endl;
        count++;
    }

    cout << "\n";

    count = 0;
    do{
        if(count % 2 != 0){
            count++;
            continue;
        }

        cout << count << endl;
        count++;
    }
    while(count <= 10);
    

    return 0;
}