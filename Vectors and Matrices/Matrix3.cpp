/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix3.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include "Matrix3.h"
using namespace std;

/**
 * Default constructor for Matrix3 class
 */
Maths3D::Matrix3::Matrix3() {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
}

/**
 * Constructor for Matrix3 class
 * @param e0
 * @param e1
 * @param e2
 * @param e3
 * @param e4
 * @param e5
 * @param e6
 * @param e7
 * @param e8
 */
Maths3D::Matrix3::Matrix3(float e0, float e1, float e2, float e3, float e4, float e5, float e6, float e7, float e8) {
    matrix3[0] = e0;
    matrix3[1] = e1;
    matrix3[2] = e2;

    matrix3[3] = e3;
    matrix3[4] = e4;
    matrix3[5] = e5;

    matrix3[6] = e6;
    matrix3[7] = e7;
    matrix3[8] = e8;
}

/**
 * Copy constructor
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator=(const Maths3D::Matrix3 &m2) {
    matrix3[0] = m2.matrix3[0];
    matrix3[1] = m2.matrix3[1];
    matrix3[2] = m2.matrix3[2];

    matrix3[3] = m2.matrix3[3];
    matrix3[4] = m2.matrix3[4];
    matrix3[5] = m2.matrix3[5];

    matrix3[6] = m2.matrix3[6];
    matrix3[7] = m2.matrix3[7];
    matrix3[8] = m2.matrix3[8];

    return *this;
}

/**
 * Overloaded operator +
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator+(const Maths3D::Matrix3 &m2) {
    matrix3[0] = matrix3[0] + m2.matrix3[0];
    matrix3[1] = matrix3[1] + m2.matrix3[1];
    matrix3[2] = matrix3[2] + m2.matrix3[2];

    matrix3[3] = matrix3[3] + m2.matrix3[3];
    matrix3[4] = matrix3[4] + m2.matrix3[4];
    matrix3[5] = matrix3[5] + m2.matrix3[5];

    matrix3[6] = matrix3[6] + m2.matrix3[6];
    matrix3[7] = matrix3[7] + m2.matrix3[7];
    matrix3[8] = matrix3[8] + m2.matrix3[8];

    return *this;
}

/**
 * Overloaded operator +=
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator+=(const Maths3D::Matrix3 &m2) {
    matrix3[0] += m2.matrix3[0];
    matrix3[1] += m2.matrix3[1];
    matrix3[2] += m2.matrix3[2];

    matrix3[3] += m2.matrix3[3];
    matrix3[4] += m2.matrix3[4];
    matrix3[5] += m2.matrix3[5];

    matrix3[6] += m2.matrix3[6];
    matrix3[7] += m2.matrix3[7];
    matrix3[8] += m2.matrix3[8];

    return *this;
}

/**
 * Overloaded operator -
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator-(const Maths3D::Matrix3 &m2) {
    matrix3[0] = matrix3[0] - m2.matrix3[0];
    matrix3[1] = matrix3[1] - m2.matrix3[1];
    matrix3[2] = matrix3[2] - m2.matrix3[2];

    matrix3[3] = matrix3[3] - m2.matrix3[3];
    matrix3[4] = matrix3[4] - m2.matrix3[4];
    matrix3[5] = matrix3[5] - m2.matrix3[5];

    matrix3[6] = matrix3[6] - m2.matrix3[6];
    matrix3[7] = matrix3[7] - m2.matrix3[7];
    matrix3[8] = matrix3[8] - m2.matrix3[8];

    return *this;
}

/**
 * Overloaded operator -=
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator-=(const Maths3D::Matrix3 &m2) {
    matrix3[0] -= m2.matrix3[0];
    matrix3[1] -= m2.matrix3[1];
    matrix3[2] -= m2.matrix3[2];

    matrix3[3] -= m2.matrix3[3];
    matrix3[4] -= m2.matrix3[4];
    matrix3[5] -= m2.matrix3[5];

    matrix3[6] -= m2.matrix3[6];
    matrix3[7] -= m2.matrix3[7];
    matrix3[8] -= m2.matrix3[8];

    return *this;
}

/**
 * Overloaded operator * (SCALAR)
 * @param k
 * @return Matrix3
 */
Maths3D::Matrix3 Maths3D::Matrix3::operator*(float k) {
    matrix3[0] = matrix3[0] * k;
    matrix3[1] = matrix3[1] * k;
    matrix3[2] = matrix3[2] * k;

    matrix3[3] = matrix3[3] * k;
    matrix3[4] = matrix3[4] * k;
    matrix3[5] = matrix3[5] * k;

    matrix3[6] = matrix3[6] * k;
    matrix3[7] = matrix3[7] * k;
    matrix3[8] = matrix3[8] * k;

    return *this;
}

/**
 * Overloaded operator *= (SCALAR)
 * @param k
 * @return Matrix3
 */
