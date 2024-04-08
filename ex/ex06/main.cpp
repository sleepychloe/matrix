/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/08 10:00:51 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/08 10:18:12 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Vector.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	v1({0., 0., 1.});
		Vector<float>	v2({1., 0., 0.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 cross v2: " << BLACK << std::endl;
		std::cout << corss_product(v1, v2) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Vector<float>	v3({1., 2., 3.});
		Vector<float>	v4({4., 5., 6.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v3 cross v4: " << BLACK << std::endl;
		std::cout << corss_product(v3, v4) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Vector<float>	v5({4., 2., -3.});
		Vector<float>	v6({-2., -5., 16.});
		std::cout << MAGENTA << "v5: " << BLACK << std::endl << v5 << std::endl;
		std::cout << MAGENTA << "v6: " << BLACK << std::endl << v6 << std::endl;
		std::cout << MAGENTA << "v5 cross v6: " << BLACK << std::endl;
		std::cout << corss_product(v5, v6) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		Vector<float>	v1({-1., 2., -3.});
		Vector<float>	v2({-1., -2., -3.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v1 cross v2: " << BLACK << std::endl;
		std::cout << corss_product(v1, v2) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		try
		{
			Vector<float>	v1({-1., 2.});
			Vector<float>	v2({-1., -2.});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v1 cross v2: " << BLACK << std::endl;
			std::cout << corss_product(v1, v2) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	return (0);
}
