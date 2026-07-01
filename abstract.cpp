#include<bits/stdc++.h>
using namespace std;
// abstract
class Animal {
    public:
      string name;
      int age;

      Animal(string name, int age){
        this->name = name;
        this->age = age;
      }

      void eat(){
       cout << "The animal is eating" << endl;
      }
      virtual void makeSound() = 0;
};

// interface exa
class Vehicle{
    public : 
    virtual void start() = 0;
    virtual void stop() = 0;
    virtual void accelerate() = 0;
    virtual void brake() = 0;
};

class Car : public Vehicle{
    public:
     void start() {
        cout << "The car is starting" << endl;
     }
     void stop(){
        cout << "The car is stopping" << endl;
     }

      void accelerate(){
        cout << "The car is accelerating" << endl;
      }
      void brake(){
        cout << "The car is braking" << endl;
      }
};

int main(){
    // Animal animal("lion", 5);
    Car car;
    car.start();
    car.stop();
    car.accelerate();
    car.brake();
}