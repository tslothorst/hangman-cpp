//
// Created by Thomas Slothorst on 30-12-2020.
//

#ifndef HANGMAN_CPP_NOWORDLISTEXCEPTION_H
#define HANGMAN_CPP_NOWORDLISTEXCEPTION_H

#include "exception"

class NoWordlistException : public std::exception {
public:
    NoWordlistException() noexcept = default;
    ~NoWordlistException() noexcept = default;
    virtual const char* what() const noexcept;
};


#endif //HANGMAN_CPP_NOWORDLISTEXCEPTION_H
