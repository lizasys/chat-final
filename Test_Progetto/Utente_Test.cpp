
#include "gtest/gtest.h"
#include "../Utente.h"

TEST(UtenteTest, TestClassUtente) {
    Utente utente("liza");
    EXPECT_EQ(utente.getNome(), "liza");
}

TEST_F(UtenteTest_TestClassUtente_Test, Controllo_Eccessione){
    //Lanscia l'eccessione se Il nome utente viene una stringa vuota.
    EXPECT_THROW(Utente(""), std::invalid_argument);
}
