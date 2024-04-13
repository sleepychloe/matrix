/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 23:35:11 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/13 07:00:50 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"

int	main(void)
{
	Matrix<float>	res = projection(100.f, 1.f, 1.f, 100.f);

	for (size_t r = 0; r < res.getRowSize(); r++)
	{
		for (size_t c = 0; c < res.getColumnSize(); c++)
		{
			std::cout << res.getMatrix()[r][c];
			if (c < res.getColumnSize() - 1)
				std::cout << ", ";
		}
		std::cout << std::endl;
	}
	return (0);
}
