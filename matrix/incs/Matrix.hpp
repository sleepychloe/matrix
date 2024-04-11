/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:09 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/12 00:41:57 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
# define MATRIX_HPP

#include <vector>
#include <iostream>
#include <string>
#include <functional>
#include "./Vector.hpp"

# define EPSILON			1e-10

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
	Matrix<K>			row_echelon(void) const;
	K				determinant(void) const;
	Matrix<K>			inverse(void) const;

private:
	Matrix();

	size_t				_row;
	size_t				_column;
	std::vector<std::vector<K>>	_matrix;

	void				rowOperation_1(std::vector<std::vector<K>> *m, size_t r1, size_t r2) const;
	void				rowOperation_2(std::vector<std::vector<K>> *m, size_t r, K k) const;
	void				rowOperation_3(std::vector<std::vector<K>> *m, size_t r1, K k, size_t r2) const;
	std::vector<std::vector<K>>	minor(size_t m, size_t n) const;
	K				cofactor(size_t r, size_t c) const;
};

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Matrix<K> &matrix);

#include "../srcs/Matrix.cpp"

#endif
