#include <iostream>
#include <fstream>
#include <string>
#include "SparseVector.h"
#include "SparseMatrix.h"

using namespace std;

int main()
{
    ofstream outfile;
    outfile.open("output.txt", ios::out | ios::trunc);

    // Creating a SparseVector from file
    SparseVector a1("a1.txt");
    outfile << "a1" << endl
            << a1 << endl;

    // Binary operations and assignments
}