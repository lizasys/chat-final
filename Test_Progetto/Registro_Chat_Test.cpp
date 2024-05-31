//
// Created by Admin on 15/05/2024.
//
#include "gtest/gtest.h"
#include "../Registro_Chat.h"


TEST(Registra_Chat, AggiungiChatTest) {
    Registra_Chat registro;
    Utente utente1("Alain");
    Utente utente2("MArtial");
    Chat chat1(utente1, utente2);
    registro.aggiungi_Chat(chat1);

    // Verificare che la chat è stata correttamente aggiunta.
    EXPECT_EQ(registro.getChat().size(), 1);
}

TEST(Registra_Chat, VisualizzaTutteleChatTest) {
    Registra_Chat registro;
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat1(utente1, utente2); // Creazione di una chat.
    registro.aggiungi_Chat(chat1);


    //Verificazione del funzionamento corretto del display chat.
    EXPECT_TRUE(chat1.getMessaggi().empty());
    Messaggio msg1(utente1, utente2, "Buongiorno !!!");
    Messaggio msg2(utente2, utente1, "Ciao! Come va?");

    testing::internal::CaptureStdout(); // cattura del output.
    registro.visualizza_Tutte_le_Chat(msg1, msg2);
    std::string output = testing::internal::GetCapturedStdout();
    std::cout << output;

    chat1.inviaMessaggio(msg1);
    EXPECT_FALSE(chat1.getMessaggi().empty()); // per verificare che output contiene le informazione delle chat.
}