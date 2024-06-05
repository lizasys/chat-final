#include "Chat.h"
#include <iostream>
//
// Created by Admin on 12/05/2024.
//

Chat::Chat(const Utente &utente1, const Utente &utente2) : utente1(utente1), utente2(utente2) {}

Utente getUtente1(Utente utente1) {
    return utente1;
}

Utente getUtente2(Utente utente2) {
    return utente2;
}

void Chat::inviaMessaggio(const Messaggio &messaggio) {
    messaggi.push_back(messaggio);
}

const vector<Messaggio> &Chat::getMessaggi() const {

    return messaggi;
}

void Chat::visualizzaMessaggi() const {
    for (const auto &messaggio: messaggi) {
        cout << messaggio.getTesto() << endl;
    }
}

int Chat::Messaggi_pre() const {

    return messaggi.size();
}

int Chat::Messaggi_letti() const {
    bool letto =false;
    int i = 0;
    for(auto& messaggio : messaggi) {
        if (messaggio.Letto()) {
            letto = true;
            i ++;
        }
    }
    return true;
}

int Chat::get_Messaggi_non_letti() const {
    bool letto =false;
    int i = 0;
    for(auto& messaggio : messaggi) {
        if (!messaggio.Letto()) {
            letto = true;
            i ++;
        }
    }
    return true;
}

Chat::~Chat() = default;
