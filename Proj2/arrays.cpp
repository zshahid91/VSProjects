#include<iostream>
#include<cmath>

using namespace std;

int main(){
    string cars[3] = {"Volvo", "Toyota", "Suzuki"};
    int even_num[6] = {0, 2, 4, 6, 8, 10};
    float nums[3] = {1.1, 1.2, 1.3};

    cout << cars[2] << endl;
    cout << even_num[2] << endl;
    cout << nums[2] << endl;

    for(int i = 0;i <= 2;i++){
        cout << cars[i] << endl;
    }
    return 0;
}