#include<iostream>
#include<cmath>

using namespace std;

int main(){

    int i = 0,j = 0, n = 4, space = n-1;

     for(i = 1;i <= n;i++){

         for(j = 1;j <= space;j++)
            cout<<" ";
         
         space--;

         for(j = 0;j <= (i - 1);j++)
            cout<<"* ";
         
         cout<<endl;
     }

     for(i = 4;i >= 1;i--){
         for(j = 0;j <= space;j++)
            cout << "*";
            
            cout << endl;
            // cout<<" ";
         
         space++;
         
         for(j = 1;j <= 2*i-1;j++)
            cout<<"*";
         
         cout<<endl;
     }

    return 0;
}