/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:45:44 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/13 19:19:47 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Complex.hpp"
#include "../../matrix/incs/Matrix.hpp"
#include "../Utils.hpp"
#include <complex>

int	main(void)
{
	std::cout << YELLOW << "[ test 00: complex number ]" << BLACK << std::endl;
	{
		std::cout << YELLOW << "[ test 00-01 : declare class ]" << BLACK << std::endl;
		std::cout << CYAN << "[ real: 1, imag: 1 ]" << BLACK << std::endl;
		Complex<float>		c1(1., 1.);
		std::complex<float>	std_c1(1., 1.);
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c1 << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ real: 2, imag: 2 ]" << BLACK << std::endl;
		Complex<float>		c2(2., 2.);
		std::complex<float>	std_c2(2., 2.);
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c2 << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-02 : overloading + ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) + (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 + c2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c1 + std_c2 << std::endl << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-03 : overloading - ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) - (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 - c2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c1 - std_c2 << std::endl << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-04 : overloading * ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) * 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 * 2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << "does not support" << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-05 : overloading / ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) / 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 / 2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << "does not support" << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-06 : overloading * ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) * (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 * c2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c1 * std_c2 << std::endl;
		std::cout << std::endl;
		
		std::cout << YELLOW << "[ test 00-07 : overloading / ]" << BLACK << std::endl;
		std::cout << CYAN << "[ (1, 1) / (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		std::cout << c1 / c2 << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std::cout << std_c1 / std_c2 << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-08 : overloading += ]" << BLACK << std::endl;
		Complex<float>		c(1., 1.);
		std::complex<float>	std_c(1., 1.);
		std::cout << CYAN << "[ (1, 1) += 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c += 2;
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c += 2;
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) += (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c += Complex<float>(2., 2.);
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c += std::complex<float>(2., 2.);
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-09 : overloading -= ]" << BLACK << std::endl;
		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) -= 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c -= 2;
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c -= 2;
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) -= (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c -= Complex<float>(2., 2.);
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c -= std::complex<float>(2., 2.);
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		std::cout << YELLOW << "[ test 00-09 : overloading *= ]" << BLACK << std::endl;
		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) *= 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c *= 2;
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c *= 2;
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) *= (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c *= Complex<float>(2., 2.);
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c *= std::complex<float>(2., 2.);
		std::cout << std_c << std::endl;
		std::cout << std::endl;
		
		std::cout << YELLOW << "[ test 00-09 : overloading /= ]" << BLACK << std::endl;
		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) /= 2 ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c /= 2;
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c /= 2;
		std::cout << std_c << std::endl;
		std::cout << std::endl;

		c = Complex<float>(1., 1.);
		std_c = std::complex<float>(1., 1.);
		std::cout << CYAN << "[ (1, 1) /= (2, 2) ]" << BLACK << std::endl;
		std::cout << MAGENTA <<  "Complex class: "  << BLACK;
		c /= Complex<float>(2., 2.);
		std::cout << c << std::endl;
		std::cout << MAGENTA <<  "std::complex:  "  << BLACK;
		std_c /= std::complex<float>(2., 2.);
		std::cout << std_c << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 01: add, subtract and scale ]" << BLACK << std::endl;
	{
		std::cout << YELLOW << "[ test 01-01 : vector, matrix class ]" << BLACK << std::endl;
		{
			std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v1({Complex<float>(1., 1.), Complex<float>(2., 2.)});
			std::cout << v1 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			v1.printSize();
			std::cout << std::endl;

			std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v2({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
			std::cout << v2 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			v2.printSize();
			std::cout << std::endl;

			std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m1({{Complex<float>(1., 1.), Complex<float>(2., 2.)},
						{Complex<float>(3., 3.), Complex<float>(4., 4.)}});
			std::cout << m1 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			m1.printSize();
			std::cout << std::endl;

			std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m2({{Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)},
						{Complex<float>(4., 4.), Complex<float>(5., 5.), Complex<float>(6., 6.)},
						{Complex<float>(7., 7.), Complex<float>(8., 8.), Complex<float>(9., 9.)},});
			std::cout << m2 << std::endl;
			std::cout << MAGENTA << "size: " << BLACK;
			m2.printSize();
			std::cout << std::endl;
		}
		std::cout << YELLOW << "[ test 01-02 : add ]" << BLACK << std::endl;
		{
			std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v1({Complex<float>(1., 1.), Complex<float>(2., 2.)});
			Vector<Complex<float>> v2({Complex<float>(3., 3.), Complex<float>(4., 4.)});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v1 + v2: " << BLACK << std::endl;
			v1.add(v2);
			std::cout << v1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v3({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
			Vector<Complex<float>> v4({Complex<float>(4., 4.), Complex<float>(5., 5.), Complex<float>(6., 6.)});
			std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
			std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
			std::cout << MAGENTA << "v3 + v4: " << BLACK << std::endl;
			v3.add(v4);
			std::cout << v3 << std::endl;
			std::cout << std::endl;
		}
		std::cout << std::endl;
		// std::cout << YELLOW << "[ test 01-03 : subtract ]" << BLACK << std::endl;
	}
	return (0);
}
