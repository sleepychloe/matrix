/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Complex.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:54:24 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/13 20:58:09 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef COMPLEX_HPP
# define COMPLEX_HPP

#include <iostream>

template <typename K>
class Complex
{
public:
	Complex(const K &real, const K &imag);
	Complex(const Complex<K> &complex);
	Complex &operator=(const Complex<K> &complex);
	~Complex();

	Complex<K>	operator+(const Complex<K> &complex) const;
	Complex<K>	operator-(const Complex<K> &complex) const;
	Complex<K>	operator*(const K &num) const;
	Complex<K>	operator/(const K &num) const;
	Complex<K>	operator*(const Complex<K> &complex) const;
	Complex<K>	operator/(const Complex<K> &complex) const;
	Complex<K>	&operator+=(const K &num);
	Complex<K>	&operator-=(const K &num);
	Complex<K>	&operator*=(const K &num);
	Complex<K>	&operator/=(const K &num);
	Complex<K>	&operator+=(const Complex<K> &complex);
	Complex<K>	&operator-=(const Complex<K> &complex);
	Complex<K>	&operator*=(const Complex<K> &complex);
	Complex<K>	&operator/=(const Complex<K> &complex);

	K				getReal(void) const;
	K				getImag(void) const;

	Complex<K>			conjugate(void) const;

private:
	Complex();

	K				_real;
	K				_imag;
};

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Complex<K> &complex);

#include "../srcs/Complex.cpp"

#endif
