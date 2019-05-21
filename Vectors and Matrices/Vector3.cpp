/**
 * Created by: Cameron Mims
 * Vectors and Matrices - Personal Project
 * File - Vector3.cpp
 * Date (Started) - 05/13/19
 */

#include <iostream>
#include <cmath>
#include "Vector3.h"
using namespace std;

/**
 * Default constructor for Vector3 class
 */
Maths3D::Vector3::Vector3() {
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
}

/**
 * Copy constructor for vector3 class
 * @param v2
 */
Maths3D::Vector3::Vector3(const Maths3D::Vector3 &v2) {
    x = v2.x;
    y = v2.y;
    z = v2.z;
}

/**
 * Constructor for Vector3 class that instantiates x, y, z
 * @param _x
 * @param _y
 * @param _z
 */
Maths3D::Vector3::Vector3(float _x, float _y, float _z) {
    x = _x;
    y = _y;
    z = _z;
}

/**
 * Overloaded operator =
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator=(const Maths3D::Vector3 &v2) {
    x = v2.x;
    y = v2.y;
    z = v2.z;

    return *this;
}

/**
 * Overloaded operator +
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator+(const Maths3D::Vector3 &v2) {
    x = x + v2.x;
    y = y + v2.y;
    z = z + v2.z;

    return *this;
}

/**
 * Overloaded operator +=
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator+=(const Maths3D::Vector3 &v2) {
    x += v2.x;
    y += v2.y;
    z += v2.z;

    return *this;
}

/**
 * Overloaded operator -
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator-(const Maths3D::Vector3 &v2) {
    x = x - v2.x;
    y = y - v2.y;
    z = z - v2.z;

    return *this;
}

/**
 * Overloaded operator -=
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator-=(const Maths3D::Vector3 &v2) {
    x -= v2.x;
    y -= v2.y;
    z -= v2.z;

    return *this;
}

/**
 * Overloaded operator *
 * @param k
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator*(float k) {
    x = x * k;
    y = y * k;
    z = z * k;

    return *this;
}

/**
 * Overloaded operator *=
 * @param k
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator*=(float k) {
    x *= k;
    y *= k;
    z *= k;

    return *this;
}

/**
 * Overloaded operator /
 * @param k
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator/(float k) {
    x = x / k;
    y = y / k;
    z = z / k;

    return *this;
}

/**
 * Overloaded operator /=
 * @param k
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::operator/=(float k) {
    x /= k;
    y /= k;
    z /= k;

    return *this;
}

/**
 * Calculate (and Return) the Dot Product
 * Def: The (scalar) real number given by the sum of the products of their
 * corresponding coordinates
 * @param v2
 * @return float(scalar)
 */
float Maths3D::Vector3::dot_product(const Maths3D::Vector3 &v2) {
    float scalar_product = (x * v2.x) + (y * v2.y) + (z * v2.z);
    return scalar_product;
}

/**
 * Calculate (and Return) the Cross Product
 * Def: The cross product of two vectors is only defined for 3D vectors,
 * it returns a vector that is perpendicular to both a and b
 * @param v2
 * @return Vector3
 */
Maths3D::Vector3 Maths3D::Vector3::cross_product(const Maths3D::Vector3 &v2) {
    return Vector3((y * v2.z - z * v2.y),
                  (z * v2.x - x * v2.z),
                  (x * v2.y - y * v2.x));
}

/**
 * Calculate (and Return) the magnitude of this Vector
 * Def: Magnitude - Size and or Distance of Vector
 * @return float(magnitude)
 */
float Maths3D::Vector3::magnitude() {
    return sqrtf((x * x) + (y * y) + (z * z));
}

/**
 * Normalize this Vector
 * Def: To normalize means to change its length to 1 turning it into a unit vector
 * This helps describes the Vector's direction without regard to the length
 */
void Maths3D::Vector3::normalize() {
    float mag_fraction = 1.0f/magnitude();
    x = x * mag_fraction;
    y = y * mag_fraction;
    z = z * mag_fraction;
}

void Maths3D::Vector3::to_string() {
    cout << "x = " << x <<
    "\n" << "y = " << y <<
    "\n" << "z = " << z << endl;
}


