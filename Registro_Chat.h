//
// Created by Admin on 12/05/2024.
//

#ifndef PROGGETTO_LABO_REGISTRO_CHAT_H
#define PROGGETTO_LABO_REGISTRO_CHAT_H

#include "Chat.h"
#include <vector>

class Registra_Chat {
public:
    void aggiungi_Chat(const Chat& chat);
    void visualizza_Tutte_le_Chat() const;

private:
    vector<Chat> chat_List;
};
#endif //PROGGETTO_LABO_REGISTRO_CHAT_H
