/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 00:32:15 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/08 09:47:08 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Vector.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	v1({0., 0.});
		Vector<float>	v2({1., 1.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 dot v2: " << BLACK << std::endl;
		std::cout << v1.dot(v2) << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v2 dot v2: " << BLACK << std::endl;
		std::cout << v2.dot(v2) << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Vector<float>	v3({-1., 6.});
		Vector<float>	v4({3., 2.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v3 dot v4: " << BLACK << std::endl;
		std::cout << v3.dot(v4) << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 3d vectors ]" << BLACK << std::endl;
		Vector<float>	v1({1., 2., 3.});
		Vector<float>	v2({4., 5., 6.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 dot v2: " << BLACK << std::endl;
		std::cout << v1.dot(v2) << std::endl;

		std::cout << CYAN << "[ 4d vectors ]" << BLACK << std::endl;
		Vector<float>	v3({1., -2., 3., -4.});
		Vector<float>	v4({-5., 6., -7., 8.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v3 dot v4: " << BLACK << std::endl;
		std::cout << v3.dot(v4) << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		try
		{
			std::cout << CYAN << "[ 2d vector and 3d vectors ]" << BLACK << std::endl;
			Vector<float>	v1({1., 2.}) ;
			Vector<float>	v2({1., 2., 3.});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v1 dot v2: " << BLACK << std::endl;
			std::cout << v1.dot(v2) << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
		std::cout << std::endl;
		try
		{
			std::cout << CYAN << "[ 3d vector and 4d vectors ]" << BLACK << std::endl;
			Vector<float>	v3({4., 5., 6.}) ;
			Vector<float>	v4({1., 2., 3., 4.});
			std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
			std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
			std::cout << MAGENTA << "v3 dot v4: " << BLACK << std::endl;
			std::cout << v3.dot(v4) << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	return (0);
}
