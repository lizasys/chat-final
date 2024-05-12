#include "Registro_Chat.h"
#include <iostream>
//
// Created by Admin on 12/05/2024.
//
void Registra_Chat::aggiungi_Chat(const Chat &chat) {
    chat_List.push_back(chat);
}

void Registra_Chat::visualizza_Tutte_le_Chat() const {
    for(const auto& chat : chat_List){
        chat.visualizzaMessaggi();
    }
}