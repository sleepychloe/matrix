/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:30 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/05 19:05:45 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
# define VECTOR_HPP

#include <vector>
#include <iostream>

template <typename K>
class Vector
{
public:
	Vector(const std::vector<K> &vector);
	Vector(const Vector &vector);
	Vector& operator=(const Vector &vector);
	~Vector();

	size_t				getSize(void)	const;
	std::vector<K>			getVector(void) const;
	void				printSize(void) const;
private:
	Vector();

	size_t				_size;
	std::vector<K>			_vector;

};

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Vector<K> &vector);

#include "./Vector.cpp"

#endif
