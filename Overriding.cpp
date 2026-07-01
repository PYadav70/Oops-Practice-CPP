// Runtime polymorphism
#include<bits/stdc++.h>
using namespace std;

class Animal {
    public:
   virtual void speak() = 0; // abtract class ka object not create
};

class Dog : public Animal {
    public:
    void speak(){
        cout << "Bark" << endl;
    }
};
class Cat : public Animal{
    public:
    void speak(){
        cout << "Meow" << endl;
    }
};

int main(){
    // Animal *p;
    // p = new Dog();
    // p->speak();
    Animal *p;
    vector<Animal*>Animals;
    Animals.push_back(new Dog());
    Animals.push_back(new Cat());
    Animals.push_back(new Dog());
    Animals.push_back(new Cat());

    for(int i=0; i<Animals.size(); i++){
        p = Animals[i];
        p->speak();
    }

}