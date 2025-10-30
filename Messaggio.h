
#ifndef PROGGETTO_LABO_MESSAGGIO_H
#define PROGGETTO_LABO_MESSAGGIO_H

#include "Utente.h"
#include <string>

class Messaggio {
public:

    string getTesto_Dest(Utente & destinatario);

    Messaggio(const Utente &mittente, const Utente &destinatario, const char *test);

    bool operator==(const Messaggio& other) const;

    string getTesto() const;

    //Utente getMittente(const string &mittente) const;
    //Utente getDestinatario(const string &destinatario) const;

    Utente getMittente() const;

    Utente getDestinatario() const;

    bool Letto() const;

    void setLetto(bool stato);


private:
    Utente mittente;
    Utente destinatario;
    string testo;
    bool letto;

};

#endif //PROGGETTO_LABO_MESSAGGIO_H