Maths3D::Matrix3 Maths3D::Matrix3::operator*=(float k) {
    matrix3[0] *= k;
    matrix3[1] *= k;
    matrix3[2] *= k;

    matrix3[3] *= k;
    matrix3[4] *= k;
    matrix3[5] *= k;

    matrix3[6] *= k;
    matrix3[7] *= k;
    matrix3[8] *= k;

    return *this;
}

/**
 * Overloaded operator *
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator*(const Maths3D::Matrix3 &m2) {
    matrix3[0] = (matrix3[0] * m2.matrix3[0]) + (matrix3[0] * m2.matrix3[3]) + (matrix3[0] * m2.matrix3[6]);
    matrix3[1] = (matrix3[1] * m2.matrix3[0]) + (matrix3[1] * m2.matrix3[3]) + (matrix3[1] * m2.matrix3[6]);
    matrix3[2] = (matrix3[2] * m2.matrix3[0]) + (matrix3[2] * m2.matrix3[3]) + (matrix3[2] * m2.matrix3[6]);

    matrix3[3] = (matrix3[3] * m2.matrix3[1]) + (matrix3[3] * m2.matrix3[4]) + (matrix3[3] * m2.matrix3[7]);
    matrix3[4] = (matrix3[4] * m2.matrix3[1]) + (matrix3[4] * m2.matrix3[4]) + (matrix3[4] * m2.matrix3[7]);
    matrix3[5] = (matrix3[5] * m2.matrix3[1]) + (matrix3[5] * m2.matrix3[4]) + (matrix3[5] * m2.matrix3[7]);

    matrix3[6] = (matrix3[6] * m2.matrix3[2]) + (matrix3[6] * m2.matrix3[5]) + (matrix3[6] * m2.matrix3[8]);
    matrix3[7] = (matrix3[7] * m2.matrix3[2]) + (matrix3[7] * m2.matrix3[5]) + (matrix3[7] * m2.matrix3[8]);
    matrix3[8] = (matrix3[8] * m2.matrix3[2]) + (matrix3[8] * m2.matrix3[5]) + (matrix3[8] * m2.matrix3[8]);

    return *this;
}

/**
 * Overloaded operator *=
 * @param m2
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::operator*=(const Maths3D::Matrix3 &m2) {
    matrix3[0] = (matrix3[0] * m2.matrix3[0]) + (matrix3[0] * m2.matrix3[3]) + (matrix3[0] * m2.matrix3[6]);
    matrix3[1] = (matrix3[1] * m2.matrix3[0]) + (matrix3[1] * m2.matrix3[3]) + (matrix3[1] * m2.matrix3[6]);
    matrix3[2] = (matrix3[2] * m2.matrix3[0]) + (matrix3[2] * m2.matrix3[3]) + (matrix3[2] * m2.matrix3[6]);

    matrix3[3] = (matrix3[3] * m2.matrix3[1]) + (matrix3[3] * m2.matrix3[4]) + (matrix3[3] * m2.matrix3[7]);
    matrix3[4] = (matrix3[4] * m2.matrix3[1]) + (matrix3[4] * m2.matrix3[4]) + (matrix3[4] * m2.matrix3[7]);
    matrix3[5] = (matrix3[5] * m2.matrix3[1]) + (matrix3[5] * m2.matrix3[4]) + (matrix3[5] * m2.matrix3[7]);

    matrix3[6] = (matrix3[6] * m2.matrix3[2]) + (matrix3[6] * m2.matrix3[5]) + (matrix3[6] * m2.matrix3[8]);
    matrix3[7] = (matrix3[7] * m2.matrix3[2]) + (matrix3[7] * m2.matrix3[5]) + (matrix3[7] * m2.matrix3[8]);
    matrix3[8] = (matrix3[8] * m2.matrix3[2]) + (matrix3[8] * m2.matrix3[5]) + (matrix3[8] * m2.matrix3[8]);

    return *this;
}

/**
 * Sets this Matrix as an identity matrix
 * Def: A matrix in which all the elements of the principal diagonals are ones and all others are zeroes
 * Effect: Multiplying a given matrix by an identity matrix is to leave the given unchanged
 */
void Maths3D::Matrix3::set_as_identity() {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = 1.0f;
    matrix3[4] = 1.0f;
    matrix3[8] = 1.0f;
}

/**
 * Transposes this Matrix
 * Def: To transpose a matrix is to "flip" a matrix over its diagonal in turn producing another matrix
 * where the rows and column indices are switched A(T)
 * Effect: Apart of Inverse operation
 */
void Maths3D::Matrix3::transpose() {
    float temp_matrix3[9];

    temp_matrix3[0] = matrix3[0];
    temp_matrix3[3] = matrix3[1];
    temp_matrix3[6] = matrix3[2];

    temp_matrix3[1] = matrix3[3];
    temp_matrix3[4] = matrix3[4];
    temp_matrix3[7] = matrix3[5];

    temp_matrix3[2] = matrix3[6];
    temp_matrix3[5] = matrix3[7];
    temp_matrix3[8] = matrix3[8];

    for(int i = 0; i < 9; i++){
        matrix3[i] = temp_matrix3[i];
    }
}

