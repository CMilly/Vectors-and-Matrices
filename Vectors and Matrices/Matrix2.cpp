/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix2.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include "Matrix2.h"
using namespace std;

/**
 * Default constructor for Matrix2 class
 */
Maths3D::Matrix2::Matrix2() {
    for(int i = 0; i < 4; i++){
        matrix2[i] = 0.0f;
    }
}

/**
 * Constructor for Matrix2 class
 * @param e0
 * @param e1
 * @param e2
 * @param e3
 */
Maths3D::Matrix2::Matrix2(float e0, float e1, float e2, float e3) {
    matrix2[0] = e0;
    matrix2[1] = e1;

    matrix2[2] = e2;
    matrix2[3] = e3;
}

/**
 * Copy constructor
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator=(const Maths3D::Matrix2 &m2) {
    matrix2[0] = m2.matrix2[0];
    matrix2[1] = m2.matrix2[1];

    matrix2[2] = m2.matrix2[2];
    matrix2[3] = m2.matrix2[3];
    return *this;
}

/**
 * Overloaded operator +
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator+(const Maths3D::Matrix2 &m2) {
    matrix2[0] = matrix2[0] + m2.matrix2[0];
    matrix2[1] = matrix2[1] + m2.matrix2[1];

    matrix2[2] = matrix2[2] + m2.matrix2[2];
    matrix2[3] = matrix2[3] + m2.matrix2[3];

    return *this;
}

/**
 * Overloaded operator +=
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator+=(const Maths3D::Matrix2 &m2) {
    matrix2[0] += m2.matrix2[0];
    matrix2[1] += m2.matrix2[1];

    matrix2[2] += m2.matrix2[2];
    matrix2[3] += m2.matrix2[3];

    return *this;
}

/**
 * Overloaded operator -
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator-(const Maths3D::Matrix2 &m2) {
    matrix2[0] = matrix2[0] - m2.matrix2[0];
    matrix2[1] = matrix2[1] - m2.matrix2[1];

    matrix2[2] = matrix2[2] - m2.matrix2[2];
    matrix2[3] = matrix2[3] - m2.matrix2[3];

    return *this;
}

/**
 * Overloaded operator -=
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator-=(const Maths3D::Matrix2 &m2) {
    matrix2[0] -= m2.matrix2[0];
    matrix2[1] -= m2.matrix2[1];

    matrix2[2] -= m2.matrix2[2];
    matrix2[3] -= m2.matrix2[3];

    return *this;
}

/**
 * Overloaded operator * (SCALAR)
 * @param k
 * @return Matrix2
 */
Maths3D::Matrix2 Maths3D::Matrix2::operator*(float k) {
    matrix2[0] = matrix2[0] * k;
    matrix2[1] = matrix2[1] * k;

    matrix2[2] = matrix2[2] * k;
    matrix2[3] = matrix2[3] * k;
}

/**
 * Overloaded operator *= (SCALAR)
 * @param k
 * @return Matrix2
 */
Maths3D::Matrix2 Maths3D::Matrix2::operator*=(float k) {
    matrix2[0] *= k;
    matrix2[1] *= k;

    matrix2[2] *= k;
    matrix2[3] *= k;
}

/**
 * Overloaded operator *
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator*(const Maths3D::Matrix2 &m2) {
    matrix2[0] = (matrix2[0] * m2.matrix2[0]) + (matrix2[0] * m2.matrix2[2]);
    matrix2[1] = (matrix2[1] * m2.matrix2[0]) + (matrix2[1] * m2.matrix2[2]);

    matrix2[2] = (matrix2[2] * m2.matrix2[1]) + (matrix2[2] * m2.matrix2[3]);
    matrix2[3] = (matrix2[3] * m2.matrix2[1]) + (matrix2[3] * m2.matrix2[3]);

    return *this;
}

/**
 * Overloaded operator *=
 * @param m2
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::operator*=(const Maths3D::Matrix2 &m2) {
    matrix2[0] = (matrix2[0] * m2.matrix2[0]) + (matrix2[0] * m2.matrix2[2]);
    matrix2[1] = (matrix2[1] * m2.matrix2[0]) + (matrix2[1] * m2.matrix2[2]);

    matrix2[2] = (matrix2[2] * m2.matrix2[1]) + (matrix2[2] * m2.matrix2[3]);
    matrix2[3] = (matrix2[3] * m2.matrix2[1]) + (matrix2[3] * m2.matrix2[3]);

    return *this;
}

/**
 * Sets this Matrix as an identity matrix
 * Def: A matrix in which all the elements of the principal diagonals are ones and all others are zeroes
 * Effect: Multiplying a given matrix by an identity matrix is to leave the given unchanged
 */
void Maths3D::Matrix2::set_as_identity() {
    for(int i = 0; i < 4; i++){
        matrix2[i] = 0.0f;
    }
    matrix2[0] = 0.0f;
    matrix2[3] = 0.0f;
}

/**
 * Transposes this Matrix
 * Def: To transpose a matrix is to "flip" a matrix over its diagonal in turn producing another matrix
 * where the rows and column indices are switched A(T)
 * Effect: Apart of Inverse operation
 */
void Maths3D::Matrix2::transpose() {
    float temp_matrix2[4];

    temp_matrix2[0] = matrix2[0];
    temp_matrix2[2] = matrix2[1];

    temp_matrix2[1] = matrix2[2];
    temp_matrix2[3] = matrix2[3];
}

/**
 * Calculates the determinant of this Matrix
 * Def: The determinant is used to indicate whether the matrix has an inverse or not
 * If zero, then no inverse exists, if non-zero, then a determinant exists
 * Effect: The determinant will allow us to figure out if the given matrix has an inverse
 * @return float
 */
float Maths3D::Matrix2::determinant() {
    return (matrix2[0] * matrix2[3]) - (matrix2[1] * matrix2[2]);
}

/**
 * Returns the inverse of this Matrix if able
 * Def: Process of finding matrix B that satisfies the prior equation for a given invertible matrix A
 * Effect: Inverse
 * @return Matrix2
 */
Maths3D::Matrix2& Maths3D::Matrix2::inverse() {
    float temp_matrix2[4];

    temp_matrix2[0] = matrix2[3];
    temp_matrix2[1] = matrix2[1] * -1;

    temp_matrix2[2] = matrix2[2] * -1;
    temp_matrix2[3] = matrix2[0];

    temp_matrix2[0] = temp_matrix2[0] * 1/determinant();
    temp_matrix2[1] = temp_matrix2[1] * 1/determinant();

    temp_matrix2[2] = temp_matrix2[2] * 1/determinant();
    temp_matrix2[3] = temp_matrix2[3] * 1/determinant();

    for(int i = 0; i < 4; i++){
        matrix2[i] = temp_matrix2[i];
    }

    return *this;
}

void Maths3D::Matrix2::to_string() {
    cout << matrix2[0] << "   " << matrix2[1] << "\n"
         << matrix2[2] << "   " << matrix2[3] << "\n" << endl;
}
