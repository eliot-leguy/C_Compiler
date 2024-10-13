#include "token.h"
#include <string>

token::token(token::m_type type, std::string name) : type(type), name(name) {};

token::token(const token& obj) : type(obj.type), name(obj.name) {};

token::token(token&& obj) : type(obj.type), name(obj.name) {};

token& token::operator=(const token& obj){
    this->type = obj.type;
    this->name = obj.name;

    return (*this);
}

token& token::operator=(token&& obj){
    this->type = obj.type;
    this->name = obj.name;

    return (*this);
}

token::m_type token::getType(){
    return this->type;
}

std::string token::getName(){
    return this->name;
}