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
    void setvaleur(float re,float im);
    complexe(const complexe& c);
        complexe operator + (const complexe& valeur) const;
        complexe operator - (const complexe& valeur) const;
        complexe operator * (const complexe& valeur) const;
       complexe operator / (const complexe& valeur) const;
        bool operator == (const complexe& c) const;

          void afficher();

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

void complexe::afficher(){
  cout << reel << " + " << imaginaire << "i" << endl;

}
complexe complexe:: operator + (const complexe& valeur)const {
    return complexe(reel+valeur.reel,imaginaire+valeur.imaginaire);
}
complexe complexe:: operator- (const complexe&valeur)const{
    return complexe(reel - valeur.reel, imaginaire - valeur.imaginaire);
}
complexe complexe::operator * (const complexe& valeur) const {
    double reel = reel * valeur.reel - imaginaire * valeur.imaginaire;
    double imaginaire = reel * valeur.imaginaire + imaginaire * valeur.reel;
    return complexe(reel, imaginaire);
}
complexe complexe::operator / (const complexe& valeur) const {
    double denominateur = valeur.reel * valeur.reel + valeur.imaginaire * valeur.imaginaire;
    double reel = (reel * valeur.reel + imaginaire * valeur.imaginaire) / denominateur;
    double imaginaire = (imaginaire * valeur.reel - reel * valeur.imaginaire) / denominateur;
    return complexe(reel, imaginaire);
}

// Opérateur d'égalité
bool complexe::operator == (const complexe& valeur) const {
    return (reel == valeur.reel && imaginaire == valeur.imaginaire);
}

int main(){
    float re1,im1,re2,im2;
    int choix;
cout<<"entrer la premier partie reel du premier nombre"<<endl;
cin>> re1 ;
cout<<"entrer la premier partie imaginaire du premier nombre"<<endl;
cin>>  im1  ;
complexe ob1(re1,im1);
cout<<"entrer la deuxieme partie reel du deuxieme nombre"<<endl;
cin>> re2 ;
cout<<"entrer la deuxieme partie imaginaire du deuxieme nombre"<<endl;
cin>> im2;
complexe ob2(re2,im2);
 cout << "\nChoisissez l'opération à effectuer :\n";
    cout << "1. Addition"<<endl;
    cout << "2. Soustraction"<<endl;
    cout << "3. Multiplication"<<endl;
    cout << "4. Division\n"<<endl;
    cout << "5. Vérifier l'egalite"<<endl;
    cout << "Entrez votre choix : "<<endl;
    cin >> choix;
      switch (choix) {
        case 1: {
            complexe resultat = ob1 + ob2;
            cout << "Resultat de l'addition : ";
            resultat.afficher();
            break;
        }
        case 2: {
            complexe resultat = ob1 - ob2;
            cout << "Resultat de la soustraction : ";
            resultat.afficher();
            break;
        }
        case 3: {
            complexe resultat = ob1 * ob2;
            cout << "Resultat de la multiplication : ";
            resultat.afficher();
            break;
        }
        case 4: {
            if (ob2 == complexe(0, 0)) {
                cout << "Erreur : Division par zéro!" << endl;
            } else {
                complexe resultat = ob1 / ob2;
                cout << "Resultat de la division : ";
                resultat.afficher();
            }
            break;
        }
        case 5: {
            if (ob1 == ob2) {
                cout << "Les deux nombres complexes sont egaux." << endl;
            } else {
                cout << "Les deux nombres complexes sont differents." << endl;
            }
            break;
        }
        default:
            cout << "Choix invalide !" << endl;
    }
    return 0 ;
}