#include <iostream>
#include "Directory.h"

int main()
{
    cout << "Start Program" << endl;
    Directory Directory("/Users/alainhoefdraad/Desktop/SWAPD_Opdrachten");
    Directory.scanDir();
    return 0;
}