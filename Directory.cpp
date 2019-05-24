//
// Created by Alain Hoefdraad on 2019-05-17.
//

#include "Directory.h"
#include "dirent.h"
#include <fstream>
#include "HasherImplementation.h"
#include <iostream>

#include "/Users/alainhoefdraad/Downloads/chilkat-9.5.0-macosx/include/CkCrypt2.h"
using namespace std;

Directory::Directory(const char* Directory, HasherImplementation H) : Dir(Directory), Hasher(H)
{
}

Directory::~Directory()
{
}

void Directory::scanDir() {
    struct dirent *ent;

    if ((dir = opendir (Dir)) != NULL)
    {
        while ((ent = readdir (dir)) != NULL)
        {
            //printf ("%s\n", ent->d_name);
            string filename = ent->d_name;
            cout << "File = " << filename << " : ";
            string dirpath = Dir;
            filepath = dirpath + "/" + filename;
            hashFiles(filepath);
        }
        closedir (dir);
    }

    else
        {
        cout << "could not open directory" << endl;
        }

}

void Directory::hashFiles(string F)
{
    Hasher.Hash(F);
}
