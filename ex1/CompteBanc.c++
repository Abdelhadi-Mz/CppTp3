#include<iostream>
#include "CompteBanc.h"
CompteBancaire::CompteBancaire(){
    titulaire="Inconnu";
    solde=0.0;
}
CompteBancaire::CompteBancaire(std::string nom,float solde){
    this->solde=solde;
    this->titulaire=nom;

}
CompteBancaire::CompteBancaire(const CompteBancaire& orig){
    titulaire=orig.titulaire;
    solde=orig.solde;
}
void CompteBancaire::afficher(){
    std::cout << "Titulaire : " << titulaire << std::endl;
    std::cout << "Solde : " << solde <<" EUR" <<std::endl;
}
CompteBancaire::~CompteBancaire() {
}