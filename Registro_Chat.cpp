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


        const auto &messaggi = chat.getMessaggi();
        for (size_t i = 0; i <= 0; ++i) {
            const Messaggio &msg = messaggi[i];
            const string mittente = msg.getMittente("Alain");
            const string destinatario = (mittente == "Alain") ? "Martial" : " Alain";

            std::cout << "\nChat tra:\t" << mittente<<"\t e\t"<<destinatario  << endl;

            //if (mittente == "Alain")
            cout << "\nMessaggio da :\t" << mittente << "\ta\t" << destinatario << "\t:\t" << msg1.getTesto()
                 << "\n" << "Messaggio da :\t" << destinatario << "\ta\t" << mittente << "\t:\t" << msg2.getTesto()
                 << "\n\n";

        }
    }
}