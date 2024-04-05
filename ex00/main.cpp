/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 02:18:28 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/05 19:22:17 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../Vector.hpp"
#include "../Matrix.hpp"

int	main(void)
{
	try
	{
		// Vector<float>	v1;
		Vector<float>	v2 = Vector<float>({0, 1});

		// std::cout << "v1:\n" << "(" << v1 << ")" << std::endl;
		// v1.printSize();
		std::cout << "v2:\n" << "(" << v2 << ")" << std::endl;
		v2.printSize();
		/////////////

		// Matrix<float>	m1;
		Matrix<float>	m2 = Matrix<float>({{1,2,3}, {4,5,6}, {7,8,9}});
		
		// std::cout << "m1:\n" << "[" << m1 << "]" << std::endl;
		// m1.printSize();
		std::cout << "m2:\n" << "[" << m2 << "]" << std::endl;
		m2.printSize();
		
	}
	catch(std::string err_msg)
	{
		std::cerr << err_msg << std::endl;
		return (1);
	}
	return (0);
}