/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:06:08 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/05 19:12:27 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Matrix.hpp"

template <typename K>
Matrix<K>::Matrix(const std::vector<std::vector<K>> &matrix): _err_msg("")
{
	this->_row = matrix.size();
	this->_column = matrix[0].size();
	
	for (size_t i = 1; i < this->_row; i++)
	{
		if (matrix[i].size() != this->_column)
		{
			this->_err_msg = "error: invalid size of the input matrix";
			throw (this->_err_msg);
		}
	}
	if (matrix[0].size() == 0 && this->_column == 0)
	{
		this->_err_msg = "error: input matrix is empty";
		throw (this->_err_msg);
	}
	this->_matrix = matrix;
}

template <typename K>
Matrix<K>::Matrix(const Matrix &matrix)
{
	*this = matrix;
}

template <typename K>
Matrix<K>& Matrix<K>::operator=(const Matrix &matrix)
{
	if (this == &matrix)
		return (*this);
	this->_row = matrix._row;
	this->_column = matrix._column;
	this->_matrix = matrix._matrix;
	this->_err_msg = matrix._err_msg;
	return (*this);
}

template <typename K>
Matrix<K>::~Matrix()
{
}

template <typename K>
size_t	Matrix<K>::getRow(void) const
{
	return (this->_row);
}

template <typename K>
size_t	Matrix<K>::getColumn(void) const
{
	return (this->_column);
}

template <typename K>
std::vector<std::vector<K>>	Matrix<K>::getMatrix(void) const
{
	return (this->_matrix);
}

template <typename K>
bool	Matrix<K>::isSquare(void) const
{
	if (this->_row == this->_column)
		return (true);
	return (false);
}

template <typename K>
void	Matrix<K>::printSize(void) const
{
	std::cout << this->_row << " by " << this->_column;
	if (isSquare())
		std::cout << " square";
	std::cout << " matrix" << std::endl;
}

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Matrix<K> &matrix)
{
	for (size_t r = 0; r < matrix.getRow(); r++)
	{
		for (size_t c = 0; c < matrix.getColumn(); c++)
		{
			ostream << matrix.getMatrix()[r][c];
			if (c < matrix.getColumn() - 1)
				ostream << " ";
		}
		if (r < matrix.getRow() - 1)
			ostream << std::endl;
	}
	return (ostream);
}
