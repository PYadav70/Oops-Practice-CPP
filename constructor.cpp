#include<bits/stdc++.h>
using namespace std;

class Customer {
    string name;
    int account_number;
    int balance;

    public:
    // default constructor
    Customer(){
      name = "Rohit";
      account_number = 5;
      balance = 100;
    }
    // parameterized constructor
    Customer(string name, int account_number, int balance){
        this->name = name;
        this->account_number = account_number;
        this->balance = balance;
    }
    // constructor overloading
    Customer(string a, int b){
        name = a;
        account_number = b;
        balance = 50;
    }
    // inline constructor
    inline Customer(string a, int b, int c): name(a), account_number(b), balance(c){
       
    }
    void display(){
        cout << name << " " << account_number << " " << balance << endl;
    }
};

int main(){
   Customer A1;

}