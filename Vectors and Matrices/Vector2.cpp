/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector2.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <cmath>
#include "Vector2.h"
using namespace std;

/**
 * Default constructor for Vector2 class
 */
Maths3D::Vector2::Vector2() {
    x = 0.0f;
    y = 0.0f;
}

/**
 * Copy constructor for vector2 class
 * @param _x
 * @param _y
 */
Maths3D::Vector2::Vector2(float _x, float _y) {
    x = _x;
    y = _y;
}

/**
 * Overloaded operator =
 * @param v2
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator=(const Maths3D::Vector2 &v2) {
    x = v2.x;
    y = v2.y;

    return *this;
}

/**
 * Overloaded operator +
 * @param v2
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator+(const Maths3D::Vector2 &v2) {
    x = x + v2.x;
    y = y + v2.y;

    return *this;
}

/**
 * Overloaded operator +=
 * @param v2
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator+=(const Maths3D::Vector2 &v2) {
    x += v2.x;
    y += v2.y;
    return *this;
}

/**
 * Overloaded operator -
 * @param v2
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator-(const Maths3D::Vector2 &v2) {
    x = x - v2.x;
    y = y - v2.y;

    return *this;
}

/**
 * Overloaded operator -=
 * @param v2
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator-=(const Maths3D::Vector2 &v2) {
    x -= v2.x;
    y -= v2.y;

    return *this;
}

/**
 * Overloaded operator *
 * @param k
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator*(float k) {
    x = x * k;
    y = y * k;

    return *this;
}

/**
 * Overloaded operator *=
 * @param k
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator*=(float k) {
    x *= k;
    y *= k;

    return *this;
}

/**
 * Overloaded operator /
 * @param k
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator/(float k) {
    x = x / k;
    y = y / k;

    return *this;
}

/**
 * Overloaded operator /=
 * @param k
 * @return Vector2
 */
Maths3D::Vector2& Maths3D::Vector2::operator/=(float k) {
    x /= k;
    y /= k;

    return *this;
}

/**
 * Calculate (and Return) the Dot Product
 * Def: The (scalar) real number given by the sum of the products of their
 * corresponding coordinates
 * @param v2
 * @return float(scalar)
 */
float Maths3D::Vector2::dot_product(const Maths3D::Vector2 &v2) {
    float scalar_product;
    scalar_product = (x * v2.x) + (y * v2.y);
    return scalar_product;
}

/**
 * You cannot cross product a Vector in 2-D space
 */

/**
 * Calculate (and Return) the magnitude of this Vector
 * Def: Magnitude - Size and or Distance of Vector
 * @return float(magnitude)
 */
float Maths3D::Vector2::magnitude() {
    return sqrtf((x * x) + (y * y));
}

/**
 * Normalize this Vector
 * Def: To normalize means to change its length to 1 turning it into a unit vector
 * This helps describes the Vector's direction without regard to the length
 */
void Maths3D::Vector2::normalize() {
    float mag_fraction = 1.0f/magnitude();
    x = x * mag_fraction;
    y = y * mag_fraction;
}

void Maths3D::Vector2::to_string() {
    cout << "x = " << x << "\n"
         << "y = " << y << "\n" << endl;
}

