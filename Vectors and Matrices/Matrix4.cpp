/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix4.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <cmath>
#include "Matrix4.h"
#include "Vector4.h"
using namespace std;

/**
 * Default constructor for Matrix2 class
 */
Maths3D::Matrix4::Matrix4() {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
}

/**
 * Constructor for Matrix4 class
 * @param e0
 * @param e1
 * @param e2
 * @param e3
 * @param e4
 * @param e5
 * @param e6
 * @param e7
 * @param e8
 * @param e9
 * @param e10
 * @param e11
 * @param e12
 * @param e13
 * @param e14
 * @param e15
 */
Maths3D::Matrix4::Matrix4(float e0, float e1, float e2, float e3, float e4, float e5, float e6, float e7, float e8,
                          float e9, float e10, float e11, float e12, float e13, float e14, float e15) {
    matrix4[0] = e0;
    matrix4[1] = e1;
    matrix4[2] = e2;
    matrix4[3] = e3;

    matrix4[4] = e4;
    matrix4[5] = e5;
    matrix4[6] = e6;
    matrix4[7] = e7;

    matrix4[8] = e8;
    matrix4[9] = e9;
    matrix4[10] = e10;
    matrix4[11] = e11;

    matrix4[12] = e12;
    matrix4[13] = e13;
    matrix4[14] = e14;
    matrix4[15] = e15;
}

