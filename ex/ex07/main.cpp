/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 20:57:15 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/12 02:13:39 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Vector.hpp"
#include "../../matrix/incs/Matrix.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 0.}, {0., 1.}});
		Vector<float>	v1({4., 2.});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "m1 * v1: " << BLACK << std::endl;
		std::cout << m1.mul_vec(v1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Matrix<float>	m2({{2., 0.}, {0., 2.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "m2 * v1: " << BLACK << std::endl;
		std::cout << m2.mul_vec(v1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Matrix<float>	m3({{2., -2.}, {-2., 2.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "m3 * v1: " << BLACK << std::endl;
		std::cout << m3.mul_vec(v1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex04 ]" << BLACK << std::endl;
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1 * m1: " << BLACK << std::endl;
		std::cout << m1.mul_mat(m1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex05 ]" << BLACK << std::endl;
		Matrix<float>	m4({{2., 1.}, {4., 2.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m1 * m4: " << BLACK << std::endl;
		std::cout << m1.mul_mat(m4) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex06 ]" << BLACK << std::endl;
		Matrix<float>	m5({{3., -5.}, {6., 8.}});
		std::cout << MAGENTA << "m5: " << BLACK << std::endl << m5 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m5 * m4: " << BLACK << std::endl;
		std::cout << m5.mul_mat(m4) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 4 by 3 matrix * 3d vector ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 5., 9.}, {2., 6., 10.}, {3., 7., 11.}, {4., 8., 12}});
		Vector<float>	v1({1., 2., 3.});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "m1 * v1: " << BLACK << std::endl;
		std::cout << m1.mul_vec(v1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 by 3 matrix * 3 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{1., 4., 7., 10.}, {2., 5., 8., 11.}, {3., 6., 9., 12.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m1 * m2: " << BLACK << std::endl;
		std::cout << m1.mul_mat(m2) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 4 by 3 matrix * 4d vector ]" << BLACK << std::endl;
			Matrix<float>	m1({{1., 5., 9.}, {2., 6., 10.}, {3., 7., 11.}, {4., 8., 12}});
			Vector<float>	v1({1., 2., 3., 4.});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "m1 * v1: " << BLACK << std::endl;
			std::cout << m1.mul_vec(v1) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ 3 by 4 matrix * 3 by 4 matrix ]" << BLACK << std::endl;
			Matrix<float>	m2({{1., 4., 7., 10.}, {2., 5., 8., 11.}, {3., 6., 9., 12.}});
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m2 * m2: " << BLACK << std::endl;
			std::cout << m2.mul_mat(m2) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
	}
	std::cout << "to check the answers:" << std::endl
		<< "https://www.emathhelp.net/en/linear-algebra-calculator/?action=multiply%20matrices" << std::endl;
	return (0);
}
