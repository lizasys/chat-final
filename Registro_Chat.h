
#ifndef PROGGETTO_LABO_REGISTRO_CHAT_H
#define PROGGETTO_LABO_REGISTRO_CHAT_H

#include "Chat.h"
#include <vector>

class Registra_Chat {
public:
    void aggiungi_Chat(const Chat &chat);

    const vector<Chat> &getChat() const;

    void visualizza_Tutte_le_Chat(Messaggio msg1, Messaggio msg2) const;

private:
    vector<Chat> chat_List;
};

#endif //PROGGETTO_LABO_REGISTRO_CHAT_H
