//
// Created by Admin on 15/05/2024.
//
#include "gtest/gtest.h"
#include "../Registro_Chat.h"
#include "../Chat.h"

TEST(Registra_Chat, AggiungiChatTest){
    Registra_Chat registro;
    Utente utente1("Alain");
    Utente utente2("MArtial");
    Chat chat1( utente1, utente2);
    registro.aggiungi_Chat(chat1);

    // Verificare che la chat è stata correttamente aggiunta.
    EXPECT_EQ(registro.getChat().size(),1);
}

TEST(Registra_Chat, VisualizzaTutteleChatTest){
    Registra_Chat registro;
    Utente utente1("Alain");
    Utente utente2("MArtial");
    Chat chat1( utente1,  utente2); // Creazione di una chat.
    registro.aggiungi_Chat(chat1);

    //Verificazione del funzionamento corretto del display chat.
    testing::internal::CaptureStdout(); // cattura del output.
    registro.visualizza_Tutte_le_Chat();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_FALSE(output.find("Chat sono. . .") != std::string::npos); // per verificare che output contiene le informazione delle chat.
}