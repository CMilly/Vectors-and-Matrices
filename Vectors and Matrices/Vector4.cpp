/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector4.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <cmath>
#include "Vector4.h"
using namespace std;

/**
 * Default constructor for Vector4 class
 */
Maths3D::Vector4::Vector4() {
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    w = 0.0f;
}

/**
 * Copy constructor for vector4 class
 * @param v2
 */
Maths3D::Vector4::Vector4(const Maths3D::Vector4 &v2) {
    x = v2.x;
    y = v2.y;
    z = v2.z;
    w = v2.w;
}

/**
 * Constructor for Vector4 class that instantiates x, y, z
 * @param _x
 * @param _y
 * @param _z
 */
Maths3D::Vector4::Vector4(float _x, float _y, float _z, float _w) {
    x = _x;
    y = _y;
    z = _z;
    w = _w;
}

/**
 * Overloaded operator =
 * @param v2
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator=(const Maths3D::Vector4 &v2) {
    x = v2.x;
    y = v2.y;
    z = v2.z;
    w = v2.w;

    return *this;
}

/**
 * Overloaded operator +
 * @param v2
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator+(const Maths3D::Vector4 &v2) {
    x = x + v2.x;
    y = y + v2.y;
    z = z + v2.z;
    w = w + v2.w;

    return *this;
}

/**
 * Overloaded operator +=
 * @param v2
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator+=(const Maths3D::Vector4 &v2) {
    x += v2.x;
    y += v2.y;
    z += v2.z;
    w += v2.w;

    return *this;
}

/**
 * Overloaded operator -
 * @param v2
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator-(const Maths3D::Vector4 &v2) {
    x = x - v2.x;
    y = y - v2.y;
    z = z - v2.z;
    w = w - v2.w;

    return *this;
}

/**
 * Overloaded operator -=
 * @param v2
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator-=(const Maths3D::Vector4 &v2) {
    x -= v2.x;
    y -= v2.y;
    z -= v2.z;
    w -= v2.w;

    return *this;
}

/**
 * Overloaded operator *
 * @param k
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator*(float k) {
    x = x * k;
    y = y * k;
    z = z * k;
    w = w * k;

    return *this;
}

/**
 * Overloaded operator *=
 * @param k
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator*=(float k) {
    x *= k;
    y *= k;
    z *= k;
    w *= k;

    return *this;
}

/**
 * Overloaded operator /
 * @param k
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator/(float k) {
    x = x / k;
    y = y / k;
    z = z / k;
    w = w / k;

    return *this;
}

/**
 * Overloaded operator /=
 * @param k
 * @return Vector4
 */
Maths3D::Vector4 Maths3D::Vector4::operator/=(float k) {
    x /= k;
    y /= k;
    z /= k;
    w /= k;

    return *this;
}

/**
 * Calculate (and Return) the Dot Product
 * Def: The (scalar) real number given by the sum of the products of their
 * corresponding coordinates
 * @param v2
 * @return float(scalar)
 */
float Maths3D::Vector4::dot_product(const Maths3D::Vector4 &v2) {
    float scalar_product = (x * v2.x) + (y * v2.y) + (z * v2.z) + (w * v2.w);
    return scalar_product;
}

/**
 * A cross product does not exist in 4-Dimensional space
 */

/**
 * Calculate (and Return) the magnitude of this Vector
 * Def: Magnitude - Size and or Distance of Vector
 * @return float(magnitude)
 */
float Maths3D::Vector4::magnitude() {
    return sqrtf((x * x) + (y * y) + (z * z) + (w * w));
}

/**
 * Normalize this Vector
 * Def: To normalize means to change its length to 1 turning it into a unit vector
 * This helps describes the Vector's direction without regard to the length
 */
void Maths3D::Vector4::normalize() {
    float mag_fraction = 1.0f/magnitude();
    x = x * mag_fraction;
    y = y * mag_fraction;
    z = z * mag_fraction;
    w = w * mag_fraction;
}

void Maths3D::Vector4::to_string() {
    cout << "x = " << x <<
    "\n" << "y = " << y <<
    "\n" << "z = " << z <<
    "\n" << "w = " << w << endl;
}
