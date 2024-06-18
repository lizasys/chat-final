#include "Registro_Chat.h"
#include<iostream>
#include "Utente.h"


//
// Created by Admin on 12/05/2024.
//
void Registra_Chat::aggiungi_Chat(const Chat &chat) {
    chat_List.push_back(chat);
}

const vector<Chat> &Registra_Chat::getChat() const {
    return chat_List;
}


void Registra_Chat::visualizza_Tutte_le_Chat(Messaggio msg1, Messaggio msg2) const {
    for (const auto &chat: chat_List) {
        chat.visualizzaMessaggi();

        Utente utente1("Alain");
        Utente utente2("Martial");


        const auto &messaggi = chat.getMessaggi();
        for (size_t i = 0; i <messaggi.size(); ++i) {
            const Messaggio &msg = messaggi[i];
            utente1 = msg.getMittente();
            utente2 = msg.getDestinatario();
            const Utente mittente = msg.getMittente();
            const Utente destinatario = (mittente == utente1) ? utente2 : utente1;

            std::cout << "\nChat tra:\t" << mittente<<"\t e\t"<<destinatario  << endl;

            cout << "\nMessaggio da :\t" << mittente << "\ta\t" << destinatario << "\t:\t" << msg1.getTesto()
                 << "\n" << "Messaggio da :\t" << destinatario << "\ta\t" << mittente << "\t:\t" << msg2.getTesto()
                 << "\n\n";

        }
    }
}