#ifndef UNSUPPORTEDOPERATIONEXCEPTION_H
#define UNSUPPORTEDOPERATIONEXCEPTION_H

#include <iostream>
#include <stdexcept>

class UnsupportedOperationException : public std::exception {
public:
    UnsupportedOperationException();
    virtual const char* what();
};

#endif
