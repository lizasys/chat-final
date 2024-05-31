//
// Created by Admin on 15/05/2024.
//
#include "gtest/gtest.h"
#include "../Utente.h"

TEST(UtenteTest, TestClassUtente) {
    Utente utente("Alain");
    EXPECT_EQ(utente.getNome(), "Alain");
}