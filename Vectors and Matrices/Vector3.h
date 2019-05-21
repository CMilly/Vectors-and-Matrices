/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector3.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_VECTOR3_H
#define VECTORS_AND_MATRICES_VECTOR3_H

namespace Maths3D{
    /**
     * Vector3 class
     * - Represents a Vector in 3-Dimensional space
     */
    class Vector3{
    private:
    public:
        float x;
        float y;
        float z;

        Vector3();
        Vector3(float _x, float _y, float _z);
        Vector3(const Vector3 &v2);
        Vector3 operator=(const Vector3 &v2);
        Vector3 operator+(const Vector3 &v2);
        Vector3 operator+=(const Vector3 &v2);
        Vector3 operator-(const Vector3 &v2);
        Vector3 operator-=(const Vector3 &v2);
        Vector3 operator *(float k);
        Vector3 operator *=(float k);
        Vector3 operator /(float k);
        Vector3 operator /=(float k);
        float dot_product(const Vector3 &v2);
        Vector3 cross_product(const Vector3 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_VECTOR3_H
