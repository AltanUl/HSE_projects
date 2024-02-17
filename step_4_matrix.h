// Declaration part of a module for the Matrix class.
#ifndef MATRIX_H
#define MATRIX_H


// TODO: provide a declaration of the class Matrix as it prescribed in the task.
#include <vector>
#include <utility>

class Matrix {
public:
    typedef std::vector<double> MatrixVector;
    typedef std::vector<MatrixVector> VectorOfMatrixVector;
    typedef std::pair<size_t, size_t> SizePair;
    
    // default constructor
    Matrix();

    // Constructor that creates a matrix of m rows and n columns
    Matrix(size_t m, size_t n, double def);

    static MatrixVector createVector(size_t sz, double val);
    
    // method to resize the matrix
    void resize(size_t m, size_t n, double def);
    SizePair getSize() const;
    
private:
    VectorOfMatrixVector _matrix; 
};

#endif // MATRIX_H
