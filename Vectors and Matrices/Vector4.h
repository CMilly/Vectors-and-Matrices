/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector4.h
 * Date (Started) - 05/13/19
 */


#ifndef VECTORS_AND_MATRICES_VECTOR4_H
#define VECTORS_AND_MATRICES_VECTOR4_H

namespace Maths3D{
    /**
     * Vector4 class
     * - Represents a Vector in 4-Dimensional space
     */
    class Vector4 {
    private:
    public:
        float x;
        float y;
        float z;
        float w;
        Vector4();
        Vector4(float _x, float _y, float _z, float _w);
        Vector4(const Vector4 &v2);
        Vector4 operator=(const Vector4 &v2);
        Vector4 operator+(const Vector4 &v2);
        Vector4 operator+=(const Vector4 &v2);
        Vector4 operator-(const Vector4 &v2);
        Vector4 operator-=(const Vector4 &v2);
        Vector4 operator *(float k);
        Vector4 operator *=(float k);
        Vector4 operator /(float k);
        Vector4 operator /=(float k);
        float dot_product(const Vector4 &v2);
        Vector4 cross_product(const Vector4 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_VECTOR4_H
