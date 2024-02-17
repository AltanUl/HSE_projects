// Implementation part of a module for the Matrix class.
#include "matrix.h"

// TODO: provide here implementation of the Matrix class methods.
// default constructor
Matrix::Matrix() : Matrix(0, 0, 0.0) {
}

// constructor that creates a matrix of m rows and n columns
Matrix::Matrix(size_t m, size_t n, double def) : _matrix(m, MatrixVector(n, def)) {
}

// method to resize the matrix
void Matrix::resize(size_t m, size_t n, double def) {
    _matrix.resize(m, MatrixVector(n, def));
    for (auto& row : _matrix) {
        row.resize(n, def);
    }
}

// static method
Matrix::MatrixVector Matrix::createVector(size_t sz, double val) {
    return MatrixVector(sz, val); // Create and return a MatrixVector with all elements set to val
}
