#ifndef COMPTEBANC_H
#define COMPTEBANC_H
#include<string>
class CompteBancaire{
    private:
        std::string titulaire;
        double solde=0.0;
    public:
        CompteBancaire();
        CompteBancaire(std::string nom,float solde);
        CompteBancaire(const CompteBancaire& autre);
        void afficher();
        ~CompteBancaire();
};
#endif