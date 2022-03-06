#include<iostream>
#include<cmath>
#include<iomanip>

using namespace std;

//#define G 6.67e-11                          
                                               
#include<iostream>
#include<cmath>

using namespace std;

#define pi 3.14159
#define g 9.81

int main(){                                    
    float a = 0, b = 2, c = 3;
    a = b++;
    b = b--;
    c = ++b;
    b--;

    cout << a << " " << b << " " << c << endl;

    return 0;
    }