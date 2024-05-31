//
// Created by Admin on 15/05/2024.
//
#include "gtest/gtest.h"
#include "../Chat.h"

TEST(ChatTest, Invio_MessaggioTest) {
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat(utente1, utente2);
    Messaggio messaggio1(utente1, utente2, "Ciao, come stai?");

    chat.inviaMessaggio(messaggio1);
    EXPECT_EQ(chat.getMessaggi().size(), 1);
    EXPECT_EQ(chat.getMessaggi()[0].getTesto(), "Ciao, come stai?");
}

TEST(ChatTest, VisualizzaMessaggiTest) {
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat(utente1, utente2);

    Messaggio messaggio1(utente1, utente2, "Ciao, come stai?");
    chat.inviaMessaggio(messaggio1);

    // verificare che la funzione display correttamente il messaggio
    testing::internal::CaptureStdout(); //Prende(o cattura) il output.
    chat.visualizzaMessaggi();
    std::string output = testing::internal::GetCapturedStdout();
    EXPECT_TRUE(output.find("Ciao, come stai?") != std::string::npos); // verificare che l'output contiene il messaggio.
}