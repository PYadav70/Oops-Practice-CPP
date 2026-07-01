#include<bits/stdc++.h>
using namespace std;

class Human {
    protected:
    string name;
    int age;

    public :
    Human(string name, int age){
        this->name = name;
        this->age = age;
    }
    void display(){
        cout << name << " " << age << endl;
    }

    void work(){
        cout << "i am working" << endl;
    }
};

class Student : public Human{
    int roll_no, fees;
    public:
    Student(string name, int age, int roll_no, int fees): Human(name, age ){
      this->roll_no = roll_no;
      this->fees = fees;
    }

    void display(){
        cout << " " << age << " " << roll_no << " " << fees << endl;
    }
};

class Teacher : public Human{
    int salary;

    public:
    Teacher(int salary, string name, int age): Human(name, age){
      this->salary = salary;
    }
    void display(){
        cout << " " << salary << " " << name << " " << age << endl;
    }
};

int main(){
    Teacher A2(99, "pappu", 22);
    A2.display();
}