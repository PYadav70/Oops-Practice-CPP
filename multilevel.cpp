#include<bits/stdc++.h>
using namespace std;

class Engineer {
    public:
    string specialization;

    void softwareEnginner() {
      cout << "i am a software engineer" << specialization << endl;
    }
};

class student {
    public:
    string IT;

    void department(){
        cout << "yes i am a student bro" << IT << endl;
    }
};

class futureEngineer : public Engineer , public student {
    public:
    string name;

    futureEngineer(string name, string specialization, string IT){
        this->name = name;
        this->specialization = specialization;
        this->IT = IT;
    }

    void showCase(){
        cout << "my name is" << name << endl;
        softwareEnginner();
        department();
    }

};

int main(){
    futureEngineer A1("Pappu kr Yadav", "Information technology", "IT STUDENT");
    A1.showCase();
};