/**
 * Copy constructor
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator=(const Maths3D::Matrix4 &m2) {
    matrix4[0] = m2.matrix4[0];
    matrix4[1] = m2.matrix4[1];
    matrix4[2] = m2.matrix4[2];
    matrix4[3] = m2.matrix4[3];

    matrix4[4] = m2.matrix4[4];
    matrix4[5] = m2.matrix4[5];
    matrix4[6] = m2.matrix4[6];
    matrix4[7] = m2.matrix4[7];

    matrix4[8] = m2.matrix4[8];
    matrix4[9] = m2.matrix4[9];
    matrix4[10] = m2.matrix4[10];
    matrix4[11] = m2.matrix4[11];

    matrix4[12] = m2.matrix4[12];
    matrix4[13] = m2.matrix4[13];
    matrix4[14] = m2.matrix4[14];
    matrix4[15] = m2.matrix4[15];

    return *this;
}

/**
 * Overloaded operator +
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator+(const Maths3D::Matrix4 &m2) {
    matrix4[0] = matrix4[0] + m2.matrix4[0];
    matrix4[1] = matrix4[1] + m2.matrix4[1];
    matrix4[2] = matrix4[2] + m2.matrix4[2];
    matrix4[3] = matrix4[3] + m2.matrix4[3];

    matrix4[4] = matrix4[4] + m2.matrix4[4];
    matrix4[5] = matrix4[5] + m2.matrix4[5];
    matrix4[6] = matrix4[6] + m2.matrix4[6];
    matrix4[7] = matrix4[7] + m2.matrix4[7];

    matrix4[8] = matrix4[8] + m2.matrix4[8];
    matrix4[9] = matrix4[9] + m2.matrix4[9];
    matrix4[10] = matrix4[10] + m2.matrix4[10];
    matrix4[11] = matrix4[11] + m2.matrix4[11];

    matrix4[12] = matrix4[12] + m2.matrix4[12];
    matrix4[13] = matrix4[13] + m2.matrix4[13];
    matrix4[14] = matrix4[14] + m2.matrix4[14];
    matrix4[15] = matrix4[15] + m2.matrix4[15];
}

/**
 * Overloaded operator +=
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator+=(const Maths3D::Matrix4 &m2) {
    matrix4[0] += m2.matrix4[0];
    matrix4[1] += m2.matrix4[1];
    matrix4[2] += m2.matrix4[2];
    matrix4[3] += m2.matrix4[3];

    matrix4[4] += m2.matrix4[4];
    matrix4[5] += m2.matrix4[5];
    matrix4[6] += m2.matrix4[6];
    matrix4[7] += m2.matrix4[7];

    matrix4[8] += m2.matrix4[8];
    matrix4[9] += m2.matrix4[9];
    matrix4[10] += m2.matrix4[10];
    matrix4[11] += m2.matrix4[11];

    matrix4[12] += m2.matrix4[12];
    matrix4[13] += m2.matrix4[13];
    matrix4[14] += m2.matrix4[14];
    matrix4[15] += m2.matrix4[15];
}

/**
 * Overloaded operator -
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator-(const Maths3D::Matrix4 &m2) {
    matrix4[0] = matrix4[0] - m2.matrix4[0];
    matrix4[1] = matrix4[1] - m2.matrix4[1];
    matrix4[2] = matrix4[2] - m2.matrix4[2];
    matrix4[3] = matrix4[3] - m2.matrix4[3];

    matrix4[4] = matrix4[4] - m2.matrix4[4];
    matrix4[5] = matrix4[5] - m2.matrix4[5];
    matrix4[6] = matrix4[6] - m2.matrix4[6];
    matrix4[7] = matrix4[7] - m2.matrix4[7];

    matrix4[8] = matrix4[8] - m2.matrix4[8];
    matrix4[9] = matrix4[9] - m2.matrix4[9];
    matrix4[10] = matrix4[10] - m2.matrix4[10];
    matrix4[11] = matrix4[11] - m2.matrix4[11];

    matrix4[12] = matrix4[12] - m2.matrix4[12];
    matrix4[13] = matrix4[13] - m2.matrix4[13];
    matrix4[14] = matrix4[14] - m2.matrix4[14];
    matrix4[15] = matrix4[15] - m2.matrix4[15];
}

/**
 * Overloaded operator -=
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator-=(const Maths3D::Matrix4 &m2) {
    matrix4[0] -= m2.matrix4[0];
    matrix4[1] -= m2.matrix4[1];
    matrix4[2] -= m2.matrix4[2];
    matrix4[3] -= m2.matrix4[3];

    matrix4[4] -= m2.matrix4[4];
    matrix4[5] -= m2.matrix4[5];
    matrix4[6] -= m2.matrix4[6];
    matrix4[7] -= m2.matrix4[7];

    matrix4[8] -= m2.matrix4[8];
    matrix4[9] -= m2.matrix4[9];
    matrix4[10] -= m2.matrix4[10];
    matrix4[11] -= m2.matrix4[11];

    matrix4[12] -= m2.matrix4[12];
    matrix4[13] -= m2.matrix4[13];
    matrix4[14] -= m2.matrix4[14];
    matrix4[15] -= m2.matrix4[15];
}

/**
 * Overloaded operator * (SCALAR)
 * @param k
 * @return Matrix4
 */
Maths3D::Matrix4 Maths3D::Matrix4::operator*(float k) {
    matrix4[0] = matrix4[0] * k;
    matrix4[1] = matrix4[1] * k;
    matrix4[2] = matrix4[2] * k;
    matrix4[3] = matrix4[3] * k;

    matrix4[4] = matrix4[4] * k;
    matrix4[5] = matrix4[5] * k;
    matrix4[6] = matrix4[6] * k;
    matrix4[7] = matrix4[7] * k;

    matrix4[8] = matrix4[8] * k;
    matrix4[9] = matrix4[9] * k;
    matrix4[10] = matrix4[10] * k;
    matrix4[11] = matrix4[11] * k;

    matrix4[12] = matrix4[12] * k;
    matrix4[13] = matrix4[13] * k;
    matrix4[14] = matrix4[14] * k;
    matrix4[15] = matrix4[15] * k;
}

/**
 * Overloaded operator *= (SCALAR)
 * @param k
 * @return Matrix4
 */
