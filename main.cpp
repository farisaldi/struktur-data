// Labwork1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//#include "pch.h"
#include <iostream>
#include <fstream>
#include <string>
#include <string.h>
#include <cstdio>
#include <stdlib.h>
#include <vector>
#include <cstdlib>
#include "OperationFile.h"


using namespace std;

struct mahasiswa {
    string nama;
    string nrp;
};

mahasiswa readXML(string filelocation) {
    OperationFile of;
    mahasiswa mhs;
    string xml= of.getFile(filelocation);
    mhs.nama = of.getXML(xml, "nama");
    mhs.nrp = of.getXML(xml, "nrp");
    return mhs;
}

int main () {
    string filelocation = "D:\\bu dea\\tirta.xml";
    mahasiswa coba = readXML(filelocation);
    cout  << "Nama :" << coba.nama << endl;
    cout << "NRP :"<< coba.nrp << endl;
    system("pause");
    return 0;
}
