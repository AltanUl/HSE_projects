// Implementation part of a module for the Matrix class.
#include "matrix.h"

// TODO: provide here implementation of the Matrix class methods.
// static method
Matrix::MatrixVector Matrix::createVector(size_t sz, double val) {
    return MatrixVector(sz, val); // Create and return a MatrixVector with all elements set to val
}
