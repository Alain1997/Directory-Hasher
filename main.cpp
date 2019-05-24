#include <iostream>
#include "Directory.h"
#include "HasherImplementation.h"
#include <string>

int main()
{
    string DirPath;
    cout << "Start Program" << endl;
    cout << "Enter a directory to scan: ";
    cin >> DirPath;
    HasherImplementation Hasher;
    Directory Directory("/Users/alainhoefdraad/Desktop/SWAPD_Opdrachten", Hasher);
    Directory.scanDir();
    return 0;
}