//
// Created by cameron on 5/20/2019.
//

#ifndef VECTORS_AND_MATRICES_MATRIX4_H
#define VECTORS_AND_MATRICES_MATRIX4_H

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
        void set_as_identity();
        void transpose();
        float determinant();
        Matrix4& inverse();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_MATRIX4_H
