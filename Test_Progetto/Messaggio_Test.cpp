
#include "gtest/gtest.h"
#include "../Messaggio.h"
//#include "../Utente.h"

TEST(MessaggioTest, TestGetSMS) {
    Utente mittente("liza");
    Utente destinatario("lince");
    Messaggio messaggio(mittente, destinatario, "Ciao, come stai?");
    EXPECT_EQ(messaggio.getTesto(), "Ciao, come stai?");
}

TEST_F(MessaggioTest_TestGetSMS_Test, Lancia_Eccessione){
    Utente mittente("li");
    Utente destinatario("Marx");

    // verifica che l'eccezione sia lanciata.
    EXPECT_THROW(Messaggio(mittente, destinatario, ""), std::invalid_argument);
}
