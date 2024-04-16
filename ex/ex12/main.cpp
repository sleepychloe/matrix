/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/12 00:20:13 by yhwang            #+#    #+#             */
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
		Matrix<float>	m1({{1., 0., 0.}, {0., 1., 0.}, {0., 0., 1.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1⁻¹: " << BLACK << std::endl;
		std::cout << m1.inverse() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Matrix<float>	m2({{2., 0., 0.}, {0., 2., 0.}, {0., 0., 2.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m2⁻¹: " << BLACK << std::endl;
		std::cout << m2.inverse() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Matrix<float>	m3({{8., 5., -2.}, {4., 7., 20.}, {7., 6., 1.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m3⁻¹: " << BLACK << std::endl;
		std::cout << m3.inverse() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{3.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1⁻¹: " << BLACK << std::endl;
		std::cout << m1.inverse() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{11., -12.}, {-13., 14.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m2⁻¹: " << BLACK << std::endl;
		std::cout << m2.inverse() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{1.1, 5.5, -2.7}, {86.1, 7.3, 21.}, {1.3, 5.2, 19.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m3⁻¹: " << BLACK << std::endl;
		std::cout << m3.inverse() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{1., 3.3, 2.2, 12.3}, {3., 8.8, 6.3, 3.4}, {3.5, 5.9, 8., 4.}, {6.7, 3.8, 10., 9.2}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m4⁻¹: " << BLACK << std::endl;
		std::cout << m4.inverse() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
			Matrix<float>	m1({{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.,}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "m1⁻¹: " << BLACK << std::endl;
			std::cout << m1.inverse() << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << CYAN << "[ 4 by 4 matrix ]" << BLACK << std::endl;
			Matrix<float>	m2({{11., 12., 13., 14.}, {15., 16., 17., 18.}, {19., 20., 21., 22.}, {23., 24., 25., 26.}});
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m2⁻¹: " << BLACK << std::endl;
			std::cout << m2.inverse() << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 04 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 2 by 3 matrix ]" << BLACK << std::endl;
			Matrix<float>	m1({{1., 2., 3.}, {4., 5., 6.}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "m1⁻¹: " << BLACK << std::endl;
			std::cout << m1.inverse() << std::endl;
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
			Matrix<float>	m2({{11., 12., 13., 14.}, {15., 16., 17., 18.}, {19., 20., 21., 22.}});
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m2⁻¹: " << BLACK << std::endl;
			std::cout << m2.inverse() << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "to check the answers:" << std::endl
		<< "https://www.emathhelp.net/en/linear-algebra-calculator/?action=matrix%20inverse" << std::endl;
	return (0);
}
