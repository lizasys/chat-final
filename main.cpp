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

    Chat chat(utente1, utente2);

// Conversazione tra due utenti
    cout << "\nMessaggi scambiati tra Utenti:\n" << endl;
    Messaggio sms1(utente1, utente2, "\tCiao, Martial");
    Messaggio sms2(utente2, utente1, "\tCiao, Alain");


// Oggetto per l'invio dei sms

    chat.inviaMessaggio(sms1);
    chat.inviaMessaggio(sms2);

    //chat.Messaggi_pre();
    //chat.Messaggi_letti();


// Oggetto per aggiungere e visualizzare le chat
    Registra_Chat registro;
    registro.aggiungi_Chat(chat);
    registro.visualizza_Tutte_le_Chat(sms1, sms2);
    chat.Leggi_Messaggi(utente2);
    chat.Leggi_Messaggi(utente1);

    vector<Messaggio> messaggi = chat.getMessaggi();
    for (size_t i = 0; i <= 0; ++i) {
            const Messaggio &messaggio = messaggi[i];
        cout << messaggio.getMittente("Alain") << "->" << messaggio.getDestinatario("Martial") << " : ";
        cout << messaggio.getTesto() << (messaggio.Letto() ? "Letto " : "\t Non Letto\n") << endl;
    }

        cout << "Numero totale di messaggi : " << chat.Messaggi_pre() << endl;
        cout << "Numero di messaggi letti : " << chat.Messaggi_letti() << endl;
        cout << "Numero di messaggi non letti : " << chat.get_Messaggi_non_letti() << endl;

    return 0;
}