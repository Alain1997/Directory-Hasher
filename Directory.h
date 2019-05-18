//
// Created by Alain Hoefdraad on 2019-05-17.
//

#ifndef UNTITLED_DIRECTORY_H
#define UNTITLED_DIRECTORY_H

#include <iostream>
#include <vector>
#include "dirent.h"

using namespace std;


class Directory {
public:
    Directory(const char* Directory);
    virtual ~Directory();
    virtual void scanDir();
    //virtual void hashFiles();

private:
    const char* Dir;
    vector<string> Files;
    DIR *dir;
    char buffer[100] = "";
};


#endif //UNTITLED_DIRECTORY_H
