#include "CompteBanc.h"
int main() {
    CompteBancaire compte1;                           
    CompteBancaire compte2("Abdelhadi", 8710.0);         
    CompteBancaire compte3 = compte2;               

    compte1.afficher();
    compte2.afficher();
    compte3.afficher();

    return 0; 
};