/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 19:56:24 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/07 20:37:03 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Vector.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	v1({1., 0.});
		Vector<float>	v2({1., 0.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "cosine between v1 and v2: " << BLACK << std::endl;
		std::cout << angle_cos(v1, v2) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Vector<float>	v3({0., 1.});
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "cosine between v2 and v3: " << BLACK << std::endl;
		std::cout << angle_cos(v2, v3) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Vector<float>	v4({-1., 1.});
		Vector<float>	v5({1., -1.});
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "v5: " << BLACK << std::endl << v5 << std::endl;
		std::cout << MAGENTA << "cosine between v4 and v5: " << BLACK << std::endl;
		std::cout << angle_cos(v4, v5) << std::endl;
		std::cout << std::endl;
		
		std::cout << CYAN << "[ ex04 ]" << BLACK << std::endl;
		Vector<float>	v6({2., 1.});
		Vector<float>	v7({4., 2.});
		std::cout << MAGENTA << "v6: " << BLACK << std::endl << v6 << std::endl;
		std::cout << MAGENTA << "v7: " << BLACK << std::endl << v7 << std::endl;
		std::cout << MAGENTA << "cosine between v6 and v7: " << BLACK << std::endl;
		std::cout << angle_cos(v6, v7) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex05 ]" << BLACK << std::endl;
		Vector<float>	v8({1., 2., 3.});
		Vector<float>	v9({4., 5., 6.});
		std::cout << MAGENTA << "v8: " << BLACK << std::endl << v8 << std::endl;
		std::cout << MAGENTA << "v9: " << BLACK << std::endl << v9 << std::endl;
		std::cout << MAGENTA << "cosine between v8 and v9: " << BLACK << std::endl;
		std::cout << angle_cos(v8, v9) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 3d vectors ]" << BLACK << std::endl;
		Vector<float>	v1({1., 2., 3.});
		Vector<float>	v2({-1., 2., -3.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "cosine between v1 and v2: " << BLACK << std::endl;
		std::cout << angle_cos(v1, v2) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4d vectors ]" << BLACK << std::endl;
		Vector<float>	v3({1., -2., 3., -4.});
		Vector<float>	v4({-1., -2., -3., -4.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "cosine between v3 and v4: " << BLACK << std::endl;
		std::cout << angle_cos(v3, v4) << std::endl;
		std::cout << std::endl;
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
			std::cout << MAGENTA << "cosine between v1 and v2: " << BLACK << std::endl;
			std::cout << angle_cos(v1, v2) << std::endl;
			std::cout << std::endl;
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
			std::cout << MAGENTA << "cosine between v3 and v4: " << BLACK << std::endl;
			std::cout << angle_cos(v3, v4) << std::endl;
			std::cout << std::endl;
		}
		catch(std::string err_msg)
		{
			std::cerr << RED << err_msg << BLACK << std::endl;
		}
	}
	return (0);
}
