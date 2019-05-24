//
// Created by Alain Hoefdraad on 2019-05-24.
//

#ifndef UNTITLED_HASHERINTERFACE_H
#define UNTITLED_HASHERINTERFACE_H

#include <string>
using namespace std;


class HasherInterface {
public:
    HasherInterface();
    virtual ~HasherInterface();
    virtual void Hash(string File) = 0;
};


#endif //UNTITLED_HASHERINTERFACE_H
