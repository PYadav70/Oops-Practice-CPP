#include <bits/stdc++.h>
using namespace std;

class Area {
    public:
   int  calculateArea(int r){
        return 3.14*r*r;
        
    }

   int calculateArea(int l, int b){
        return l*b;
    }
};

int main(){
    Area a1, a2;
   cout << " area of circle "  <<  a1.calculateArea(5) << endl;
    cout << " area of rectangle "  <<  a2.calculateArea(2,5) << endl;
}