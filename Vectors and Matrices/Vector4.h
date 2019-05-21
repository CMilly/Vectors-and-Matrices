//
// Created by cameron on 5/19/2019.
//

#ifndef VECTORS_AND_MATRICES_VECTOR4_H
#define VECTORS_AND_MATRICES_VECTOR4_H

namespace Maths3D{
    /**
     * Vector4 class
     * - Represents a Vector in 4-Dimensional space
     */
    class Vector4 {
    private:
        Vector4 operator=(const Vector4 &v2);
        Vector4 operator+(const Vector4 &v2);
        Vector4 operator+=(const Vector4 &v2);
        Vector4 operator-(const Vector4 &v2);
        Vector4 operator-=(const Vector4 &v2);
        Vector4 operator *(float k);
        Vector4 operator *=(float k);
        Vector4 operator /(float k);
        Vector4 operator /=(float k);
    public:
        float x;
        float y;
        float z;
        float w;

        Vector4();
        Vector4(float _x, float _y, float _z, float _w);
        Vector4(const Vector4 &v2);
        float dot_product(const Vector4 &v2);
        Vector4 cross_product(const Vector4 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_VECTOR4_H
