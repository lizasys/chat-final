#include "Utente.h"
//
// Created by Admin on 12/05/2024.
//
Utente::Utente(const std::string &nome): nome(nome) {}

Utente::Utente():nome("Alain") {}


string Utente::getNome() const{
    return nome;
}

