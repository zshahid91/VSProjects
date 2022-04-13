#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // Array Declaration
    // Static Arrays
    // Dynamic Arrays

    string cars[3] = {"Volvo", "Toyota", "Suzuki"};
    char letters[5] = {'a', 'b', 'c', 'd', 'e'};
    int even_nums[6] = {0, 2, 4, 6, 8, 10};
    int even_nums2[6]; // Empty Array
    float nums[3] = {1.1, 1.2, 1.3};
    int odd_nums[] = {1, 3, 5, 7, 9};
    int pos_nums[5];

    // Accessing an array
    // Length of the array: No. of items/elements in the array
    
    cout << cars[2] << endl;
    cout << even_nums[4] << endl;
    cout << nums[2] << endl;
    cout << "Size of the array of even_nums = " << sizeof(even_nums) << endl;
    cout << "Size of an integer = " << sizeof(int) << endl;

    cout << "Size of a float number = " << sizeof(float) << endl;
    cout << "Size of nums = " << sizeof(nums) << endl;
    cout << "Size of cars array = " << sizeof(cars) << endl;
    
    cout << "No. of items in the nums array = " << (sizeof(nums) / sizeof(float)) << endl;
    
    cout << "No. of items in the even_nums array = " << (sizeof(even_nums) / sizeof(int)) << endl;
    
    cout << "No. of items in the cars array = " << (sizeof(cars) / sizeof(string)) << endl;
    
    cout << "No. of items in the letters array = " << (sizeof(letters) / sizeof(char)) << endl;
    
    // cout << "Size of string = " << sizeof(string) << endl;


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

    // Looping through an array/Traversing an array/Traversal
    
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

    // Populating/Filling an array
    // pos_nums[0] = 1;
    // pos_nums[1] = 2;
    // pos_nums[2] = 3;
    // pos_nums[3] = 4;
    // pos_nums[4] = 5;
    
    // for(int i = 0;i <= 4;i++){
    //     cout << "Insert a value = ";
    //     cin >> pos_nums[i];
    //     cout << "Element at index " << i << " = " << pos_nums[i] << endl;
    // }

    // for(int i = 0;i <= 4;i++){
    //     cout << pos_nums[i] << endl;
    // }

    int num = 0;
    
    for(int i = 0;i <= 5;i++){
        even_nums2[i] = num;
        num += 2;
    }

    for(int i = 0;i <= 5;i++){
        cout << even_nums2[i] << endl;
    }

    // Multi-Dimensional Arrays/Nested Arrays (2-D arrays)
    int numbers[2][4] = {{2, 4, 6, 8}, {10, 12, 14, 16}};
    int numbers2[3][2] = {{1, 2}, {2, 4}, {5, 6}};
    int nums3[2][2][3] = {{{1, 2 ,3}, {4, 5, 6}}, {{7, 8, 9}, {10, 11, 12}}};

    cout << "Multi-dimensional arrays" << endl;
    cout << numbers[0][0] << endl;
    cout << numbers[1][3] << endl;
    cout << numbers[0][3] << endl;
    cout << numbers[1][1] << endl;

    cout << numbers2[1][1] << endl;
    cout << "No. of items in numbers2 array = " << (sizeof(numbers2) / sizeof(int)) << endl;

    // Traversal of a 2-D array
    for(int i = 0;i <= 1;i++){
        for(int j = 0;j <= 3;j++){
            cout << numbers[i][j] << endl;
        }
    }

    for(int i = 0;i <= 2;i++){
        for(int j = 0;j <= 1;j++){
            cout << numbers2[i][j] << endl;
        }
    }

    for(int i = 0;i <= 1;i++){
        for(int j = 0;j <= 1;j++){
            for(int k = 0;k <= 2;k++){
                cout << nums3[i][j][k] << endl;
            }
        }
    }
    
    return 0;
}