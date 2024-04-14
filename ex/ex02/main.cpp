/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 20:48:28 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/14 03:27:12 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Vector.hpp"
#include "../../matrix/incs/Matrix.hpp"
#include "../../matrix/incs/Linear.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	v1({0});
		Vector<float>	v2({1});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "liner interpolation v1, v2 and 0: " << BLACK << std::endl;
		std::cout << lerp(v1, v2, 0.f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "liner interpolation v1, v2 and 1: " << BLACK << std::endl;
		std::cout << lerp(v1, v2, 1.f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "liner interpolation v1, v2 and 0.5: " << BLACK << std::endl;
		std::cout << lerp(v1, v2, 0.5f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex04 ]" << BLACK << std::endl;
		Vector<float>	v3({21});
		Vector<float>	v4({42});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "liner interpolation v3, v4 and 0.3: " << BLACK << std::endl;
		std::cout << lerp(v3, v4, 0.3f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex05 ]" << BLACK << std::endl;
		Vector<float>	v5({2., 1.});
		Vector<float>	v6({4., 2.});
		std::cout << MAGENTA << "v5: " << BLACK << std::endl << v5 << std::endl;
		std::cout << MAGENTA << "v6: " << BLACK << std::endl << v6 << std::endl;
		std::cout << MAGENTA << "liner interpolation v5, v6 and 0.3: " << BLACK << std::endl;
		std::cout << lerp(v5, v6, 0.3f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex06 ]" << BLACK << std::endl;
		Matrix<float>	m1({{2., 1.}, {3., 4.}});
		Matrix<float>	m2({{20., 10.}, {30., 40.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "liner interpolation m1, m2 and 0.5: " << BLACK << std::endl;
		std::cout << lerp(m1, m2, 0.5f) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02: vector ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 3d vectors ]" << BLACK << std::endl;
		Vector<float>	v1({1., 2., 3.});
		Vector<float>	v2({101., 102., 103.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "liner interpolation v1, v2 and 0.65: " << BLACK << std::endl;
		std::cout << lerp(v1, v2, 0.65f) << std::endl;
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ 3d vectors with invalid t value ]" << BLACK << std::endl;
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "liner interpolation v1, v2 and -0.5: " << BLACK << std::endl;
			std::cout << lerp(v1, v2, -0.5f) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << CYAN << "[ 3d vector and 2d vector ]" << BLACK << std::endl;
			Vector<float>	v3({1., 2.});
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
			std::cout << MAGENTA << "liner interpolation v1, v2 and 0.2: " << BLACK << std::endl;
			std::cout << lerp(v2, v3, 0.2f) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03: matrix ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 by 3 matrices ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 2., 3.,}, {4., 5., 6.}});
		Matrix<float>	m2({{1.5, 2.5, 3.5,}, {4.5, 5.5, 6.5}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "liner interpolation m1, m2 and 0.7: " << BLACK << std::endl;
		std::cout << lerp(m1, m2, 0.4f) << std::endl;
		std::cout << std::endl;
		
		std::cout << CYAN << "[ 4 by 4 matrices ]" << BLACK << std::endl;
		Matrix<float>	m3({{11., 12., 13., 14.}, {15., 16., 17., 18.}, {19., 20., 21., 22.}, {23., 24., 25., 26.}});
		Matrix<float>	m4({{12., 13., 14., 15.}, {16., 17., 18., 19.}, {20., 21., 22., 23.}, {24., 25., 26., 27.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "liner interpolation m3, m4 and 0.4: " << BLACK << std::endl;
		std::cout << lerp(m3, m4, 0.4f) << std::endl;
		std::cout << std::endl;
		
		try
		{
			std::cout << CYAN << "[ 4 by 4 matrices with invalid t value ]" << BLACK << std::endl;
			std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "liner interpolation m3, m4 and 1.2: " << BLACK << std::endl;
			std::cout << lerp(m3, m4, 1.2f) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << CYAN << "[ 4 by 4 matrix and 3 byh 3 matrix ]" << BLACK << std::endl;
			Matrix<float>	m5({{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}});
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "m5: " << BLACK << std::endl << m5 << std::endl;
			std::cout << MAGENTA << "liner interpolation m4, m5 and 0.7: " << BLACK << std::endl;
			std::cout << lerp(m4, m5, 0.7f) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	return (0);
}
