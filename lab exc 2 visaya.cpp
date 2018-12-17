#include <iostream>
using namespace std;

int max(int a, int b){
cout<<"Enter fitst number";
cin>>a;
cout<<"Enter second number";
cin>>b;
   if (a > b) {
       return a;
   }

   return b;
} 

int main() {

    cout << max(17, 20) << endl;
    return 0;
}
