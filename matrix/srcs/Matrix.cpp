/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Matrix.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 19:06:08 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/10 08:25:20 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Matrix.hpp"

template <typename K>
Matrix<K>::Matrix(const std::vector<std::vector<K>> &matrix)
{
	this->_row = matrix.size();
	this->_column = matrix[0].size();
	
	for (size_t i = 1; i < this->_row; i++)
	{
		if (matrix[i].size() != this->_column)
		{
			std::string	msg = "error: invalid size of the input matrix";
			throw (msg);
		}
			
	}
	if (matrix[0].size() == 0 && this->_column == 0)
	{
		std::string	msg = "error: invalid size of the input matrix";
		throw (msg);
	}
	this->_matrix = matrix;
}

template <typename K>
Matrix<K>::Matrix(const Matrix<K> &matrix)
{
	*this = matrix;
}

template <typename K>
Matrix<K>& Matrix<K>::operator=(const Matrix<K> &matrix)
{
	if (this == &matrix)
		return (*this);
	this->_row = matrix._row;
	this->_column = matrix._column;
	this->_matrix = matrix._matrix;
	return (*this);
}

template <typename K>
Matrix<K>::~Matrix()
{
}

template <typename K>
size_t	Matrix<K>::getRowSize(void) const
{
	return (this->_row);
}

template <typename K>
size_t	Matrix<K>::getColumnSize(void) const
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
void	Matrix<K>::add(const Matrix<K> &matrix)
{
	if (this->_row != matrix.getRowSize() || getColumnSize() != matrix.getColumnSize())
	{
		std::string	msg = "error: cannot add matrices of different sizes";
		throw (msg);
	}
	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
			this->_matrix[r][c] += matrix.getMatrix()[r][c];
	}
}

template <typename K>
void	Matrix<K>::sub(const Matrix<K> &matrix)
{
	if (this->_row != matrix.getRowSize() || getColumnSize() != matrix.getColumnSize())
	{
		std::string	msg = "error: cannot subtract matrices of different sizes";
		throw (msg);
	}
	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
			this->_matrix[r][c] -= matrix.getMatrix()[r][c];
	}
}

template <typename K>
void	Matrix<K>::scale(const K scalar)
{
	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
			this->_matrix[r][c] *= scalar;
	}
}

template <typename K>
Vector<K>	Matrix<K>::mul_vec(const Vector<K> &vector) const
{
	if (this->_column != vector.getSize())
	{
		std::string	msg = "error: cannot multiply m by n matrices with non-n-demension vector";
		throw (msg);
	}

	std::vector<K>	res(this->_row);

	for (size_t m = 0; m < this->_row; m++)
	{
		for (size_t n = 0; n < this->_column; n++)
			res[m] = fma(this->_matrix[m][n], vector.getVector()[n], res[m]);
	}
	return (Vector<K>(res));
}

template <typename K>
Matrix<K>	Matrix<K>::mul_mat(const Matrix<K> &matrix) const
{
	if (this->_column != matrix.getRowSize())
	{
		std::string	msg = "error: cannot multiply m by n matrix with non-n-by-p matrix";
		throw (msg);
	}

	std::vector<std::vector<K>>	res(this->_row, std::vector<K>(matrix.getColumnSize()));

	for (size_t m = 0; m < this->_row; m++)
	{
		for (size_t p = 0; p < matrix.getColumnSize(); p++)
		{
			for (size_t n = 0; n < this->_column; n++)
				res[m][p] = fma(this->_matrix[m][n], matrix.getMatrix()[n][p], res[m][p]);
		}
	}
	return (Matrix<K>(res));
}

template <typename K>
K	Matrix<K>::trace(void) const
{
	if (isSquare() == false)
	{
		std::string	msg = "error: cannot define trace of non-square matrix";
		throw (msg);
	}

	K	res = 0;

	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
		{
			if (r == c)
				res += this->_matrix[r][c];
		}
	}
	return (res);
}

