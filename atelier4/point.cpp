#include "point.h"
#include <iostream>
using namespace std;
point::point(float x,float y)
{
Y=y;
X=x;
}
void point::deplace(float d1,float d2){
    X=X+d1;
    Y=Y+d2;
}

void point::affiche(){
    cout<<"les coordonne cartesienne du point est :"<<"("<<X<<","<<Y<<")"<<endl;
}
point::~point()
{
cout<<"destructor est appeler"<<endl;
}