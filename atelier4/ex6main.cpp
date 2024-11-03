#include<iostream>
#include "point.cpp"
using namespace std;
int main(){
point p1(5,10);
point p2(2,5);
p1.affiche();
p2.affiche();

p1.deplace(10,20);
p1.affiche();

p2.deplace(4,5);
p2.affiche();


    return 0;
}