//
// Created by Alain Hoefdraad on 2019-05-17.
//

#include "Directory.h"
#include "dirent.h"
#include <fstream>

#include "/Users/alainhoefdraad/Downloads/chilkat-9.5.0-macosx/include/CkCrypt2.h"
using namespace std;

Directory::Directory(const char* Directory) : Dir(Directory)
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
            printf ("%s\n", ent->d_name);
            Files.push_back(ent->d_name);
        }
        closedir (dir);
    }

    else
        {
        cout << "could not open directory" << endl;
        }

}
