/**
 * Project Untitled
 */


#ifndef _FRIEND_H
#define _FRIEND_H

#include "Contact.h"


class Friend: public Contact {
public: 
    char* birthDate;
    char* phoneNumber;
    char* address;
};

#endif //_FRIEND_H