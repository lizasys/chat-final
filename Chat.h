//
// Created by Admin on 12/05/2024.
//

#ifndef PROGGETTO_LABO_CHAT_H
#define PROGGETTO_LABO_CHAT_H

#include <vector>
#include "Utente.h"
#include "Messaggio.h"

class Chat {
public:
    Chat(const Utente& utente1, const Utente& utente2);
    void inviaMessaggio(const Messaggio& messaggio);
    const vector<Messaggio>& getMessaggi() const;
    void visualizzaMessaggi() const;


private:
    Utente utente1;
    Utente utente2;
    vector<Messaggio> messaggi;
};
#endif //PROGGETTO_LABO_CHAT_H
