#include<bits/stdc++.h>
using namespace std;

class Customer {
    string name;
    int balance, account_no;

    public:
    Customer(string name, int balance , int account_no){
        this->name = name;
        this->balance = balance;
        this->account_no = account_no;
    }

   //deposite
   void deposit(int amount){
    if(amount > 0){
        balance += balance;
        cout << amount << " is credited successfully " << endl;
    }else{
        throw "Amount should be greater than zero" ;
    }
   }
   // withdraw
   void withdraw(int amount){
    if(amount > 0 && amount <=balance){
        balance -= balance;
        cout << amount << " is withdraw successfully " << endl;
     }else if(amount < 0){
      throw " Amount should be greater than zero " ;
     }else{
        throw  " your balance is low ";
     }
   }
};

int main(){
try{


 Customer C1("Pappu", 5000, 10);
 C1.deposit(200);
 C1.withdraw(40000);
}
catch(const char *e){
    cout << " Exception occured :" << e << endl;
}
};