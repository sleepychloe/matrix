/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 01:43:13 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/12 02:13:50 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 0., 0.}, {0., 1., 0.}, {0., 0., 1.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "rank(m1): " << BLACK;
		std::cout << m1.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Matrix<float>	m2({{1., 2., 0., 0.}, {2., 4., 0., 0.}, {-1., 2., 1., 1.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "rank(m2): " << BLACK;
		std::cout << m2.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Matrix<float>	m3({{8., 5., -2.}, {4., 7., 20.}, {7., 6., 1.}, {21., 18., 7.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "rank(m3): " << BLACK;
		std::cout << m3.rank() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{3.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "rank(m1): " << BLACK;
		std::cout << m1.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{11., -12.}, {-13., 14.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "rank(m2): " << BLACK;
		std::cout << m2.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{1., 2., 3.}, {11., 12., 13.}, {21., 22., 23.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "rank(m3): " << BLACK;
		std::cout << m3.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{1., 3., 2., 12.}, {1.5, 4.5, 3., 18.}, {5., 9., 8., 4.}, {6., 3., 10., 9.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "rank(m4): " << BLACK;
		std::cout << m4.rank() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{3., 2.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "rank(m1): " << BLACK;
		std::cout << m1.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{11., -12., 13.}, {-13., 14., -15}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "rank(m2): " << BLACK;
		std::cout << m2.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{1., 2., 3., 4.}, {11., 12., 13., 14.}, {21., 22., 23., 24.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "rank(m3): " << BLACK;
		std::cout << m3.rank() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 5 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{1., 3., 2., 12., 3}, {1.5, 4.5, 3., 18., 4.5}, {5., 9., 8., 4., 3}, {2., 6., 4., 24., 6.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "rank(m4): " << BLACK;
		std::cout << m4.rank() << std::endl;
		std::cout << std::endl;
	}
	std::cout << "to check the answers:" << std::endl
		<< "https://www.emathhelp.net/en/linear-algebra-calculator/?action=matrix%20rank" << std::endl;
	return (0);
}
