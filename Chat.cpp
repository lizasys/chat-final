#include "Chat.h"
#include <iostream>
#include<stdexcept>


Chat::Chat(const Utente &utente1, const Utente &utente2) : utente1(utente1), utente2(utente2) {}


void Chat::inviaMessaggio(const Messaggio &messaggio) {
    if (messaggio.getMittente() != utente1 && messaggio.getMittente() != utente2){
        throw out_of_range ("Il mittente non è valido");
    }
    if (messaggio.getDestinatario() != utente1 && messaggio.getDestinatario() != utente2){
        throw out_of_range ("Il destinatario non è valido");
    }
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
    int i = 0;
    for(const auto& messaggio : messaggi) {
        if (messaggio.Letto()) {
            i ++;
        }
    }
    return i;
}

int Chat::get_Messaggi_non_letti() const {
    int i;
    i = messaggi.size() - Messaggi_letti();
    return i;
}

Chat::~Chat() = default;
