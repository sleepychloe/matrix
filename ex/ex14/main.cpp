/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:35:11 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/16 16:34:06 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Color.hpp"
#include <functional>

template <typename K>
void	printMatrix(const Matrix<K> &m)
{
	for (size_t r = 0; r < m.getRowSize(); r++)
	{
		for (size_t c = 0; c < m.getColumnSize(); c++)
		{
			if constexpr (std::is_arithmetic<K>::value)
				std::cout << m.getMatrix()[r][c];
			else
				std::cout << m.getMatrix()[r][c].real();
			if (c < m.getColumnSize() - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
	}
}

/* supports parameters of Complex<K> and std::complex<K> type, but the imaginary part of all parameters must be 0 */
int	main(void)
{
	try
	{
		Matrix<float>	res = projection(90.f, 1.f, 0.f, 100.f);

		// Matrix<Complex<float>>	res = projection(Complex<float>(90., 0.),
		// 					Complex<float>(1., 0.),
		// 					Complex<float>(0., 0.),
		// 					Complex<float>(100., 0.));

		printMatrix(res);
	}
	catch(std::string err_msg)
	{
		std::cerr << RED << err_msg << BLACK << std::endl;
		return (1);
	}
	return (0);
}
