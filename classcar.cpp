#include<iostream>
#include<string>
using namespace std;
class voiture {
    private:
   string marque ;
   string modele ;
   int annee;
   float kilometrage;
   float vitesse;
    public:
    //prototype
      voiture();
        voiture(string mar , string mo , int an , float kil , float vi);
        void accelerer(float v);
        double freiner(float valeur);
        void afficherinfo();
        void avance(float distance);
        ~voiture();
};
   voiture::voiture() : marque("honda"),modele("civik"),annee(2081),kilometrage(20000),vitesse(120){}
 voiture ::voiture(string ma,string mo,int year,float km ,float speed) : marque(ma),modele(mo),annee(year),kilometrage(km),vitesse(speed){}
  
  
  void voiture::accelerer (float v){
     vitesse =vitesse+v;
     cout<<"acceleration est >>>>>>>>>"<<vitesse<<endl;
  }
  double voiture ::freiner (float valeur){
    vitesse=vitesse-valeur;
    if(vitesse>0){
    return vitesse ;
    }else 
    return 0;
      }
      
  void voiture::afficherinfo()
{
    cout<<"-------- information sur la voiture-----"<<endl;
    cout<<"la marque est "<<marque<<endl;
    cout<<"le modele est"<<modele<< endl ;
    cout<<"annee de fabrication est "<<annee<< endl;
    cout<<"kilometrage actuelle de la voiture est "<<kilometrage<< endl;
    cout<<"vitesse actuelle de la voiture "<< vitesse<< endl;
}
void voiture::avance(float distance){
         kilometrage=kilometrage + distance;
         cout<<"kilometrage est  :"<< kilometrage<<endl;
      }
voiture ::~voiture(){
    cout<<"la voiture est detruite"<<endl;
}


int main (){
    voiture v1;
    v1.afficherinfo();
voiture ob1("honda","serie 4",33,999,0);
v1.accelerer(100);
v1.freiner(50);
 v1.avance(1000);

ob1.afficherinfo();


}
