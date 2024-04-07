/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/07 03:36:00 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/07 03:50:49 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Vector.hpp"
#include "../Utils.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Vector<float>	v1({0., 0., 0.});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "∥v1∥₁: " << BLACK;
		std::cout << v1.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v1∥₂: " << BLACK;
		std::cout << v1.norm() << std::endl;
		std::cout << MAGENTA << "∥v1∥ ͚: " << BLACK;
		std::cout << v1.norm_inf() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Vector<float>	v2({1., 2., 3.});
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "∥v2∥₁: " << BLACK;
		std::cout << v2.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v2∥₂: " << BLACK;
		std::cout << v2.norm() << std::endl;
		std::cout << MAGENTA << "∥v2∥ ͚: " << BLACK;
		std::cout << v2.norm_inf() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Vector<float>	v3({-1., -2.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "∥v3∥₁: " << BLACK;
		std::cout << v3.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v3∥₂: " << BLACK;
		std::cout << v3.norm() << std::endl;
		std::cout << MAGENTA << "∥v3∥ ͚: " << BLACK;
		std::cout << v3.norm_inf() << std::endl;
		std::cout << std::endl;
	}
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1d vector ]" << BLACK << std::endl;
		Vector<float>	v1({7.4});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "∥v1∥₁: " << BLACK;
		std::cout << v1.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v1∥₂: " << BLACK;
		std::cout << v1.norm() << std::endl;
		std::cout << MAGENTA << "∥v1∥ ͚: " << BLACK;
		std::cout << v1.norm_inf() << std::endl;
		std::cout << std::endl;
		
		std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
		Vector<float>	v2({1.2, -2.4});
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "∥v2∥₁: " << BLACK;
		std::cout << v2.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v2∥₂: " << BLACK;
		std::cout << v2.norm() << std::endl;
		std::cout << MAGENTA << "∥v2∥ ͚: " << BLACK;
		std::cout << v2.norm_inf() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
		Vector<float>	v3({21., -22., 23.});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "∥v3∥₁: " << BLACK;
		std::cout << v3.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v3∥₂: " << BLACK;
		std::cout << v3.norm() << std::endl;
		std::cout << MAGENTA << "∥v3∥ ͚: " << BLACK;
		std::cout << v3.norm_inf() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 4d vector ]" << BLACK << std::endl;
		Vector<float>	v4({1.1, -2.2, 3.3, -4.4});
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "∥v4∥₁: " << BLACK;
		std::cout << v4.norm_1() << std::endl;
		std::cout << MAGENTA << "∥v4∥₂: " << BLACK;
		std::cout << v4.norm() << std::endl;
		std::cout << MAGENTA << "∥v4∥ ͚: " << BLACK;
		std::cout << v4.norm_inf() << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
