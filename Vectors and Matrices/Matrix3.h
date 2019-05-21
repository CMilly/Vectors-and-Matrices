/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix3.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_MATRIX3_H
#define VECTORS_AND_MATRICES_MATRIX3_H

namespace Maths3D{
    /**
     * Matrix3 class
     * - Represents a Matrix in 3-Dimensional space
     */
    class Matrix3{
    private:
        float matrix3[9];
    public:
        Matrix3();
        Matrix3(float e0, float e1, float e2,
                float e3, float e4, float e5,
                float e6, float e7, float e8);
        Matrix3& operator=(const Matrix3 &m2);
        Matrix3& operator+(const Matrix3 &m2);
        Matrix3& operator+=(const Matrix3 &m2);
        Matrix3& operator-(const Matrix3 &m2);
        Matrix3& operator-=(const Matrix3 &m2);
        Matrix3 operator*(float k);
        Matrix3 operator*=(float k);
        Matrix3& operator*(const Matrix3 &m2);
        Matrix3& operator*=(const Matrix3 &m2);
        void set_as_identity();
        void transpose();
        float determinant();
        Matrix3& inverse();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_MATRIX3_H
