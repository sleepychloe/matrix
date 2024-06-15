/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 05:00:42 by yhwang            #+#    #+#             */
/*   Updated: 2024/06/15 19:28:37 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Vector.hpp"
#include "../../matrix/incs/Linear.hpp"
#include "../Color.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	e1({1, 0, 0});
		Vector<float>	e2({0, 1, 0});
		Vector<float>	e3({0, 0, 1});
		Vector<float>	c1({10., -2., 0.5});
		std::cout << MAGENTA << "e1: " << BLACK << std::endl << e1 << std::endl;
		std::cout << MAGENTA << "e2: " << BLACK << std::endl << e2 << std::endl;
		std::cout << MAGENTA << "e3: " << BLACK << std::endl << e3 << std::endl;
		std::cout << MAGENTA << "c1: " << BLACK << std::endl << c1 << std::endl;
		std::cout << MAGENTA << "liner combination {e1, e2, e3} and c1: " << BLACK << std::endl;
		std::cout << linearCombination({e1, e2, e3}, c1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Vector<float>	v1({1., 2., 3.});
		Vector<float>	v2({0., 10., -100.});
		Vector<float>	c2({10., -2.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "c2: " << BLACK << std::endl << c2 << std::endl;
		std::cout << MAGENTA << "liner combination {v1, v2} and c2: " << BLACK << std::endl;
		std::cout << linearCombination({v1, v2}, c2) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ two 1d vectors with 2d vector coefficient ]" << BLACK << std::endl;
		Vector<float>	v1({1.});
		Vector<float>	v2({2.});
		Vector<float>	c({3., 4.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "c: " << BLACK << std::endl << c << std::endl;
		std::cout << MAGENTA << "liner combination {v1, v2} and c: " << BLACK << std::endl;
		std::cout << linearCombination({v1, v2}, c) << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ four 3d vectors with 4d vector coefficient ]" << BLACK << std::endl;
		Vector<float>	v1({1., 2., 3.});
		Vector<float>	v2({-9., -8., -7.});
		Vector<float>	v3({0.1, 0.2, 0.3});
		Vector<float>	v4({1.1, 1.2, 1.3});
		Vector<float>	c({4., 2., 0., 8.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "c: " << BLACK << std::endl << c << std::endl;
		std::cout << MAGENTA << "liner combination {v1, v2, v3, v4} and c: " << BLACK << std::endl;
		std::cout << linearCombination({v1, v2, v3, v4}, c) << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 04 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 3d vector and 2d vector with 2d vector coefficient ]" << BLACK << std::endl;
			Vector<float>	v1({1., 2., 3.});
			Vector<float>	v2({4., 5.});
			Vector<float>	c({1., 2.});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "c: " << BLACK << std::endl << c << std::endl;
			std::cout << MAGENTA << "liner combination {v1, v2} and c: " << BLACK << std::endl;
			std::cout << linearCombination({v1, v2}, c) << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 05 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ three 3d vector with 2d vector coefficient ]" << BLACK << std::endl;
			Vector<float>	v1({1., 2., 3.});
			Vector<float>	v2({4., 5., 6.});
			Vector<float>	v3({7., 8., 9.});
			Vector<float>	c({1., 2.});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
			std::cout << MAGENTA << "c: " << BLACK << std::endl << c << std::endl;
			std::cout << MAGENTA << "liner combination {v1, v2, v3} and c: " << BLACK << std::endl;
			std::cout << linearCombination({v1, v2, v3}, c) << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		
	}
	return (0);
}
