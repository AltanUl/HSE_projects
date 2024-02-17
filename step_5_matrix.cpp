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

// method to get the size of the matrix
Matrix::SizePair Matrix::getSize() const {
    if (!_matrix.empty()) {
        return SizePair(_matrix.size(), _matrix.front().size());
    }
    return SizePair(0, 0);
}

Matrix::MatrixVector& Matrix::operator[] (size_t i) {
    if (i >= _matrix.size()) {
        throw std::out_of_range("There is no such a row");
    }
    return _matrix[i];
}

const Matrix::MatrixVector& Matrix::operator[] (size_t i) const {
    if (i >= _matrix.size()) {
        throw std::out_of_range("There is no such a row");
    }
    return _matrix[i];
}

double Matrix::getEl(size_t i, size_t j) const {
    if (i >= _matrix.size() || j >= _matrix[i].size()) {
        throw std::out_of_range("Index out of range");
    }
    return _matrix[i][j];
}

void Matrix::setEl(size_t i, size_t j, double val) {
    if (i >= _matrix.size() || j >= _matrix[i].size()) {
        throw std::out_of_range("Index out of range");
    }
    _matrix[i][j] = val;
}
