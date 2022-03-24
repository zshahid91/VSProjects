#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int main(){ 
    for(int count = 0;count <= 200;count += 10){
        if(count == 200){
            break;
        }
        
        cout << count << endl;
    }

    return 0;
}