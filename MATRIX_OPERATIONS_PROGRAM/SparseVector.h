#ifndef _SPARSE_VECTOR_
#define _SPARSE_VECTOR_

#include <fstream>

class SparseVector
{
public:
    // Constructor for creating and opening the file
    SparseVector(const std::string &filename)
    {
        std::ofstream file(filename);

        if (!file)
            cout << "ERROR\nSparseVector file could not be created." << endl;

        else
            file.open(filename);
    }
};
#endif // _SPARSE_VECTOR_