/**
 * Calculates the determinant of this Matrix
 * Def: The determinant is used to indicate whether the matrix has an inverse or not
 * If zero, then no inverse exists, if non-zero, then a determinant exists
 * Effect: The determinant will allow us to figure out if the given matrix has an inverse
 * @return float
 */
float Maths3D::Matrix3::determinant() {
    return matrix3[0] * (matrix3[4] * matrix3[8] - matrix3[5] * matrix3[7]) -
           matrix3[1] * (matrix3[3] * matrix3[8] - matrix3[5] * matrix3[6]) +
           matrix3[2] * (matrix3[3] * matrix3[7] - matrix3[4] * matrix3[6]);
}

/**
 * Returns the inverse of this Matrix if able
 * Def: Process of finding matrix B that satisfies the prior equation for a given invertible matrix A
 * Effect: Inverse
 * @return Matrix3
 */
Maths3D::Matrix3& Maths3D::Matrix3::inverse() {
    transpose(); //transpose the original matrix

    //find the determinant of each 2x2 minor matrix
    float det_m0 = (matrix3[4] * matrix3[8]) - (matrix3[5] * matrix3[7]);
    float det_m1 = ((matrix3[3] * matrix3[8]) - (matrix3[5] * matrix3[6]));
    float det_m2 = ((matrix3[3] * matrix3[7]) - (matrix3[4] * matrix3[6]));

    float det_m3 = ((matrix3[1] * matrix3[8]) - (matrix3[2] * matrix3[7]));
    float det_m4 = ((matrix3[0] * matrix3[8]) - (matrix3[2] * matrix3[6]));
    float det_m5 = ((matrix3[0] * matrix3[7]) - (matrix3[1] * matrix3[6]));

    float det_m6 = ((matrix3[1] * matrix3[5]) - (matrix3[2] * matrix3[4]));
    float det_m7 = ((matrix3[0] * matrix3[5]) - (matrix3[2] * matrix3[3]));
    float det_m8 = ((matrix3[0] * matrix3[4]) - (matrix3[1] * matrix3[3]));

    float adj_matrix3[9]; //instantiate the adjacent matrix

    adj_matrix3[0] = det_m0;
    adj_matrix3[1] = det_m1;
    adj_matrix3[2] = det_m2;

    adj_matrix3[3] = det_m3;
    adj_matrix3[4] = det_m4;
    adj_matrix3[5] = det_m5;

    adj_matrix3[6] = det_m6;
    adj_matrix3[7] = det_m7;
    adj_matrix3[8] = det_m8;

    //create the matrix of co-factors
    adj_matrix3[0] *= 1;
    adj_matrix3[1] *= -1;
    adj_matrix3[2] *= 1;

    adj_matrix3[3] *= -1;
    adj_matrix3[4] *= 1;
    adj_matrix3[5] *= -1;

    adj_matrix3[6] *= 1;
    adj_matrix3[7] *= -1;
    adj_matrix3[8] *= 1;

    //Divide each of the adjugate matrix by the determinant
    adj_matrix3[0] = (1/determinant()) * adj_matrix3[0];
    adj_matrix3[1] = (1/determinant()) * adj_matrix3[1];
    adj_matrix3[2] = (1/determinant()) * adj_matrix3[2];

    adj_matrix3[3] = (1/determinant()) * adj_matrix3[3];
    adj_matrix3[4] = (1/determinant()) * adj_matrix3[4];
    adj_matrix3[5] = (1/determinant()) * adj_matrix3[5];

    adj_matrix3[6] = (1/determinant()) * adj_matrix3[6];
    adj_matrix3[7] = (1/determinant()) * adj_matrix3[7];
    adj_matrix3[8] = (1/determinant()) * adj_matrix3[8];

    matrix3[0] = adj_matrix3[0];
    matrix3[1] = adj_matrix3[1];
    matrix3[2] = adj_matrix3[2];

    matrix3[3] = adj_matrix3[3];
    matrix3[4] = adj_matrix3[4];
    matrix3[5] = adj_matrix3[5];

    matrix3[6] = adj_matrix3[6];
    matrix3[7] = adj_matrix3[7];
    matrix3[8] = adj_matrix3[8];

    return *this;
}

void Maths3D::Matrix3::to_string() {
    cout << matrix3[0] << "   " << matrix3[1] << "   " << matrix3[2] << "\n"
         << matrix3[3] << "   " << matrix3[4] << "   " << matrix3[5] << "\n"
         << matrix3[6] << "   " << matrix3[7] << "   " << matrix3[8] << "\n" << endl;
}
