#include <iostream>
#include "Directory.h"
#include "HasherImplementation.h"
#include <string>

int main()
{
    char* DirPath;
    cout << "Start Program" << endl;
    cout << "Enter a directory to scan: ";
    cin >> DirPath;
    HasherImplementation Hasher;
    Directory Directory(DirPath, Hasher);
    Directory.scanDir();
    return 0;
}