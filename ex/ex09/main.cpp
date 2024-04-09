/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:29:29 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/09 21:50:43 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{1.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1ᵀ: " << BLACK << std::endl;
		std::cout << m1.transpose() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{1., 2.}, {3., 4.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m2ᵀ: " << BLACK << std::endl;
		std::cout << m2.transpose() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m3ᵀ: " << BLACK << std::endl;
		std::cout << m3.transpose() << std::endl;
		std::cout << std::endl;
		
		std::cout << CYAN << "[ 4 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{1., 2., 3., 4.}, {5., 6., 7., 8.,}, {8., 7., 6., 5.}, {4., 3., 2., 1.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m4ᵀ: " << BLACK << std::endl;
		std::cout << m4.transpose() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 01 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 2., 3.}, {4., 5., 6.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1ᵀ: " << BLACK << std::endl;
		std::cout << m1.transpose() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{1., 2., 3.}, {4., 5., 6.}, {6., 5., 4.}, {3., 2., 1.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m2ᵀ: " << BLACK << std::endl;
		std::cout << m2.transpose() << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
