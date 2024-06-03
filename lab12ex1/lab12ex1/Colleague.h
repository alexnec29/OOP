/**
 * Project Untitled
 */


#ifndef _COLLEAGUE_H
#define _COLLEAGUE_H

#include "Contact.h"


class Colleague: public Contact {
public: 
    char* company;
    char* address;
    char* phoneNumber;
};

#endif //_COLLEAGUE_H