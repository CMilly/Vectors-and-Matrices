/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector2.h
 * Date (Started) - 05/13/19
 */

#ifndef VECTORS_AND_MATRICES_VECTOR2_H
#define VECTORS_AND_MATRICES_VECTOR2_H

namespace Maths3D{
    /**
     * Vector2 class
     * - Represents a Vector in 2-Dimensional space
     */
    class Vector2 {
    private:
    public:
        float x;
        float y;

        Vector2();
        Vector2(float _x, float _y);
        Vector2& operator=(const Vector2 &v2);
        Vector2& operator+(const Vector2 &v2);
        Vector2& operator+=(const Vector2 &v2);
        Vector2& operator-(const Vector2 &v2);
        Vector2& operator-=(const Vector2 &v2);
        Vector2& operator *(float k);
        Vector2& operator *=(float k);
        Vector2& operator /(float k);
        Vector2& operator /=(float k);
        float dot_product(const Vector2 &v2);
        float magnitude();
        void normalize();
        void to_string();
    };
}

#endif //VECTORS_AND_MATRICES_VECTOR2_H
