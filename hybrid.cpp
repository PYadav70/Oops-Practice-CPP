#include<bits/stdc++.h>
using namespace std;

class student {
    public:
    void print(){
        cout << " i am a student" << endl;
    }
};

class male {
    public:
    void MalePrint(){
        cout << "i am male guy" << endl;
    }
};
class female {
    public:
    void FemalePrint(){
    cout << " i am a female guy" << endl;
    }
};

class Boy : public student, public male{
    public:
    void BoyPrint(){
        cout << " i am boy"  << endl;
    }
};

class Girl : public student, public female{
    public:
    void GirlPrint(){
        cout << " i am a girl"  << endl;
    }
};



int main(){
  Girl g1;
  g1.GirlPrint();
  g1.print();
  g1.FemalePrint();
  Boy b1;
  b1.BoyPrint();
  b1.print();
  b1.MalePrint();
}