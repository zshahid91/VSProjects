#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

void by_value(int x) { // Actual Parameter
  x *= 2;
  cout << &x;
}

void by_reference(int &x) { // Formal Parameter
  x *= 2;
  cout << &x;
}

int main(){

  int a1 = 5, a2 = 10;

  cout << "Before: a1 = " << a1 << ", a2 = " << a2 << "\n";
  
  by_value(a1);
  cout << endl;
  by_reference(a2);
  cout << endl;
  cout << &a2 << endl;

  cout << "After: a1 = " << a1 << ", a2 = " << a2 << "\n";

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