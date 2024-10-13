#pragma once
#include <string>

class token{
    protected:
        enum m_type{
            VARIABLE,
            OPERATOR,
            KEY_WORD,
            VALUE
        };


    token::m_type type;
    std::string name;

    public:
        token(token::m_type, std::string);
        token(const token&);
        token(token&&);
        ~token() = default;
        token& operator=(const token&);
        token& operator=(token&&);

        inline token::m_type getType();
        inline std::string getName();
};