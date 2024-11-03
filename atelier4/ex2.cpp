#include<iostream>
#include<string.h>
using namespace std;
class animal{
public:
int age;
string nom;
public:
void set_value(int,string);   
animal(int , string);
animal();
};
animal::animal(){}
animal::animal(int a , string n){
age=a;
nom=n;
}

void animal::set_value(int a,string n){
age=a;
nom=n;
}

class zebra: public animal{
public:
string origine="mali";

};

class dolphin :public animal{
public:
string origine="australia";
};

int main(){
  zebra ob1;
  ob1.set_value(10,"zebra test");
  cout<<"le nom du zebra est:    "<<ob1.age<<endl;
    cout<<"l age de zebra est :   "<<ob1.nom<<endl;
    cout<<"origine est:           "<<ob1.origine<<endl;

  dolphin ob2;
  ob2.set_value(20,"dolphin test");
  cout<<"le nom  du dophin est:    "<<ob2.nom<<endl;
    cout<<"l age de dophin est :   "<<ob2.age<<endl;
     cout<<"origine est:           "<<ob2.origine<<endl;

  

    return 0;
    }
