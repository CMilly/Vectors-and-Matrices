/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix2.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_MATRIX2_H
#define VECTORS_AND_MATRICES_MATRIX2_H

namespace Maths3D{
    /**
     * Matrix2 class
     * - Represents a Matrix in 2-Dimensional space
     */
    class Matrix2 {
    private:
        float matrix2[4];
    public:
        Matrix2();
        Matrix2(float e0, float e1,
                float e2, float e3);
        Matrix2& operator=(const Matrix2 &m2);
        Matrix2& operator+(const Matrix2 &m2);
        Matrix2& operator+=(const Matrix2 &m2);
        Matrix2& operator-(const Matrix2 &m2);
        Matrix2& operator-=(const Matrix2 &m2);
        Matrix2 operator*(float k);
        Matrix2 operator*=(float k);
        Matrix2& operator*(const Matrix2 &m2);
        Matrix2& operator*=(const Matrix2 &m2);
        void set_as_identity();
        void transpose();
        float determinant();
        Matrix2& inverse();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_MATRIX2_H