template <typename K>
Matrix<K>	Matrix<K>::transpose(void) const
{
	std::vector<std::vector<K>>	res(this->_column, std::vector<K>(this->_row));

	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
			res[c][r] = this->_matrix[r][c];
	}
	return (Matrix<K>(res));
}

/* row operation 1: swap two row
	ex) rowOperation_1(m, r1, r2) swaps m[r1] and m[r2] */
template <typename K>
void	Matrix<K>::rowOperation_1(std::vector<std::vector<K>> *m, size_t r1, size_t r2) const
{
	std::vector<K>	tmp = (*m)[r1];

	(*m)[r1] = (*m)[r2];
	(*m)[r2] = tmp;
}

/* row operation 2: multiply a row by a nonzero number
	ex) rowOperation_2(m, r, k): multiplies m[r] by k */
template <typename K>
void	Matrix<K>::rowOperation_2(std::vector<std::vector<K>> *m, size_t r, K k) const
{
	for (size_t c = 0; c < this->_column; c++)
		(*m)[r][c] *= k;
}

/* row operation 3: add a multiple of one row to another row
	ex) rowOperation_3(m, r1, k, r2) replaces m[r1] to m[r1] + k * m[r2] */
template <typename K>
void	Matrix<K>::rowOperation_3(std::vector<std::vector<K>> *m, size_t r1, K k, size_t r2) const
{
	for (size_t c = 0; c < this->_column; c++)
		(*m)[r1][c] += k * (*m)[r2][c];
}

template <typename K>
Matrix<K>	Matrix<K>::row_echelon(void) const
{
	std::vector<std::vector<K>>	res = this->_matrix;
	size_t				pvt[this->_row] = {0,};

	/* set pivot */
	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t c = 0; c < this->_column; c++)
		{
			if (res[r][c] != 0)
				break ;
			if ((c == 0 || (c > 0 && res[r][c - 1] == 0)))
				pvt[r]++;
		}
	}

	/* re-arrange rows */
	for (size_t r = 0; r < this->_row - 1; r++)
	{
		if (pvt[r] > pvt[r + 1])
			rowOperation_1(&res, r, r + 1);
	}

	/* gaussian elimination */
	for (size_t r = 0; r < this->_row; r++)
	{
		if (r != 0 && pvt[r] <= pvt[r - 1])
		{
			for (size_t i = 0; i < r; i++)
			{
				if (res[i][pvt[i]] != 0)
					rowOperation_3(&res, r, -1 * res[r][pvt[i]] / res[i][pvt[i]], i);
				/* update pivot */
				pvt[r] = 0;
				for (size_t c = 0; c < this->_column; c++)
				{
					if (res[r][c] != 0)
						break ;
					if (-1 * EPSILON < res[r][c] && res[r][c] < EPSILON)
					{
						res[r][c] = 0;
						if ((c == 0 && this->_column > 1) || (c > 0 && res[r][c - 1] == 0))
							pvt[r]++;
					}
				}
			}
		}
		if (res[r][pvt[r]] != 0)
			rowOperation_2(&res, r, 1 / res[r][pvt[r]]);
	}
	/* reduced row echelon form */
	for (size_t r = 0; r < this->_row; r++)
	{
		for (size_t i = 0; i < this->_row; i++)
		{
			if (i != r && res[r][pvt[r]] != 0)
				rowOperation_3(&res, i, -1 * res[i][pvt[r]] / res[r][pvt[r]], r);
		}
	}
	return (Matrix<K>(res));
}

template <typename K>
std::ostream	&operator<<(std::ostream &ostream, const Matrix<K> &matrix)
{
	ostream << "[ ";
	for (size_t r = 0; r < matrix.getRowSize(); r++)
	{
		for (size_t c = 0; c < matrix.getColumnSize(); c++)
		{
			ostream << matrix.getMatrix()[r][c];
			if (c < matrix.getColumnSize() - 1)
				ostream << " ";
		}
		if (r < matrix.getRowSize() - 1)
			ostream << std::endl << "  ";
	}
	ostream << " ]";
	return (ostream);
}
