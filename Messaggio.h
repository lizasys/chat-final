//
// Created by Admin on 12/05/2024.
//

#ifndef PROGGETTO_LABO_MESSAGGIO_H
#define PROGGETTO_LABO_MESSAGGIO_H

#include "Utente.h"
#include <string>

class Messaggio {
public:
    Messaggio(string test);

    string getTesto_Dest(Utente & destinatario);

    Messaggio(const Utente &mittente, const Utente &destinatario, const string &testo);

    string getTesto() const;

    string getMittente(const string &mittente) const;

    string getDestinatario(const string &destinatario) ;

    bool Letto() const;

    void setLetto(bool stato);



private:
    Utente mittente;
    Utente destinatario;
    string testo;
    bool letto;

};

#endif //PROGGETTO_LABO_MESSAGGIO_H