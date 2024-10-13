#include <string>

class token{
    protected:
        enum type{
            VARIABLE,
            OPERATOR,
            KEY_WORD
        };

    std::string name;

    public:
        token(token::type, std::string);
        token(const token&);
        token(token&&);
        ~token();
        token& operator=(const token&);
        token& operator=(token&&);

        token::type getType();
        std::string getName();
};