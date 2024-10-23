  #include<iostream>
  using namespace std ;
  class voiture{
  private :
  string marque;
  string modele;
  int annee;
  float km;
  float vitesse ;

  public:
  
  voiture(); //constructer par defaut
  voiture(string marqu,string model,int anne,float kilom,float vitessee);// constructer with arguments
    void accelerer (float num);
    double freiner(float num);
    void affichinfo();
    void avancer(float distance);
  ~voiture();
  };  
     voiture::voiture():marque("bmw"),modele("serie 4"),annee(2015),km(20000.0), vitesse(220.0){}
     voiture::voiture(string marqu , string model, int anne , float kilom , float vitessee): marque (marqu) , modele(model) , annee(anne) , km(kilom) , vitesse(vitessee){}
  
  void voiture::accelerer(float num){
    vitesse = vitesse+num;
  }
  double voiture::freiner(float num){
    if(num>0){
    vitesse=vitesse - num ;
    return vitesse;
    } 
    else 
    vitesse=num;
    
  }
  void voiture :: affichinfo(){
    cout<<"detail de la voiture"<<endl;
    cout << " la marque est:         "<<marque<<endl;
    cout<<"le modele de la voiture est:  "<<modele<<endl;
    cout<<"l annee de fabrication est:   "<<annee<<endl;
    cout<<"le kilométrage actuel de la voiture:    "<< km<<endl;
    cout <<"la vitesse actuelle de la voiture:    "<< vitesse<< endl;
  }
   void voiture :: avancer(float distance){
    km = km +distance;
}
voiture::~voiture(){ // destructer
    cout<<"la voiture est detruite"<<endl; 
}
  int main(){
voiture car1;
car1.affichinfo();
voiture v2("dacia", "sandero", 2018, 1000000, 150);
    
    v2.accelerer(50);  
    cout <<"la vitesse au freinage est"<< v2.freiner(50)<<endl;    
    v2.avancer(200);
    v2.affichinfo();
    return 0 ;
  }