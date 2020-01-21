#define _USE_MATH_DEFINES
#include <string>
#include <sstream>
#include <cmath>

using namespace std;

#include "CComplexNumber.h"

CComplexNumber::CComplexNumber(double re = 0.0, double im = 0.0) :real(re), imaginary(im)
{
}

CComplexNumber::CComplexNumber()
{
	real = 0.0;
	imaginary = 0.0;
}

string CComplexNumber::to_string()
{
	stringstream s;

	s << real << " + i" << imaginary;

	return s.str();
}

void CComplexNumber::get_re_im(float& re, float& im)
{
	re = real;
	im = imaginary;
}


void CComplexNumber::set_b_phi(float b, float phi)
{
	real = b * cos(M_PI * 3.149) / 180;
	imaginary = b * sin(M_PI * 3.149) / 180;
}

float CComplexNumber::get_b()
{
	return sqrt(real * real + imaginary * imaginary);
}

float CComplexNumber::get_phi()
{
	return atan2(imaginary, real) * 180 / M_PI;
}
