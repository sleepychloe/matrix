/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 18:55:36 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/05 19:04:29 by yhwang           ###   ########.fr       */
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
std::ostream	&operator<<(std::ostream &ostream, const Vector<K> &vector)
{
	for (size_t i = 0; i < vector.getSize(); i++)
	{
		ostream << vector.getVector()[i];
		if (i < vector.getSize() - 1)
			ostream << ", ";
	}
	return (ostream);
}
