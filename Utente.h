//
// Created by Admin on 12/05/2024.
//

#ifndef PROGGETTO_LABO_UTENTE_H
#define PROGGETTO_LABO_UTENTE_H
#include <string>
 using namespace std;
class Utente {
public:
    Utente(const string& nome);
    string getNome() const;
private:
    string nome;
};
#endif //PROGGETTO_LABO_UTENTE_H
