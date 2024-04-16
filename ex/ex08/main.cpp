/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 02:57:16 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/16 05:16:13 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Color.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 0.}, {0., 1.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "Tr(m1): " << BLACK << std::endl;
		std::cout << m1.trace() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Matrix<float>	m2({{2., -5., 0}, {4., 3., 7.}, {-2., 3., 4.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "Tr(m2): " << BLACK << std::endl;
		std::cout << m2.trace() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Matrix<float>	m3({{-2., -8., 4}, {1., -23., 4.}, {0., 6., 4.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "Tr(m3): " << BLACK << std::endl;
		std::cout << m3.trace() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{1.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "Tr(m1): " << BLACK << std::endl;
		std::cout << m1.trace() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{1. ,2.}, {3., 4.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "Tr(m2): " << BLACK << std::endl;
		std::cout << m2.trace() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{1. ,2., 3.}, {4., 5., 6.}, {7., 8., 9.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "Tr(m3): " << BLACK << std::endl;
		std::cout << m3.trace() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{1. ,2., 3., 4.}, {5., 6., 7., 8.}, {8., 7., 6., 5.}, {4., 3., 2., 1.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "Tr(m4): " << BLACK << std::endl;
		std::cout << m4.trace() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 2 by 3 matrix ]" << BLACK << std::endl;
			Matrix<float>	m1({{1. ,2., 3.}, {4., 5., 6.}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "Tr(m1): " << BLACK << std::endl;
			std::cout << m1.trace() << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ 3 by 4 matrix ]" << BLACK << std::endl;
			Matrix<float>	m2({{1. ,2., 3., 4.}, {5., 6., 7., 8.}, {1., 2., 3., 4.}});
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "Tr(m2): " << BLACK << std::endl;
			std::cout << m2.trace() << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	return (0);
}
