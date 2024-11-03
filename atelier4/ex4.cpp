#include<iostream>
#include<cmath>
using namespace std;
class vecteur3D{
    private:
    float x;
    float y;
    float z;
    public:
    vecteur3D(float,float,float);
    void affichage();
     vecteur3D  operator+(const vecteur3D& valeur);//somme
    float operator*(const vecteur3D& valeur);//produit
    bool coincide(const vecteur3D& valeur) const ;//coincide
   float norm()const;
    vecteur3D normaxValeur(const vecteur3D& valeur) ;
    vecteur3D* normaxAdresse(const vecteur3D* valeur);
    vecteur3D& normaxReference(vecteur3D& valeur);
};
vecteur3D::vecteur3D(float X=0,float Y=0,float Z=0 ):x(X),y(Y),z(Z){}

void vecteur3D::affichage()
{
cout<<"le vecteur est :  "<<"("<<x<<","<<y<<","<<z<<")"<<endl;
}
  vecteur3D vecteur3D::operator+(const vecteur3D& valeur){
    return vecteur3D(x+valeur.x,y+valeur.y+z+valeur.z);
}
float vecteur3D::operator*(const vecteur3D& valeur){
    return (x*valeur.x,y*valeur.y,z*valeur.z);
}
 bool vecteur3D::coincide(const vecteur3D& valeur)const {
    return (x==valeur.x)&&(y==valeur.y)&&(z==valeur.z);
 }
 float vecteur3D:: norm()const { 
        return sqrt(x * x + y * y + z * z);
 }
 
      vecteur3D vecteur3D:: normaxValeur(const vecteur3D& valeur)  {
        return (this->norm() > valeur.norm()) ? *this : valeur;
    }

    vecteur3D* vecteur3D:: normaxAdresse(const vecteur3D* valeur) {
        return (this->norm() > valeur->norm()) ? this : const_cast<vecteur3D*>(valeur);
    }

   
    vecteur3D&  vecteur3D::normaxReference(vecteur3D& valeur) {
        return (this->norm() > valeur.norm()) ? *this : valeur;
    }
   


int main(){
    vecteur3D v1(2,4,6);
    vecteur3D v2(2,4,6);
    v1.affichage();
    v2.affichage();
    
vecteur3D v3=v1.operator+(v2);
v3.affichage();
cout<<"produit scalaire de v1 et v2 est"<<v1.operator*(v2)<<endl;
cout<<"verif de coincide est :    "<<v1.coincide(v2)<<endl;
cout<<"norme de v1 est"<<v1.norm()<<endl;
cout<<"norme de v2 est"<<v2.norm()<<endl;
 vecteur3D v_max_valeur = v1.normaxValeur(v2);
    cout << "Vecteur avec la plus grande norme (par valeur) : ";
    v_max_valeur.affichage();

    // Normax renvoyée par adresse
    vecteur3D* v_max_adresse = v1.normaxAdresse(&v2);
    cout << "Vecteur avec la plus grande norme (par adresse) : ";
    v_max_adresse->affichage();

    // Normax renvoyée par référence
    vecteur3D& v_max_reference = v1.normaxReference(v2);
    cout << "Vecteur avec la plus grande norme (par reference) : ";

    return 0;
}