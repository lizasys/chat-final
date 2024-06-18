//
// Created by Admin on 12/05/2024.
//

#ifndef PROGGETTO_LABO_UTENTE_H
#define PROGGETTO_LABO_UTENTE_H

#include <string>

using namespace std;

class Utente {
public:
    explicit Utente(const string &nome);

    bool operator != (const Utente& other)const;
    bool operator == (const Utente& Other) const ;
   friend std::ostream& operator << (std::ostream& os , const Utente& utente);
   // friend ostream& operator >> (ostream os , const Utente utente);

    string getNome() const;

    Utente getUtente() const;

private:
    string nome;
};

#endif //PROGGETTO_LABO_UTENTE_H
