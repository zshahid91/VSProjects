#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

int some_var = 4; // Global Variable

void by_value(int x) { // Actual Parameter
  x *= 2;
  cout << &x;
  cout << "\nChanged value = " << (some_var + 4);
}

void by_reference(int &y) { // Formal Parameter
  y *= 2; // Local Variable
  cout << &y;
}

float factorial(int x){
  if(x == 0){
    return 1;
  }

  return x * factorial(x-1);
}

int main(){

  int a1 = 5, a2 = 5;

  cout << "Before: a1 = " << a1 << ", a2 = " << a2 << "\n";
  
  by_value(a1);
  cout << endl;
  by_reference(a2);
  cout << endl;
  cout << &a2 << endl;
  cout << &some_var << endl;

  cout << "After: a1 = " << a1<< ", a2 = " << a2 << "\n";

  string food = "pizza";
  string &meal = food; // Reference Variable

  cout << meal << " " << food << endl;
  cout << &meal << " " << &food << endl;

  int i = 1;
  int &j = i;
  int k = i;

  cout << i << " " << &i << " " << &j << " " << &k << endl;

  int num = 1;
  cout << "Enter the number whose factorial is needed = " << endl;
  cin >> num;
  cout << "Factorial of " << num << " is " << factorial(num) << endl;

    return 0;
}