/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:09 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/09 21:30:38 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
# define MATRIX_HPP

#include <vector>
#include <iostream>
#include <string>
#include "./Vector.hpp"

template <typename K>
class Matrix
{
public:
	Matrix(const std::vector<std::vector<K>> &matrix);
	Matrix(const Matrix<K> &matrix);
	Matrix &operator=(const Matrix<K> &matrix);
	~Matrix();

	size_t				getRowSize(void) const;
	size_t				getColumnSize(void) const;
	std::vector<std::vector<K>>	getMatrix(void) const;
	bool				isSquare(void) const;
	void				printSize(void) const;

	void				add(const Matrix<K> &vector);
	void				sub(const Matrix<K> &vector);
	void				scale(const K scalar);
	Vector<K>			mul_vec(const Vector<K> &vector) const;
	Matrix<K>			mul_mat(const Matrix<K> &matrix) const;
	K				trace(void) const;
	Matrix<K>			transpose(void) const;

private:
	Matrix();

	size_t				_row;
	size_t				_column;
	std::vector<std::vector<K>>	_matrix;

};

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Matrix<K> &matrix);

#include "../srcs/Matrix.cpp"

#endif
