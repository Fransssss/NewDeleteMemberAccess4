//
// Created by XaveF on 9/2/2022.
//

#ifndef NEWDELETEMEMBERACCESS4_VALIDDIGIT_H
#define NEWDELETEMEMBERACCESS4_VALIDDIGIT_H

#include "string"
#include "cctype"

using std::string;
using std::isalpha;

bool Validate(const string& strDigit)
{
    for(size_t i = 0; i < strDigit.size(); ++i)
    {
        if(isalpha(strDigit[i]))           // is alphabet is found then return false
        {
            return false;
        }
    }
    return true;
}


#endif //NEWDELETEMEMBERACCESS4_VALIDDIGIT_H
