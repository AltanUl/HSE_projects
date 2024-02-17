// Declaration part of a module for the Matrix class.
#ifndef MATRIX_H
#define MATRIX_H


// TODO: provide a declaration of the class Matrix as it prescribed in the task.
#include <vector>
#include <utility>
#include <stdexcept>


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

    MatrixVector& operator[] (size_t i);
    const MatrixVector& operator[] (size_t i) const;
    double getEl(size_t i, size_t j) const;
    void setEl(size_t i, size_t j, double val);

    // operator overloads
    bool operator==(const Matrix& rhv) const;
    bool operator!=(const Matrix& rhv) const;
    Matrix operator+(const Matrix& rhv) const;

    // friend declaration for multiplication operator
    friend Matrix operator*(const Matrix& lhv, double rhv);
    friend Matrix operator*(double lhv, const Matrix& rhv);
    
private:
    VectorOfMatrixVector _matrix; 
};

// non-member function declarations
Matrix operator*(const Matrix& lhv, double rhv);
Matrix operator*(double lhv, const Matrix& rhv);

#endif // MATRIX_H
