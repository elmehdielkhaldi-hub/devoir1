#include<iostream>
using namespace std;
class personne{
    protected:
    string nom;
    string prenom;
    string datenaissance;

    public:
    personne();
    personne(string,string,string);
    virtual void affichage();//polymorph function
}; 
//constructor du personne
personne::personne(string n,string p,string annee):nom(n),prenom(p),datenaissance(annee){}
void personne::affichage(){
    cout<<"le nom de personne est :  "<<nom<<endl;
    cout<<"le prenom de personne est : "<<prenom<<endl;
    cout<<"le date de naissance de personne est :  "<<datenaissance<<endl;

}
class Employe : public personne{
    protected:
    string salaire;
    public:
    Employe(string ,string ,string ,string );
      void affichage();
   };  
   Employe::Employe(string n,string p,string annee,string s) : personne(n,p,annee),salaire(s){} // constructor mere+fils
   void Employe:: affichage(){
    // cout<<"le nom de personne est :  "<<nom<<endl;
    // cout<<"le prenom de personne est : "<<prenom<<endl;
    // cout<<"le date de naissance de personne est :  "<<datenaissance<<endl;
    personne::affichage();
    cout<<"le salaire est :"   << salaire<<endl;
    } 
class Chef: public Employe{
    protected:
    string Serviceaccompagne;
    public:
    Chef(string,string,string,string,string);
    void affichage();
};
       Chef::Chef(string n,string p,string annee,string s,string service):Employe(n,p,annee,s),Serviceaccompagne(service){}
       void Chef::affichage (){
    // cout<<"le nom de personne est :  "<<nom<<endl;
    // cout<<"le prenom de personne est : "<<prenom<<endl;
    // cout<<"le date de naissance de personne est :  "<<datenaissance<<endl;
    // cout<<"le salaire est :"   << salaire<<endl;
    Employe::affichage();
    cout<<"le service accompagne est :  "<< Serviceaccompagne<<endl;

}
class Directeur:public Chef{
protected:
string Societeaccompagne;
public:
Directeur(string,string,string,string,string,string);
void affichage();
};
Directeur::Directeur(string n,string p,string annee,string s,string service,string societe):Chef(n,p,annee,s,service),Societeaccompagne(societe){}
void Directeur::affichage(){
    //   cout<<"le nom de personne est :  "<<nom<<endl;
    // cout<<"le prenom de personne est : "<<prenom<<endl;
    // cout<<"le date de naissance de personne est :  "<<datenaissance<<endl;
    // cout<<"le salaire est :"   << salaire<<endl;
    // cout<<"le service accompagne est :  "<< Serviceaccompagne<<endl;
     Chef::affichage();
        cout<<"le societe accompagne est :  "<< Societeaccompagne<<endl;


}

int main(){
    personne p1("mehdi","elkhaldi","01/01/2000");
    p1.affichage();
    Employe E1("mehdi","elkhaldi","01/01/2000","5000EUR");
    E1.affichage();
    Chef c1("mehdi","elkhaldi","01/01/2000","5000EUR","plats avec dessert");
    c1.affichage();
    Directeur d1("mehdi","elkhaldi","01/01/2000","5000EUR","plats avec dessert","oracle");
    d1.affichage();




    return 0;
};