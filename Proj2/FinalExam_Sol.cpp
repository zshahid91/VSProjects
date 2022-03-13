#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){ 
    for(int count = 0;count <= 100;count += 5){
        if(count == 50){
            break;
        }

        cout << count << endl;
    }

    return 0;
}