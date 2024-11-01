#include<iostream>
#include <complex>
using namespace std;
class complexe{
    private:
   float reel;
   float imaginaire;


    public:
    complexe(); // par defaut
    complexe(float re , float im);
    complexe(const complexe& c);
          addition+(float valeur1,float valeur);
          float soustraction(float v1,float v2);
          float multiplication*(float v3, float v4);
          float division(float v4,float v5); 
          void afficher();

  ~complexe();

};
//initialisatoin du cons
complexe::complexe()
{
    imaginaire=0;
    reel=0;
}
// constructor is a methode (fonction)
complexe::complexe(float re,float im){
    imaginaire=im;
    reel=re;
}

complexe complexe::addition(const complexe& a , const complexe&  b){
    return a.reel

}   
void complexe::afficher(){
    char signe;
    if(imaginaire>0){
      signe='+';
    }else
    signe='-';
    cout<<reel<<signe<<imaginaire<<endl;

}

int main(){
complexe ob1;
complexe ob2(5,6);
complexe ob3(float re,float im);
ob1.afficher();
cout<<"entrer la premier partie reel du code"<<endl;
cin>> re ;
cout<<"entrer la deuxieme partie imaginaire du code"<<endl;
cin>>    ;
cout<<"entrer la deuxieme partie reel du code"<<endl;
cin>> re ;
cout<<"entrer la deuxieme partie imaginaire du code"<<endl;
cin>> im ;


    return 0 ;
}