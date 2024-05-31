#include <iostream>
#include "Utente.h"
#include "Messaggio.h"
#include "Chat.h"
#include "Registro_Chat.h"

/*Classi che rappresentano chat tra utenti.
 Si deve rappresentare un utente di un sistema, un messaggio di chat da un utente ad un altro,
 una classe che rappresenta una chat tra due utenti, un registro di tutte le chat fatte.*/

int main() {
    // chaimata della classe utente con parametro
    Utente utente1("Alain");
    Utente utente2("Martial");

// Conversazione tra due utenti
    cout << "\nMessaggi scambiati tra Utenti:\n" << endl;
    Messaggio sms1(utente1, utente2, "\tCiao, Martial");
    Messaggio sms2(utente2, utente1, "\tCiao, Alain");

// Oggetto per l'invio dei sms
    Chat chat(utente1, utente2);
    chat.inviaMessaggio(sms1);
    chat.inviaMessaggio(sms2);

// Oggetto per aggiungere e visualizzare le chat
    Registra_Chat registro;
    registro.aggiungi_Chat(chat);
    registro.visualizza_Tutte_le_Chat(sms1, sms2);
    return 0;
}