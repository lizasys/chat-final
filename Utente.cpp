#include "Utente.h"
#include <stdexcept>
#include <iostream>

//
// Created by Admin on 12/05/2024.
//
Utente::Utente(const std::string &nome) : nome(nome) {
    if (nome == "")
        throw invalid_argument ("Il nome dell'utente è vuoto");
}

bool Utente::operator !=(const Utente& other) const{
    return nome != other.nome;
}
 bool Utente::operator == (const Utente& Other) const {
     return nome == Other.nome;
}

  std::ostream&  operator << (std::ostream& os , const Utente& utente) {
      return os << "Nome Utente:" << utente.nome ;
};


string Utente::getNome() const {
    return nome;
}

