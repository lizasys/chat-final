#include "Messaggio.h"
//
// Created by Admin on 12/05/2024.
//
Messaggio::Messaggio(const Utente &mittente, const Utente &destinatario, const string &testo): mittente(mittente),
destinatario(destinatario), testo(testo){}

string Messaggio::getTesto() const {
    return testo;
}

