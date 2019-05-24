//
// Created by Alain Hoefdraad on 2019-05-24.
//

#include "HasherImplementation.h"
#include <string>
#include <iostream>
#include <sstream>
#include <fstream>
#include <cstdint>
#include <iomanip>
using namespace std;

HasherImplementation::HasherImplementation()
{

}

HasherImplementation::~HasherImplementation()
{

}

void HasherImplementation::Hash(string File)
{
    ifstream fp(File);
    stringstream ss;

    // Unable to hash file, return an empty hash.
    if (!fp.is_open()) {
        cout << "Failed to open file: " << File << endl;
    }

    // Hashing
    uint32_t magic = 5381;
    char c;
    while (fp.get(c)) {
        magic = ((magic << 5) + magic) + c; // magic * 33 + c
    }

    ss << hex << setw(8) << setfill('0') << magic;
    cout << "Hashed File: " << ss.str() << endl;
}