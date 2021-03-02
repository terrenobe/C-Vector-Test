#include <iostream>
#include "vector.h"
using namespace std;

Vector::Vector(int l) {
    length = l;
    values = new double[length];
    for(int i = 0; i < length; i++) {
      values[i] = 10+i;
    }
  }

Vector::Vector(double* v, int l) {
    length = l;
    values = new double[length];
    for(int i = 0; i < length; i++) {
      values[i] = v[i];
    }
  }
  
Vector::Vector(const Vector & other) {
    length = other.length;
    values = new double[length];
    for(int i = 0; i < length; i++) {
      values[i] = other.values[i];
    }
  }

void Vector::operator=(const Vector & other) {
    length = other.length;
    delete [] values;
    values = new double[length];
    for(int i = 0; i < length; i++) {
      values[i] = other.values[i];
    }
  }

Vector Vector::operator+(const Vector& other) {
    Vector temp(length);
    for(int i = 0; i < length; i++) {
      temp.values[i] = values[i] + other.values[i];
    }
    return temp;
  }
  
Vector::~Vector() {
    delete [] values; 
  }

int Vector::getLength() {
    return length;
  }

void Vector::setValue(int position, double val) {
    values[position] = val;
  }

double Vector::at(int position) {
    return values[position]; // *(values + position)
  }
  
