#include <iostream>
#include "Utente.h"
#include "Messaggio.h"
#include "Chat.h"
#include "Registro_Chat.h"

/*Classi che rappresentano chat tra utenti.
 Si deve rappresentare un utente di un sistema, un messaggio di chat da un utente ad un altro,
 una classe che rappresenta una chat tra due utenti, un registro di tutte le chat fatte.*/

int main() {
    //Prova  dell'eccessione sul costruttore dell'oggetto Utente
    try {
        Utente u("Marx");
    }catch(const invalid_argument& e){
        cerr << "Error :" << e.what() << endl;
    }
    // chaimata della classe utente con parametro
    Utente utente1("liza");
    Utente utente2("lince");

    Chat chat(utente1, utente2);

    // Prova dell'eccessione sul costruttore dell'oggetto Messaggio
    try {
        Messaggio sm(utente1,utente2,"Tutto bene!");
    }catch (const invalid_argument& e){
        cerr << "Error :" << e.what() << endl;
    }

    // Prova dell'eccessione sul metodo inviaMessaggio della classe Chat
    try {
        Messaggio sms(utente1, utente2, "\n\nCiao! come va? : Questo e' l'output della recuperazione di eccessione \n");
        chat.inviaMessaggio(sms);
    }catch (const out_of_range& e){
        cerr << "Error :" << e.what() << endl;
    }

// Conversazione tra due utenti
    cout << "\nMessaggi scambiati tra Utenti:\n" << endl;

    Messaggio sms1(utente1, utente2, "\tCiao, lince");
    Messaggio sms2(utente2, utente1, "\tCiao, liza");


// Oggetto per l'invio dei sms

    chat.inviaMessaggio(sms1);
    chat.inviaMessaggio(sms2);


// Oggetto per aggiungere e visualizzare le chat
    Registra_Chat registro;
    registro.aggiungi_Chat(chat);
    registro.visualizza_Tutte_le_Chat(sms1, sms2);

    vector<Messaggio> messaggi = chat.getMessaggi();
    for (size_t i = 0; i <= 0; ++i) {
            const Messaggio &messaggio = messaggi[i];
        cout << messaggio.getMittente() << "->" << messaggio.getDestinatario() << " : ";
        cout << messaggio.getTesto() << (messaggio.Letto() ? "Letto " : "\t Non Letto\n") << endl;
    }

        cout << "Numero totale di messaggi : " << chat.Messaggi_pre() << endl;
        cout << "Numero di messaggi letti : " << chat.Messaggi_letti() << endl;
        cout << "Numero di messaggi non letti : " << chat.get_Messaggi_non_letti() << endl;

    return 0;
}