Maths3D::Matrix4 Maths3D::Matrix4::operator*=(float k) {
    matrix4[0] *= k;
    matrix4[1] *= k;
    matrix4[2] *= k;
    matrix4[3] *= k;

    matrix4[4] *= k;
    matrix4[5] *= k;
    matrix4[6] *= k;
    matrix4[7] *= k;

    matrix4[8] *= k;
    matrix4[9] *= k;
    matrix4[10] *= k;
    matrix4[11] *= k;

    matrix4[12] *= k;
    matrix4[13] *= k;
    matrix4[14] *= k;
    matrix4[15] *= k;
}

/**
 * Overloaded operator *
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator*(const Maths3D::Matrix4 &m2) {
    matrix4[0] = (matrix4[0] * m2.matrix4[0]) + (matrix4[0] * m2.matrix4[4]) + (matrix4[0] * m2.matrix4[8]) + (matrix4[0] * m2.matrix4[12]);
    matrix4[1] = (matrix4[1] * m2.matrix4[0]) + (matrix4[1] * m2.matrix4[4]) + (matrix4[1] * m2.matrix4[8]) + (matrix4[1] * m2.matrix4[12]);
    matrix4[2] = (matrix4[2] * m2.matrix4[0]) + (matrix4[2] * m2.matrix4[4]) + (matrix4[2] * m2.matrix4[8]) + (matrix4[2] * m2.matrix4[12]);
    matrix4[3] = (matrix4[3] * m2.matrix4[0]) + (matrix4[3] * m2.matrix4[4]) + (matrix4[3] * m2.matrix4[8]) + (matrix4[3] * m2.matrix4[12]);

    matrix4[4] = (matrix4[4] * m2.matrix4[1]) + (matrix4[4] * m2.matrix4[5]) + (matrix4[4] * m2.matrix4[9]) + (matrix4[4] * m2.matrix4[13]);
    matrix4[5] = (matrix4[5] * m2.matrix4[1]) + (matrix4[5] * m2.matrix4[5]) + (matrix4[5] * m2.matrix4[9]) + (matrix4[5] * m2.matrix4[13]);
    matrix4[6] = (matrix4[6] * m2.matrix4[1]) + (matrix4[6] * m2.matrix4[5]) + (matrix4[6] * m2.matrix4[9]) + (matrix4[6] * m2.matrix4[13]);
    matrix4[7] = (matrix4[7] * m2.matrix4[1]) + (matrix4[7] * m2.matrix4[5]) + (matrix4[7] * m2.matrix4[9]) + (matrix4[7] * m2.matrix4[13]);

    matrix4[8] = (matrix4[8] * m2.matrix4[2]) + (matrix4[8] * m2.matrix4[6]) + (matrix4[8] * m2.matrix4[10]) + (matrix4[8] * m2.matrix4[14]);
    matrix4[9] = (matrix4[9] * m2.matrix4[2]) + (matrix4[9] * m2.matrix4[6]) + (matrix4[9] * m2.matrix4[10]) + (matrix4[9] * m2.matrix4[14]);
    matrix4[10] = (matrix4[10] * m2.matrix4[2]) + (matrix4[10] * m2.matrix4[6]) + (matrix4[10] * m2.matrix4[10]) + (matrix4[10] * m2.matrix4[14]);
    matrix4[11] = (matrix4[11] * m2.matrix4[2]) + (matrix4[11] * m2.matrix4[6]) + (matrix4[11] * m2.matrix4[10]) + (matrix4[11] * m2.matrix4[14]);

    matrix4[12] = (matrix4[12] * m2.matrix4[3]) + (matrix4[12] * m2.matrix4[7]) + (matrix4[12] * m2.matrix4[11]) + (matrix4[12] * m2.matrix4[15]);
    matrix4[13] = (matrix4[13] * m2.matrix4[3]) + (matrix4[13] * m2.matrix4[7]) + (matrix4[13] * m2.matrix4[11]) + (matrix4[13] * m2.matrix4[15]);
    matrix4[14] = (matrix4[14] * m2.matrix4[3]) + (matrix4[14] * m2.matrix4[7]) + (matrix4[14] * m2.matrix4[11]) + (matrix4[14] * m2.matrix4[15]);
    matrix4[15] = (matrix4[15] * m2.matrix4[3]) + (matrix4[15] * m2.matrix4[7]) + (matrix4[15] * m2.matrix4[11]) + (matrix4[15] * m2.matrix4[15]);

    return *this;
}

/**
 * Overloaded operator *=
 * @param m2
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::operator*=(const Maths3D::Matrix4 &m2) {
    matrix4[0] = (matrix4[0] * m2.matrix4[0]) + (matrix4[0] * m2.matrix4[4]) + (matrix4[0] * m2.matrix4[8]) + (matrix4[0] * m2.matrix4[12]);
    matrix4[1] = (matrix4[1] * m2.matrix4[0]) + (matrix4[1] * m2.matrix4[4]) + (matrix4[1] * m2.matrix4[8]) + (matrix4[1] * m2.matrix4[12]);
    matrix4[2] = (matrix4[2] * m2.matrix4[0]) + (matrix4[2] * m2.matrix4[4]) + (matrix4[2] * m2.matrix4[8]) + (matrix4[2] * m2.matrix4[12]);
    matrix4[3] = (matrix4[3] * m2.matrix4[0]) + (matrix4[3] * m2.matrix4[4]) + (matrix4[3] * m2.matrix4[8]) + (matrix4[3] * m2.matrix4[12]);

    matrix4[4] = (matrix4[4] * m2.matrix4[1]) + (matrix4[4] * m2.matrix4[5]) + (matrix4[4] * m2.matrix4[9]) + (matrix4[4] * m2.matrix4[13]);
    matrix4[5] = (matrix4[5] * m2.matrix4[1]) + (matrix4[5] * m2.matrix4[5]) + (matrix4[5] * m2.matrix4[9]) + (matrix4[5] * m2.matrix4[13]);
    matrix4[6] = (matrix4[6] * m2.matrix4[1]) + (matrix4[6] * m2.matrix4[5]) + (matrix4[6] * m2.matrix4[9]) + (matrix4[6] * m2.matrix4[13]);
    matrix4[7] = (matrix4[7] * m2.matrix4[1]) + (matrix4[7] * m2.matrix4[5]) + (matrix4[7] * m2.matrix4[9]) + (matrix4[7] * m2.matrix4[13]);

    matrix4[8] = (matrix4[8] * m2.matrix4[2]) + (matrix4[8] * m2.matrix4[6]) + (matrix4[8] * m2.matrix4[10]) + (matrix4[8] * m2.matrix4[14]);
    matrix4[9] = (matrix4[9] * m2.matrix4[2]) + (matrix4[9] * m2.matrix4[6]) + (matrix4[9] * m2.matrix4[10]) + (matrix4[9] * m2.matrix4[14]);
    matrix4[10] = (matrix4[10] * m2.matrix4[2]) + (matrix4[10] * m2.matrix4[6]) + (matrix4[10] * m2.matrix4[10]) + (matrix4[10] * m2.matrix4[14]);
    matrix4[11] = (matrix4[11] * m2.matrix4[2]) + (matrix4[11] * m2.matrix4[6]) + (matrix4[11] * m2.matrix4[10]) + (matrix4[11] * m2.matrix4[14]);

    matrix4[12] = (matrix4[12] * m2.matrix4[3]) + (matrix4[12] * m2.matrix4[7]) + (matrix4[12] * m2.matrix4[11]) + (matrix4[12] * m2.matrix4[15]);
    matrix4[13] = (matrix4[13] * m2.matrix4[3]) + (matrix4[13] * m2.matrix4[7]) + (matrix4[13] * m2.matrix4[11]) + (matrix4[13] * m2.matrix4[15]);
    matrix4[14] = (matrix4[14] * m2.matrix4[3]) + (matrix4[14] * m2.matrix4[7]) + (matrix4[14] * m2.matrix4[11]) + (matrix4[14] * m2.matrix4[15]);
    matrix4[15] = (matrix4[15] * m2.matrix4[3]) + (matrix4[15] * m2.matrix4[7]) + (matrix4[15] * m2.matrix4[11]) + (matrix4[15] * m2.matrix4[15]);

    return *this;
}

/**
 * Vector transformation for 4-Dimensional space
 * @param v
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Matrix4::operator*(const Maths3D::Vector4 &v) {
    Maths3D::Vector4 temp_vec4;

    temp_vec4.x = (matrix4[0] * v.x) + (matrix4[1] * v.y) + (matrix4[2] * v.z) + (matrix4[3] * v.w);
    temp_vec4.y = (matrix4[4] * v.x) + (matrix4[5] * v.y) + (matrix4[6] * v.z) + (matrix4[7] * v.w);
    temp_vec4.z = (matrix4[8] * v.x) + (matrix4[9] * v.y) + (matrix4[10] * v.z) + (matrix4[11] * v.w);
    temp_vec4.w = (matrix4[12] * v.x) + (matrix4[13] * v.y) + (matrix4[14] * v.z) + (matrix4[15] * v.w);

    return temp_vec4;
}

/**
 * Vector transformation for 4-Dimensional space
 * @param v
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Matrix4::operator*=(const Maths3D::Vector4 &v) {
    Maths3D::Vector4 temp_vec4;

    temp_vec4.x = (matrix4[0] * v.x) + (matrix4[1] * v.y) + (matrix4[2] * v.z) + (matrix4[3] * v.w);
    temp_vec4.y = (matrix4[4] * v.x) + (matrix4[5] * v.y) + (matrix4[6] * v.z) + (matrix4[7] * v.w);
    temp_vec4.z = (matrix4[8] * v.x) + (matrix4[9] * v.y) + (matrix4[10] * v.z) + (matrix4[11] * v.w);
    temp_vec4.w = (matrix4[12] * v.x) + (matrix4[13] * v.y) + (matrix4[14] * v.z) + (matrix4[15] * v.w);

    return temp_vec4;
}

/**
 * Sets this Matrix as an identity matrix
 * Def: A matrix in which all the elements of the principal diagonals are ones and all others are zeroes
 * Effect: Multiplying a given matrix by an identity matrix is to leave the given unchanged
 */
