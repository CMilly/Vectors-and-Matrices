/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix3.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <cmath>
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
 * Vector transformation for 3-Dimensional space
 * @param v
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Matrix3::operator*(const Maths3D::Vector3 &v) {
    Maths3D::Vector3 temp_vec3;

    temp_vec3.x = (matrix3[0] * v.x) + (matrix3[1] * v.y) + (matrix3[2] * v.z);
    temp_vec3.y = (matrix3[3] * v.x) + (matrix3[4] * v.y) + (matrix3[5] * v.z);
    temp_vec3.z = (matrix3[6] * v.x) + (matrix3[7] * v.y) + (matrix3[8] * v.z);

    return temp_vec3;
}

/**
 * Vector transformation for 3-Dimensional space
 * @param v
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Matrix3::operator*=(const Maths3D::Vector3 &v) {
    Maths3D::Vector3 temp_vec3;

    temp_vec3.x = (matrix3[0] * v.x) + (matrix3[1] * v.y) + (matrix3[2] * v.z);
    temp_vec3.y = (matrix3[3] * v.x) + (matrix3[4] * v.y) + (matrix3[5] * v.z);
    temp_vec3.z = (matrix3[6] * v.x) + (matrix3[7] * v.y) + (matrix3[8] * v.z);

    return temp_vec3;
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
 * Set this Matrix as a rotation matrix about the x-axis
 * - This will rotate a 3-Dimensional vector space about the x-axis
 */
void Maths3D::Matrix3::set_as_rotation90_x_axis() {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = 1.0f;
    matrix3[4] = roundf(cos(90.0f));
    matrix3[5] = roundf(-sin(90.0f));
    matrix3[7] = roundf(sin(90.0f));
    matrix3[8] = roundf(cos(90.0f));
}

/**
 * Set this Matrix as a rotation matrix about the x-axis on theta
 * - This will rotate a 3-Dimensional vector space about the x-axis on theta
 * @param theta
 */
void Maths3D::Matrix3::set_as_rotationTheta_x_axis(float theta) {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = 1.0f;
    matrix3[4] = roundf(cos(theta));
    matrix3[5] = roundf(-sin(theta));
    matrix3[7] = roundf(sin(theta));
    matrix3[8] = roundf(cos(theta));
}

/**
 * Set this Matrix as a rotation matrix about the y-axis
 * - This will rotate a 3-Dimensional vector space about the y-axis
 */
void Maths3D::Matrix3::set_as_rotation90_y_axis() {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = roundf(cos(90.0f));
    matrix3[2] = roundf(sin(90.0f));
    matrix3[4] = 1.0f;
    matrix3[6] = roundf(-sin(90.0f));
    matrix3[8] = roundf(cos(90.0f));
}

/**
 * Set this Matrix as a rotation matrix about the y-axis on theta
 * - This will rotate a 3-Dimensional vector space about the y-axis on theta
 * @param theta
 */
void Maths3D::Matrix3::set_as_rotationTheta_y_axis(float theta) {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = roundf(cos(theta));
    matrix3[2] = roundf(sin(theta));
    matrix3[4] = 1.0f;
    matrix3[6] = roundf(-sin(theta));
    matrix3[8] = roundf(cos(theta));
}

/**
 * Set this Matrix as a rotation matrix about the z-axis
 * - This will rotate a 3-Dimensional vector space about the z-axis
 */
void Maths3D::Matrix3::set_as_rotation90_z_axis() {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = roundf(cos(90.0f));
    matrix3[1] = roundf(-sin(90.0f));
    matrix3[3] = roundf(sin(90.0f));
    matrix3[4] = roundf(cos(90.0f));
    matrix3[8] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the z-axis on theta
 * - This will rotate a 3-Dimensional vector space about the z-axis on theta
 * @param theta
 */
void Maths3D::Matrix3::set_as_rotationTheta_z_axis(float theta) {
    for(int i = 0; i < 9; i++){
        matrix3[i] = 0.0f;
    }
    matrix3[0] = roundf(cos(theta));
    matrix3[1] = roundf(-sin(theta));
    matrix3[3] = roundf(sin(theta));
    matrix3[4] = roundf(cos(theta));
    matrix3[8] = 1.0f;
}
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
