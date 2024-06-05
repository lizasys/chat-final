#include "Messaggio.h"

//
// Created by Admin on 12/05/2024.
//
Messaggio::Messaggio(std::string test) {
    test = testo;
    letto = false;

}

string Messaggio::getTesto_Dest(Utente & destinatario){
    return testo;
}

Messaggio::Messaggio(const Utente &mittente, const Utente &destinatario, const string &testo) : mittente(mittente),
                                                                                                destinatario(
                                                                                                        destinatario),
                                                                                                testo(testo),letto(false){}

string Messaggio::getTesto() const {
    return testo;
}

string Messaggio::getMittente(const string &mittente) const {
    return mittente;
}

string Messaggio::getDestinatario(const string &destinatario) {
    return destinatario;
}

void Messaggio::setLetto(bool stato) {
    letto = stato;
}

bool Messaggio::Letto() const {
    return letto;
}


