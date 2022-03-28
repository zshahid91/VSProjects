#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // Array Declaration
    string cars[3] = {"Volvo", "Toyota", "Suzuki"};
    int even_nums[6] = {0, 2, 4, 6, 8, 10};
    int even_nums2[6];
    float nums[3] = {1.1, 1.2, 1.3};
    int odd_nums[] = {1, 3, 5, 7, 9};
    int pos_nums[5];

    // Accessing an array
    cout << cars[2] << endl;
    cout << even_nums[2] << endl;
    cout << nums[2] << endl;
    cout << "Size of the array of even_nums = " << sizeof(even_nums) << endl;
    cout << "Size of an integer = " << sizeof(int) << endl;
    cout << "Size of the array of strings = " << sizeof(cars) << endl;
    cout << "Size of a character = " << sizeof(char) << endl;
    cout << "Size of a string 0 = " << sizeof(cars[0]) << endl;
    cout << odd_nums[0] << endl;
    
    //cout << odd_nums[1] << endl;
    // cout << things[0][1];

    //Changing the elements in an array
    cars[2] = "Honda";
    even_nums[4] = 12;
    nums[1] = 2;

    // Looping through an array
    for(int i = 0;i <= 2;i++){
        cout << cars[i] << endl;
    }

    for(int i = 0;i <= 5;i++){
        cout << even_nums[i] << endl;
    }

    int i = 0;
    
    while(i <= 2){
        cout << nums[i] << endl;
        i++;
    }

    // Populating an array
    // pos_nums[0] = 1;
    // pos_nums[1] = 2;
    // pos_nums[2] = 3;
    // pos_nums[3] = 4;
    // pos_nums[4] = 5;
    
    for(int i = 0;i <= 4;i++){
        cout << "Insert a value = ";
        cin >> pos_nums[i];
    }

    for(int i = 0;i <= 4;i++){
        cout << pos_nums[i] << endl;
    }

    int num = 0;
    
    for(int i = 0;i <= 5;i++){
        even_nums2[i] = num;
        num += 2;
    }

    for(int i = 0;i <= 5;i++){
        cout << even_nums2[i] << endl;
    }

    // Multi-Dimensional Arrays (2-D arrays)
    int numbers[2][4] = {{2, 4, 6, 8}, {10, 12, 14, 16}};

    cout << "Multi-dimensional arrays" << endl;
    cout << numbers[0][0] << endl;
    cout << numbers[1][3] << endl;
    
    return 0;
}