void Maths3D::Matrix4::set_as_identity() {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = 1.0f;
    matrix4[5] = 1.0f;
    matrix4[10] = 1.0f;
    matrix4[15] = 1.0;
}

/**
 * Set this Matrix as a rotation matrix about the x-axis
 * - This will rotate a 4-Dimensional vector space about the x-axis
 */
void Maths3D::Matrix4::set_as_rotation90_x_axis() {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = 1.0f;
    matrix4[5] = roundf(cos(90.0f));
    matrix4[6] = roundf(-sin(90.0f));
    matrix4[9] = roundf(sin(90.0f));
    matrix4[10] = roundf(cos(90.0f));
    matrix4[15] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the x-axis on theta
 * - This will rotate a 4-Dimensional vector space about the x-axis on theta
 * @param theta
 */
void Maths3D::Matrix4::set_as_rotationTheta_x_axis(float theta) {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = 1.0f;
    matrix4[5] = roundf(cos(theta));
    matrix4[6] = roundf(-sin(theta));
    matrix4[9] = roundf(sin(theta));
    matrix4[10] = roundf(cos(theta));
    matrix4[15] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the y-axis
 * - This will rotate a 4-Dimensional vector space about the y-axis
 */
void Maths3D::Matrix4::set_as_rotation90_y_axis() {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = roundf(cos(90.0f));
    matrix4[2] = roundf(sin(90.0f));
    matrix4[5] = 1.0f;
    matrix4[8] = roundf(-sin(90.0f));
    matrix4[10] = roundf(cos(90.0f));
    matrix4[15] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the y-axis on theta
 * - This will rotate a 4-Dimensional vector space about the y-axis on theta
 * @param theta
 */
void Maths3D::Matrix4::set_as_rotationTheta_y_axis(float theta) {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = roundf(cos(theta));
    matrix4[2] = roundf(sin(theta));
    matrix4[5] = 1.0f;
    matrix4[8] = roundf(-sin(theta));
    matrix4[10] = roundf(cos(theta));
    matrix4[15] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the z-axis
 * - This will rotate a 4-Dimensional vector space about the z-axis
 */
void Maths3D::Matrix4::set_as_rotation90_z_axis() {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = roundf(cos(90.0f));
    matrix4[1] = roundf(-sin(90.0f));
    matrix4[4] = roundf(sin(90.0f));
    matrix4[5] = roundf(cos(90.0f));
    matrix4[10] = 1.0f;
    matrix4[15] = 1.0f;
}

/**
 * Set this Matrix as a rotation matrix about the z-axis on theta
 * - This will rotate a 4-Dimensional vector space about the z-axis on theta
 * @param theta
 */
void Maths3D::Matrix4::set_as_rotationTheta_z_axis(float theta) {
    for(int i = 0; i < 16; i++){
        matrix4[i] = 0.0f;
    }
    matrix4[0] = roundf(cos(theta));
    matrix4[1] = roundf(-sin(theta));
    matrix4[4] = roundf(sin(theta));
    matrix4[5] = roundf(cos(theta));
    matrix4[10] = 1.0f;
    matrix4[15] = 1.0f;
}

/**
 * Transposes this Matrix
 * Def: To transpose a matrix is to "flip" a matrix over its diagonal in turn producing another matrix
 * where the rows and column indices are switched A(T)
 * Effect: Apart of Inverse operation
 */
void Maths3D::Matrix4::transpose() {
    float temp_matrix4[16];

    temp_matrix4[0] = matrix4[0];
    temp_matrix4[1] = matrix4[4];
    temp_matrix4[2] = matrix4[8];
    temp_matrix4[3] = matrix4[12];

    temp_matrix4[4] = matrix4[1];
    temp_matrix4[5] = matrix4[5];
    temp_matrix4[6] = matrix4[9];
    temp_matrix4[7] = matrix4[13];

    temp_matrix4[8] = matrix4[2];
    temp_matrix4[9] = matrix4[6];
    temp_matrix4[10] = matrix4[10];
    temp_matrix4[11] = matrix4[14];

    temp_matrix4[12] = matrix4[3];
    temp_matrix4[13] = matrix4[7];
    temp_matrix4[14] = matrix4[11];
    temp_matrix4[15] = matrix4[15];

    for(int i = 0; i < 16; i++){
        matrix4[i] = temp_matrix4[i];
    }
}

/**
 * Calculates the determinant of this Matrix
 * Def: The determinant is used to indicate whether the matrix has an inverse or not
 * If zero, then no inverse exists, if non-zero, then a determinant exists
 * Effect: The determinant will allow us to figure out if the given matrix has an inverse
 * @return float
 */
float Maths3D::Matrix4::determinant() {
    //do stuff
}

/**
 * Returns the inverse of this Matrix if able
 * Def: Process of finding matrix B that satisfies the prior equation for a given invertible matrix A
 * Effect: Inverse
 * @return Matrix4
 */
Maths3D::Matrix4& Maths3D::Matrix4::inverse() {
    //do stuff
}

void Maths3D::Matrix4::to_string() {
    cout << matrix4[0] << "   " << matrix4[1] << "   " << matrix4[2] << "   " << matrix4[3] << "\n"
         << matrix4[4] << "   " << matrix4[5] << "   " << matrix4[6] << "   " << matrix4[7] << "\n"
         << matrix4[8] << "   " << matrix4[9] << "   " << matrix4[10] << "   " << matrix4[11] << "\n"
         << matrix4[12] << "   " << matrix4[13] << "   " << matrix4[14] << "   " << matrix4[15] << "\n" << endl;
}