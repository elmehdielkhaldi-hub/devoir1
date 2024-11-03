#include<iostream>
using namespace std;
 
 class test{
    private:
    static int number;
public:
test();
static void afficher();
 };


 int test::number=0;
test::test(){
    number++;
}


void test::afficher(){
    cout<<"le nombre d appel de la fonction est :   "<<number<<endl;
}
int main(){
test call;
test call2;
test call3;
call.afficher();


    return 0;
}