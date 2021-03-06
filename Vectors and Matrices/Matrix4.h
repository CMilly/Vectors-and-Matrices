/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Matrix4.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_MATRIX4_H
#define VECTORS_AND_MATRICES_MATRIX4_H

#include "Vector4.h"

namespace Maths3D{
    /**
     * Matrix4 class
     * - Represents a Matrix in 4-Dimensional space
     */
    class Matrix4 {
    private:
        float matrix4[16];
    public:
        Matrix4();
        Matrix4(float e0, float e1, float e2, float e3,
                float e4, float e5, float e6, float e7,
                float e8, float e9, float e10, float e11,
                float e12, float e13, float e14, float e15);
        Matrix4& operator=(const Matrix4 &m2);
        Matrix4& operator+(const Matrix4 &m2);
        Matrix4& operator+=(const Matrix4 &m2);
        Matrix4& operator-(const Matrix4 &m2);
        Matrix4& operator-=(const Matrix4 &m2);
        Matrix4 operator*(float k);
        Matrix4 operator*=(float k);
        Matrix4& operator*(const Matrix4 &m2);
        Matrix4& operator*=(const Matrix4 &m2);
        Vector4 operator*(const Vector4 &v);
        Vector4 operator*=(const Vector4 &v);
        void set_as_identity();
        void set_as_rotation90_x_axis();
        void set_as_rotationTheta_x_axis(float theta);
        void set_as_rotation90_y_axis();
        void set_as_rotationTheta_y_axis(float theta);
        void set_as_rotation90_z_axis();
        void set_as_rotationTheta_z_axis(float theta);
        void transpose();
        float determinant();
        Matrix4& inverse();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_MATRIX4_H
