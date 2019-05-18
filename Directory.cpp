//
// Created by Alain Hoefdraad on 2019-05-17.
//

#include "Directory.h"
#include "dirent.h"
#include <fstream>

using namespace std;

Directory::Directory(const char* Directory) : Dir(Directory)
{
}

Directory::~Directory()
{

}

void Directory::scanDir() {
    struct dirent *ent;
    if ((dir = opendir (Dir)) != NULL) {
        /* print all the files and directories within directory */
        while ((ent = readdir (dir)) != NULL) {
            printf ("%s\n", ent->d_name);
            ifstream myFile (ent->d_name);
            myFile.read (buffer, 100);
            for(int i =0; i < 100; i++)
            {
                cout << buffer[i] << endl;
            }
        }
        closedir (dir);
    } else {
        /* could not open directory */
        perror ("");
        //return EXIT_FAILURE;
    }

}
