#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void by_value(int x) { // Actual Parameter
  x *= 2;
  cout << &x;
}

void by_reference(int &y) { // Formal Parameter
  y *= 2;
  cout << &y;
}

int some_var = 4; //Global Variable

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

  cout << i << " " << &i << " " << &j << " " << &k;

    return 0;
}