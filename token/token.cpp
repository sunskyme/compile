//
// Created by Administrator on 2024/8/7.
//

#include "token.h"

using namespace  pi::token ;

// static
std::map<Token::Type,string> m_names   =     {
        {Token::TOKEN_ILLEGAL,    "illegal" },
        {Token::TOKEN_EOF,        "eof"     },
        {Token::TOKEN_INTEGER,    "integer" },
        {Token::TOKEN_PLUS,       "+"       },
        {Token::TOKEN_MINUS,      "-"       },
        {Token::TOKEN_ASTERISK,   "*"       },
        {Token::TOKEN_SLASH,      "/"       },
        {Token::TOKEN_LPAREN,     "( "      },
        {Token::TOKEN_RPAREN,     ")"       },
        {Token::TOKEN_SEMICOLON,  ";"       },
 };

Token::Token() :m_type( TOKEN_ILLEGAL)
{
}

Token::Token(Type type,const string &literal)
{
}


/*
Token();
Token(Type type,const string &literal);
~Token()=default;

Type type() const;
string name() const;
string literal()const;
*/