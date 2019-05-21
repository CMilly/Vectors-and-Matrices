/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix2.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_MATRIX2_H
#define VECTORS_AND_MATRICES_MATRIX2_H

#include "Vector2.h"
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
        Vector2 operator*(const Vector2 &v);
        Vector2 operator*=(const Vector2 &v);
        void set_as_identity();
        void set_as_rotation90_counter_clockwise();
        void set_as_rotationTheta_counter_clockwise(float theta);
        void set_as_rotation90_clockwise();
        void set_as_rotationTheta_clockwise(float theta);
        void transpose();
        float determinant();
        Matrix2& inverse();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_MATRIX2_H
