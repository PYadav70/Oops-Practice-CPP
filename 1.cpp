#include<iostream>
using namespace std;

class Student {
private:
   string name;
   int age, roll_no;
   string grade;
   // function getter and setter method
   public:
   void setName(string s){
    name = s;
   };
    void setAge(int a){
    age = a;
   };
    void setRoll(int r){
    roll_no = r;
   };
    void setGrade(string g){
    grade = g;
   };

   void getName(){
    cout << name << endl;
   }
   void getAge(){
    cout << age << endl;
   }
   void getRoll(){
    cout << roll_no << endl;
   }

   void getGrade(){
    cout << grade << endl;
   }

};


int main(){
   Student S1;
  S1.setName("pappu");
  S1.setAge(22);
  S1.setRoll(122);
  S1.setGrade("A+");
  S1.getName();
  S1.getAge();
  S1.getRoll();
  S1.getGrade();
};