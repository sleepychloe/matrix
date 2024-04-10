/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:57:26 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/10 02:57:03 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Utils.hpp"

int	main(void)
{
	Matrix<float>	m({{8., 5., -2., 4., 28.}, {4., 2.5, 20., 4., -4}, {8., 5., 1., 4., 17.}});
	// Matrix<float>	m({{1., 2., 0., 3., 4.}, {0., 0., 0., 8., 2.}, {0., 0., 6., 2., 3.}});

	std::cout << "m: " << std::endl;
	std::cout << m << std::endl << std::endl;
	m.row_echelon();
	// std::cout << "res:" << std::endl << m.row_echelon() << std::endl;
	return (0);
}
