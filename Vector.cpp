/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:55:36 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/07 03:45:14 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Vector.hpp"

template <typename K>
Vector<K>::Vector(const std::vector<K> &vector): _size(vector.size()), _vector(vector)
{
}

template <typename K>
Vector<K>::Vector(const Vector &vector)
{
	*this = vector;
}

template <typename K>
Vector<K>& Vector<K>::operator=(const Vector &vector)
{
	if (this == &vector)
		return (*this);
	this->_size = vector._size;
	this->_vector = vector._vector;
	return (*this);
}

template <typename K>
Vector<K>::~Vector()
{
}

template <typename K>
size_t	Vector<K>::getSize(void) const
{
	return (this->_size);
}

template <typename K>
std::vector<K>	Vector<K>::getVector(void) const
{
	return (this->_vector);
}

template <typename K>
void	Vector<K>::printSize(void) const
{
	std::cout << this->_size << " demension vector" << std::endl;
}

template <typename K>
void	Vector<K>::add(const Vector &vector)
{
	if (this->_size != vector.getSize())
	{
		std::string	msg = "error: cannot add vectors of different sizes";
		throw (msg);
	}
	for (size_t i = 0; i <= getSize(); i++)
		this->_vector[i] += vector.getVector()[i];
}

template <typename K>
void	Vector<K>::sub(const Vector &vector)
{
	if (this->_size != vector.getSize())
	{
		std::string	msg = "error: cannot subtract vectors of different sizes";
		throw (msg);
	}
	for (size_t i = 0; i <= getSize(); i++)
		this->_vector[i] -= vector.getVector()[i];
}

template <typename K>
void	Vector<K>::scale(const K scalar)
{
	for (size_t i = 0; i <= this->_size; i++)
		this->_vector[i] *= scalar;
}

template <typename K>
K	Vector<K>::dot(const Vector &vector)
{
	if (this->_size != vector.getSize())
	{
		std::string	msg = "error: cannot use dot product with vectors of different sizes";
		throw (msg);
	}
	K	res = 0;
	for (size_t i = 0; i < this->_size; i++)
		res = fma(this->_vector[i], vector.getVector()[i], res);
	return (res);
}

template <typename K>
K	Vector<K>::norm_1(void)
{
	K	res = 0;

	for (size_t i = 0; i < this->_size; i++)
		res += pow(pow(this->_vector[i], 2), 0.5);
	return (res);
}

template <typename K>
K	Vector<K>::norm(void)
{
	K	res = 0;

	for (size_t i = 0; i < this->_size; i++)
		res += pow(this->_vector[i], 2);
	return (pow(res, 0.5));
}

template <typename K>
K	Vector<K>::norm_inf(void)
{
	K	res = pow(pow(this->_vector[0], 2), 0.5);
	
	for (size_t i = 1; i < this->_size; i++)
		res = pow(std::max(pow(res, 2), pow(this->_vector[i], 2)), 0.5);
	return (res);
}

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Vector<K> &vector)
{
	ostream << "( ";
	for (size_t i = 0; i < vector.getSize(); i++)
	{
		ostream << vector.getVector()[i];
		if (i < vector.getSize() - 1)
			ostream << ", ";
	}
	ostream << " )";
	return (ostream);
}
