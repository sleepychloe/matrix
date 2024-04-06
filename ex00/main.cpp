/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:28 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/06 04:04:47 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Vector.hpp"
#include "../Matrix.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: vector class ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1d vector ]" << BLACK << std::endl;
		Vector<float> v1({1.});
		std::cout << v1 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		v1.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
		Vector<float> v2({1., 2.});
		std::cout << v2 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		v2.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
		Vector<float> v3({1., 2., 3.});
		std::cout << v3 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		v3.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 4d vector ]" << BLACK << std::endl;
		Vector<float> v4({1., 2., 3., 4.});
		std::cout << v4 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		v4.printSize();
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02: matrix class ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 * 1 matrix ]" << BLACK << std::endl;
		Matrix<float> m1{{{1.}}};
		std::cout << m1 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m1.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 * 2 matrix ]" << BLACK << std::endl;
		Matrix<float> m2({{1., 2.}, {3., 4.}});
		std::cout << m2 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m2.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m3({{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}});
		std::cout << m3 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m3.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 4 * 4 matrix ]" << BLACK << std::endl;
		Matrix<float> m4({{1., 2., 3., 4.}, {5., 6., 7., 8.}, {1., 2., 3., 4.}});
		std::cout << m4 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m4.printSize();
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m5({{1., 2., 3.}, {4., 5., 6.}});
		std::cout << m5 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m5.printSize();
		std::cout << std::endl;
		
		std::cout << CYAN << "[ 4 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m6({{1., 2., 3.}, {4., 5., 6.}, {7., 8., 9.}, {1, 2, 3.}});
		std::cout << m6 << std::endl;
		std::cout << MAGENTA << "size: " << BLACK;
		m6.printSize();
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ wrong input ]" << BLACK << std::endl;
			Matrix<float> m7({{1., 2., 3.}, {4., 5.}});
			std::cout << m7 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			m7.printSize();
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		
		try
		{
			std::cout << CYAN << "[ empty input ]" << BLACK << std::endl;
			Matrix<float> m8{{{}}};
			std::cout << m8 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			m8.printSize();
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03: vector add ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
		Vector<float> v1 = Vector<float>({1., 2.});
		Vector<float> v2 = Vector<float>({3., 4.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 + v2: " << BLACK << std::endl;
		v1.add(v2);
		std::cout << v1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
		Vector<float> v3 = Vector<float>({1., 2., 3.});
		Vector<float> v4 = Vector<float>({4., 5., 6.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v3 + v4: " << BLACK << std::endl;
		v3.add(v4);
		std::cout << v3 << std::endl;
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ different size ]" << BLACK << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
			std::cout << MAGENTA << "v2 + v4: " << BLACK << std::endl;
			v2.add(v4);
			std::cout << v2 << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 04: vector subtract ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
		Vector<float> v1 = Vector<float>({1., 2.});
		Vector<float> v2 = Vector<float>({9., 8.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 - v2: " << BLACK << std::endl;
		v1.sub(v2);
		std::cout << v1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
		Vector<float> v3 = Vector<float>({9., 8., 7.});
		Vector<float> v4 = Vector<float>({1., 2., 3.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v3 - v4: " << BLACK << std::endl;
		v3.sub(v4);
		std::cout << v3 << std::endl;
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ different size ]" << BLACK << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
			std::cout << MAGENTA << "v2 - v4: " << BLACK << std::endl;
			v2.sub(v4);
			std::cout << v2 << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 05: vector scaling ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
		Vector<float> v1 = Vector<float>({1., 2.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v1 * 2: " << BLACK << std::endl;
		v1.scale(2.);
		std::cout << v1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
		Vector<float> v2 = Vector<float>({1., 2., 3.});
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v2 * -3: " << BLACK << std::endl;
		v2.scale(-3.);
		std::cout << v2 << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 06: matrix add ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 * 2 matrix ]" << BLACK << std::endl;
		Matrix<float> m1({{1., 2.}, {3., 4.}});
		Matrix<float> m2({{2., 3.}, {4., 5.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m1 + m2: " << BLACK << std::endl;
		m1.add(m2);
		std::cout << m1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m3({{1., 2., 3.}, {4., 5., 6.}});
		Matrix<float> m4({{9., 8., 7.}, {6., 5., 4.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m3 + m4: " << BLACK << std::endl;
		m3.add(m4);
		std::cout << m3 << std::endl;
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ different size ]" << BLACK << std::endl;
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "m2 + m4: " << BLACK << std::endl;
			m2.add(m4);
			std::cout << m2 << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 07: matrix subtract ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 * 2 matrix ]" << BLACK << std::endl;
		Matrix<float> m1({{1., 2.}, {3., 4.}});
		Matrix<float> m2({{9., 8.}, {7., 6.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m1 - m2: " << BLACK << std::endl;
		m1.sub(m2);
		std::cout << m1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m3({{9., 8., 7.}, {6., 5., 4.}});
		Matrix<float> m4({{1., 2., 3.}, {4., 5., 6.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "m3 - m4: " << BLACK << std::endl;
		m3.sub(m4);
		std::cout << m3 << std::endl;
		std::cout << std::endl;

		try
		{
			std::cout << CYAN << "[ different size ]" << BLACK << std::endl;
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "m2 - m4: " << BLACK << std::endl;
			m2.sub(m4);
			std::cout << m2 << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 08: matrix scaling ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 * 2 matrix ]" << BLACK << std::endl;
		Matrix<float> m1({{1., 2.}, {3., 4.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m1 * 2: " << BLACK << std::endl;
		m1.scale(2.);
		std::cout << m1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 * 3 matrix ]" << BLACK << std::endl;
		Matrix<float> m2({{1., 2., 3.}, {4., 5., 6.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "m2 * -1: " << BLACK << std::endl;
		m2.scale(-1.);
		std::cout << m2 << std::endl;
		std::cout << std::endl;
	}
	
	return (0);
}