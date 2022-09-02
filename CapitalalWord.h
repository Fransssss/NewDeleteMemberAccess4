// Fransiskus Agapa

#ifndef NEWDELETEMEMBERACCESS4_CAPITALALWORD_H
#define NEWDELETEMEMBERACCESS4_CAPITALALWORD_H

#include "string"
#include "cctype"

using std::islower;
using std::toupper;
using std::isspace;
using std::string;

string Capitalize(string& word)
{
    for(size_t i = 0; i < word.size(); ++i)
    {
        if(i == 0)
        {
            if(islower(word[i]))
            {
                word[i] = toupper(word[i]);
            }
        }
        else
        {
            if(isspace(word[i]) and islower(word[i+1]))   // check space then chack it there is alaphabet after it and check if its lower or upper case
            {
                word[i + 1] = toupper(word[i=1]);
            }
        }
    }
    return word;
}


#endif //NEWDELETEMEMBERACCESS4_CAPITALALWORD_H
