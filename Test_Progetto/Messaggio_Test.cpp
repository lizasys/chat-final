//
// Created by Admin on 15/05/2024.
//
#include "gtest/gtest.h"
#include "../Messaggio.h"
//#include "../Utente.h"

TEST(MessaggioTest, TestGetSMS) {
    Utente mittente("Alain");
    Utente destinatario("Martial");
    Messaggio messaggio(mittente, destinatario, "Ciao, come stai?");
    EXPECT_EQ(messaggio.getTesto(), "Ciao, come stai?");
}