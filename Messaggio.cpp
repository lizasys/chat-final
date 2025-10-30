#include "Messaggio.h"
#include <stdexcept>


string Messaggio::getTesto_Dest(Utente & destinatario){
    return testo;
}

Messaggio::Messaggio(const Utente &mittente, const Utente &destinatario, const char *test) : mittente(mittente),
                                                                                             destinatario(
                                                                                                        destinatario),
                                                                                             testo(test), letto(false){
    if (test == nullptr || test[0]== '\0')
        throw invalid_argument("La stringa Non e' valida");
    letto = false;
}

bool Messaggio::operator==(const Messaggio& other) const{
    return testo == other.testo;
};

string Messaggio::getTesto() const {
    return testo;
}

Utente Messaggio::getMittente() const {
    return mittente;
}

Utente Messaggio::getDestinatario() const {
    return destinatario;
}

void Messaggio::setLetto(bool stato) {
    letto = stato;
}

bool Messaggio::Letto() const {
    return letto;
}
