#pragma once

class CComplexNumber
{
private:
	double real, imaginary;

public:
	CComplexNumber(double, double);
	CComplexNumber();

	string to_string();

	void get_re_im(float & re, float & im);

	void set_b_phi(float, float);

	float get_b();

	float get_phi();

	void set_real(double real)
	{
		this->real = real;
	}

	void set_imaginary(double imaginary)
	{
		this->imaginary = imaginary;
	}

	double get_real()
	{
		return this->real;
	}

	double get_imaginary()
	{
		return this->imaginary;
	}
};


