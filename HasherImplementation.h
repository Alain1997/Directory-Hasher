//
// Created by Alain Hoefdraad on 2019-05-24.
//

#ifndef UNTITLED_HASHERIMPLEMENTATION_H
#define UNTITLED_HASHERIMPLEMENTATION_H


class HasherInterface;

#include <string>

using namespace std;

class HasherImplementation {
public:
    HasherImplementation();
    virtual ~HasherImplementation();
    virtual void Hash(string File);

};


#endif //UNTITLED_HASHERIMPLEMENTATION_H
