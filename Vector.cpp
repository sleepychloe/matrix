/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:55:36 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/06 07:14:45 by yhwang           ###   ########.fr       */
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
	if (getSize() != vector.getSize())
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
	if (getSize() != vector.getSize())
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
	for (size_t i = 0; i <= getSize(); i++)
		this->_vector[i] *= scalar;
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
