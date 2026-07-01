#include<bits/stdc++.h>
using namespace std;


class customer {
 string name;
 int *data;

 public:
 customer(string name){
    this->name = name;
    cout << "Destructor is called " << name <<  endl;
 }

 //destructor
 ~customer(){
    cout << "destructor is called" <<name << endl;
 }
};
int main(){
  customer A1("1"), A2("2"), A3("3"); 
}