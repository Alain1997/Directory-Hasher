//
// Created by Alain Hoefdraad on 2019-05-17.
//

#ifndef UNTITLED_DIRECTORY_H
#define UNTITLED_DIRECTORY_H

#include <iostream>
#include <vector>
#include "dirent.h"
#include "HasherImplementation.h"
#include <string>

using namespace std;


class Directory {
public:
    Directory(const char* Directory, HasherImplementation H);
    virtual ~Directory();
    virtual void scanDir();
    virtual void hashFiles(string F);

private:
    const char* Dir;
    DIR * dir;
    HasherImplementation Hasher;
    string filepath;
};


#endif //UNTITLED_DIRECTORY_H
