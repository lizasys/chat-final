#include "Registro_Chat.h"
#include<iostream>
//
// Created by Admin on 12/05/2024.
//
void Registra_Chat::aggiungi_Chat(const Chat &chat) {
    chat_List.push_back(chat);
}

const vector<Chat>& Registra_Chat::getChat() const{
return chat_List;
}

void Registra_Chat::visualizza_Tutte_le_Chat() const {
    for(const auto& chat : chat_List){
        chat.visualizzaMessaggi();

        std::cout << "Chat tra:" << endl;

        const auto& messaggi = chat.getMessaggi();
        for (const auto& msg : messaggi) {
            cout << "Messaggio da" << msg.getTesto() << ":" << msg.getTesto() << "\n";
        }
        cout <<"\n";
    }
}