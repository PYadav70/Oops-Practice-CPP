#include<bits/stdc++.h>
using namespace std;

class Vehicle {
    public:
    virtual void start() = 0;
    // virtual void  stop() = 0;
    // virtual void accelerate() = 0;
   
};

class bmw : public Vehicle{
  private:
  int speed;
  int accelerate;

  // keep data members private

  public:
  void start() override {
    cout << "bmw is starting" << endl;
  }

  void setSpeed(int speed){
     this->speed = speed;
  }

  void setAccelerate(int accelerate){
    this->accelerate = accelerate;
    cout << "accelerate" << accelerate << endl;
  }

};


int main(){
    bmw V ;
    V.setAccelerate(12);
    V.start();
    return 0;
}