#ifndef _SPARSE_MATRIX_
#define _SPARSE_MATRIX_

#include <fstream>

class SparseMatrix
{
public:
    // Constructor for creating and opening the file
    SparseMatrix(const std::string &filename)
    {
        std::ofstream file(filename);

        if (!file)
            cout << "ERROR\nSparseVector file could not be created." << endl;

        else
            file.open(filename);
    }
};
#endif // _SPARSE_MATRIX_