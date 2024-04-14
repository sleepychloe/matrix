/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linear.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 07:14:24 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/14 03:33:32 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../incs/Linear.hpp"

template <typename K>
Vector<K>	linearCombination(const std::vector<Vector<K>> &u, const Vector<K> &cofs)
{
	if (u.size() != cofs.getSize())
	{
		std::string	msg = "error: invalid size of the input matrix or coefficient";
		throw (msg);
	}

	std::vector<K>	res(u[0].getSize());
	for (size_t c = 0; c < u.size(); c++)
	{
		if (u[c].getSize() != res.size())
		{
			std::string	msg = "error: invalid size of the input matrix or cofficient";
			throw (msg);
		}
		for (size_t r = 0; r < u[0].getSize(); r++)
			res[r] += cofs.getVector()[c] * u[c].getVector()[r];
	}
	return (Vector<K>(res));
}

template <typename K>
Vector<K>	lerp(const Vector<K> &u, const Vector<K> &v, const K t)
{
	if (t < 0 || 1 < t)
	{
		std::string	msg = "error: invalid range of the input value t (0 <= t <= 1)";
		throw (msg);
	}
	if (u.getSize() != v.getSize())
	{
		std::string	msg = "error: cannot use linear interpolation with vectors of different sizes";
		throw (msg);
	}
	std::vector<K>	res(u.getSize());
	for (size_t i = 0; i < u.getSize(); i++)
		res[i] = fma(v.getVector()[i] - u.getVector()[i], t, u.getVector()[i]);
	return (Vector<K>(res));
}

template <typename K>
Vector<Complex<K>>	lerp(const Vector<Complex<K>> &u, const Vector<Complex<K>> &v, const K t)
{
	if (t < 0 || 1 < t)
	{
		std::string	msg = "error: invalid range of the input value t (0 <= t <= 1)";
		throw (msg);
	}
	if (u.getSize() != v.getSize())
	{
		std::string	msg = "error: cannot use linear interpolation with vectors of different sizes";
		throw (msg);
	}
	std::vector<Complex<K>>	res(u.getSize());
	for (size_t i = 0; i < u.getSize(); i++)
		res[i] = u.getVector()[i] + (v.getVector()[i] - u.getVector()[i]) * t;
	return (Vector<Complex<K>>(res));
}

template <typename K>
Matrix<K>	lerp(const Matrix<K> &u, const Matrix<K> &v, const K t)
{
	if (t < 0 || 1 < t)
	{
		std::string	msg = "error: invalid range of the input value t (0 <= t <= 1)";
		throw (msg);
	}
	if (u.getRowSize() != v.getRowSize() || u.getColumnSize() != v.getColumnSize())
	{
		std::string	msg = "error: cannot use linear interpolation with matrices of different sizes";
		throw (msg);
	}
	std::vector<std::vector<K>>	res(u.getRowSize(), std::vector<K>(u.getColumnSize()));
	for (size_t r = 0; r < u.getRowSize(); r++)
	{
		for (size_t c = 0; c < u.getColumnSize(); c++)
			res[r][c] = fma(v.getMatrix()[r][c] - u.getMatrix()[r][c], t, u.getMatrix()[r][c]);
	}
	return (Matrix<K>(res));
}

template <typename K>
Matrix<Complex<K>>	lerp(const Matrix<Complex<K>> &u, const Matrix<Complex<K>> &v, const K t)
{
	if (t < 0 || 1 < t)
	{
		std::string	msg = "error: invalid range of the input value t (0 <= t <= 1)";
		throw (msg);
	}
	if (u.getRowSize() != v.getRowSize() || u.getColumnSize() != v.getColumnSize())
	{
		std::string	msg = "error: cannot use linear interpolation with matrices of different sizes";
		throw (msg);
	}
	std::vector<std::vector<Complex<K>>>	res(u.getRowSize(), std::vector<Complex<K>>(u.getColumnSize()));
	for (size_t r = 0; r < u.getRowSize(); r++)
	{
		for (size_t c = 0; c < u.getColumnSize(); c++)
			res[r][c] = u.getMatrix()[r][c] + (v.getMatrix()[r][c] - u.getMatrix()[r][c]) * t;
	}
	return (Matrix<Complex<K>>(res));
}
