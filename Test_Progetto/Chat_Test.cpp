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
    Messaggio messaggio2(utente2, utente1, "Ciao, Alain! sto bene e tu?");

    chat.inviaMessaggio(messaggio1);
    chat.inviaMessaggio(messaggio2);

    //EXPECT_EQ(chat.getMessaggi().size(), 1);
    //EXPECT_EQ(chat.getMessaggi()[0].getTesto(), "Ciao, come stai?");

    // verificare che i messaggi sono stati ben agguinti in modo corretto
    const vector<Messaggio>& messaggi = chat.getMessaggi();
    ASSERT_EQ(messaggi.size(), 2);
}


TEST(ChatTest, Messaggi_Totali) {
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat(utente1, utente2);

    Messaggio messaggio1(utente1, utente2, "Ciao, Martial");
    chat.inviaMessaggio(messaggio1);
    ASSERT_EQ(chat.Messaggi_pre(),  1); // un messaggio letto.

    Messaggio messaggio2(utente2, utente1, "Ciao, Alain");
    chat.inviaMessaggio(messaggio2);
    ASSERT_EQ(chat.Messaggi_pre(),  2);

}

//Test per verificare messaggi letti
TEST(ChatTest, MessaggiLetti){
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat(utente1 , utente2);

    Messaggio sms1(utente1, utente2, "Ciao, Martial");
    chat.inviaMessaggio(sms1);

    Messaggio sms2(utente2, utente1, "Ciao, Alain");
    chat.inviaMessaggio(sms2);

    sms1.setLetto(true);
    ASSERT_EQ(chat.Messaggi_letti(), 1);
}

//Test per verificare messaggi non letti
TEST(ChatTest, Messaggi_Non_Letti){
    Utente utente1("Alain");
    Utente utente2("Martial");
    Chat chat(utente1 , utente2);

    Messaggio sms1(utente1, utente2, "Ciao, Alain");
    chat.inviaMessaggio(sms1);

    Messaggio sms2(utente2, utente1, "Ciao, Alain");
    chat.inviaMessaggio(sms2);

    sms1.setLetto(true);
    ASSERT_EQ(chat.get_Messaggi_non_letti(), 1);
}

TEST_F(ChatTest_Invio_MessaggioTest_Test, Controlo_eccessione){
    Utente utente1("Al");
    Utente utente2("Marx");

    //Inizia una chat qua
    Chat chat(utente1,utente2);

    Messaggio messaggio (utente1, utente2,"Hello !");

    // Verifica se l'eccessione e' lansciata
    EXPECT_NO_THROW(chat.inviaMessaggio(messaggio));
}