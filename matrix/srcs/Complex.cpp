/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 16:04:41 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/13 17:03:19 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Complex.hpp"

template <typename K>
Complex<K>::Complex(const K &real, const K &imag): _real(real), _imag(imag)
{
}

template <typename K>
Complex<K>::Complex(const Complex<K> &complex)
{
	*this = complex;
}

template <typename K>
Complex<K>&	Complex<K>::operator=(const Complex<K> &complex)
{
	if (this == &complex)
		return (*this);
	this->_real = complex._real;
	this->_imag = complex._imag;
	return (*this);
}

template <typename K>
Complex<K>::~Complex()
{
}

template <typename K>
Complex<K>	Complex<K>::operator+(const Complex<K> &complex) const
{
	K	real = this->_real + complex.getReal();
	K	imag = this->_imag + complex.getImag();
	return (setComplex(real, imag));
}

template <typename K>
Complex<K>	Complex<K>::operator-(const Complex<K> &complex) const
{
	K	real = this->_real - complex.getReal();
	K	imag = this->_imag - complex.getImag();
	return (setComplex(real, imag));
}

template <typename K>
Complex<K>	Complex<K>::operator*(const K &num) const
{
	return (setComplex(this->_real * num, this->_imag * num));
}

template <typename K>
Complex<K>	Complex<K>::operator/(const K &num) const
{
	return (setComplex(this->_real / num, this->_imag / num));
}

template <typename K>
Complex<K>	Complex<K>::operator*(const Complex<K> &complex) const
{
	K	real = this->_real * complex.getReal() - this->_imag * complex.getImag();
	K	imag = this->_real * complex.getImag() - this->_imag * complex.getReal();
	return (setComplex(real, imag));
}

template <typename K>
Complex<K>	Complex<K>::operator/(const Complex<K> &complex) const
{
K	denominator = complex.getReal() * complex.getReal()
				+ complex.getImag() * complex.getImag();
	K	real = this->_real * complex.getReal() + this->_imag * complex.getImag();
	K	imag = -1 * this->_real * complex.getImag() + this->_imag * complex.getReal();
	return (setComplex(real / denominator, imag / denominator));
}

template <typename K>
K	Complex<K>::getReal(void) const
{
	return (this->_real);
}

template <typename K>
K	Complex<K>::getImag(void) const
{
	return (this->_imag);
}

template <typename K>
void	Complex<K>::setComplex(const K &real, const K &imag)
{
	this->_real = real;
	this->_imag = imag;
}

template <typename K>
Complex<K> Complex<K>::conjugate(void) const
{
	K	real;
	K	imag;

	real = this->_real;
	imag = -1 * this->_imag;

	return  (complex<K>(real, imag));
}

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Complex<K> &complex)
{
	if (real != 0)
		ostream << complex.getReal();
	if (complex != 0)
	{
		if (complex > 0)
			ostream << " + " << complex.getImag() << "i";
		else
			ostream << " - " << -1 * complex.getImag() << "i";
	}
	return (ostream);
}
