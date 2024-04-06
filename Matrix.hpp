/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:09 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/06 03:46:57 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATRIX_HPP
# define MATRIX_HPP

#include <vector>
#include <iostream>
#include <string>

template <typename K>
class Matrix
{
public:
	Matrix(const std::vector<std::vector<K>> &matrix);
	Matrix(const Matrix &matrix);
	Matrix &operator=(const Matrix &matrix);
	~Matrix();

	size_t				getRow(void) const;
	size_t				getColumn(void) const;
	std::vector<std::vector<K>>	getMatrix(void) const;
	bool				isSquare(void) const;
	void				printSize(void) const;

	void				add(const Matrix &vector);
	void				sub(const Matrix &vector);
	void				scale(const K factor);

private:
	Matrix();

	size_t				_row;
	size_t				_column;
	std::vector<std::vector<K>>	_matrix;

};

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Matrix<K> &matrix);

#include "./Matrix.cpp"

#endif
