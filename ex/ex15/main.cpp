/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/13 15:45:44 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/14 03:35:23 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Complex.hpp"
#include "../../matrix/incs/Vector.hpp"
#include "../../matrix/incs/Matrix.hpp"
#include "../../matrix/incs/Linear.hpp"
#include "../Utils.hpp"
#include <complex>

int	main(void)
{
	std::cout << YELLOW << "[ complex number test ]" << BLACK << std::endl;
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
	std::cout << YELLOW << "[ ex00: add, subtract and scale ]" << BLACK << std::endl;
	{
		std::cout << YELLOW << "[ ex00-01 : vector, matrix class ]" << BLACK << std::endl;
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
		std::cout << std::endl;
		std::cout << YELLOW << "[ ex00-02 : add ]" << BLACK << std::endl;
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

			std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m1({{Complex<float>(1., 1.), Complex<float>(2., 2.)},
						{Complex<float>(3., 3.), Complex<float>(4., 4.)}});
			Matrix<Complex<float>> m2({{Complex<float>(5., 5.), Complex<float>(6., 6.)},
						{Complex<float>(7., 7.), Complex<float>(8., 8.)}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m1 + m2: " << BLACK << std::endl;
			m1.add(m2);
			std::cout << m1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m3({{Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)},
						{Complex<float>(4., 4.), Complex<float>(5., 5.), Complex<float>(6., 6.)},
						{Complex<float>(7., 7.), Complex<float>(8., 8.), Complex<float>(9., 9.)},});
			Matrix<Complex<float>> m4({{Complex<float>(9., 9.), Complex<float>(8., 8.), Complex<float>(7., 7.)},
						{Complex<float>(6., 6.), Complex<float>(5., 5.), Complex<float>(4., 4.)},
						{Complex<float>(3., 3.), Complex<float>(2., 2.), Complex<float>(1., 1.)},});
			std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "m3 + m4: " << BLACK << std::endl;
			m3.add(m4);
			std::cout << m3 << std::endl;
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << YELLOW << "[ ex00-03 : subtract ]" << BLACK << std::endl;
		{
			std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v1({Complex<float>(1., 1.), Complex<float>(2., 2.)});
			Vector<Complex<float>> v2({Complex<float>(9., 9.), Complex<float>(8., 8.)});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v1 - v2: " << BLACK << std::endl;
			v1.sub(v2);
			std::cout << v1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v3({Complex<float>(9., 9.), Complex<float>(8., 8.), Complex<float>(7., 7.)});
			Vector<Complex<float>> v4({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
			std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
			std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
			std::cout << MAGENTA << "v3 - v4: " << BLACK << std::endl;
			v3.sub(v4);
			std::cout << v3 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m1({{Complex<float>(1., 1.), Complex<float>(2., 2.)},
						{Complex<float>(3., 3.), Complex<float>(4., 4.)}});
			Matrix<Complex<float>> m2({{Complex<float>(2., 2.), Complex<float>(3., 3.)},
						{Complex<float>(4., 4.), Complex<float>(5., 5.)}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m1 - m2: " << BLACK << std::endl;
			m1.sub(m2);
			std::cout << m1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m3({{Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)},
						{Complex<float>(4., 4.), Complex<float>(5., 5.), Complex<float>(6., 6.)},
						{Complex<float>(7., 7.), Complex<float>(8., 8.), Complex<float>(9., 9.)},});
			Matrix<Complex<float>> m4({{Complex<float>(9., 9.), Complex<float>(8., 8.), Complex<float>(7., 7.)},
						{Complex<float>(6., 6.), Complex<float>(5., 5.), Complex<float>(4., 4.)},
						{Complex<float>(3., 3.), Complex<float>(2., 2.), Complex<float>(1., 1.)},});
			std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
			std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
			std::cout << MAGENTA << "m3 - m4: " << BLACK << std::endl;
			m3.sub(m4);
			std::cout << m3 << std::endl;
			std::cout << std::endl;
		}
		std::cout << std::endl;
		std::cout << YELLOW << "[ ex00-04 : scaling ]" << BLACK << std::endl;
		{
			std::cout << CYAN << "[ 2d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v1({Complex<float>(1., 1.), Complex<float>(2., 2.)});
			std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
			std::cout << MAGENTA << "v1 * (2 + i): " << BLACK << std::endl;
			v1.scale(Complex<float>(2., 1.));
			std::cout << v1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3d vector ]" << BLACK << std::endl;
			Vector<Complex<float>> v2({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
			std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
			std::cout << MAGENTA << "v2 * (-3 - i): " << BLACK << std::endl;
			v2.scale(Complex<float>(-3., -1.));
			std::cout << v2 << std::endl;
			std::cout << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m1({{Complex<float>(1., 1.), Complex<float>(2., 2.)},
						{Complex<float>(3., 3.), Complex<float>(4., 4.)}});
			std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
			std::cout << MAGENTA << "m1 * (2 - i): " << BLACK << std::endl;
			m1.scale(Complex<float>(2., -1.));
			std::cout << m1 << std::endl;
			std::cout << std::endl;

			std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
			Matrix<Complex<float>> m2({{Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)},
						{Complex<float>(4., 4.), Complex<float>(5., 5.), Complex<float>(6., 6.)},
						{Complex<float>(7., 7.), Complex<float>(8., 8.), Complex<float>(9., 9.)},});
			std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
			std::cout << MAGENTA << "m2 * (-1 + 3i): " << BLACK << std::endl;
			m2.scale(Complex<float>(-1., 3.));
			std::cout << m2 << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ ex01: linear combination ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ three 3d vectors with 3d vector coefficient ]" << BLACK << std::endl;
		Vector<Complex<float>>	e1({Complex<float>(0., 1.), Complex<float>(0., 0.), Complex<float>(0., 0.)});
		Vector<Complex<float>>	e2({Complex<float>(0., 0.), Complex<float>(0., 1.), Complex<float>(0., 0.)});
		Vector<Complex<float>>	e3({Complex<float>(0., 0.), Complex<float>(0., 0.), Complex<float>(0., 1.)});
		Vector<Complex<float>>	c1({Complex<float>(10., 1.), Complex<float>(-2., 0.), Complex<float>(0.5, 0.5)});
		std::cout << MAGENTA << "e1: " << BLACK << std::endl << e1 << std::endl;
		std::cout << MAGENTA << "e2: " << BLACK << std::endl << e2 << std::endl;
		std::cout << MAGENTA << "e3: " << BLACK << std::endl << e3 << std::endl;
		std::cout << MAGENTA << "c1: " << BLACK << std::endl << c1 << std::endl;
		std::cout << MAGENTA << "liner combination {e1, e2, e3} and c1: " << BLACK << std::endl;
		std::cout << linearCombination({e1, e2, e3}, c1) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ two 3d vectors with 2d vector coefficient ]" << BLACK << std::endl;
		Vector<Complex<float>>	v1({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
		Vector<Complex<float>>	v2({Complex<float>(0., 0.), Complex<float>(10., 10.), Complex<float>(-100., -100.)});
		Vector<Complex<float>>	c2({Complex<float>(10., -2.), Complex<float>(-2., 10.)});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "c2: " << BLACK << std::endl << c2 << std::endl;
		std::cout << MAGENTA << "liner combination {v1, v2} and c2: " << BLACK << std::endl;
		std::cout << linearCombination({v1, v2}, c2) << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ ex02: linear interpolation ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2d vectors ]" << BLACK << std::endl;
		Vector<Complex<float>>	v1({Complex<float>(2., 2.), Complex<float>(1., 1.)});
		Vector<Complex<float>>	v2({Complex<float>(4., 4.), Complex<float>(2., 2.)});
		std::cout << MAGENTA << "v1: " << BLACK << std::endl << v1 << std::endl;
		std::cout << MAGENTA << "v2: " << BLACK << std::endl << v2 << std::endl;
		std::cout << MAGENTA << "liner interpolation v1, v2 and 0.3: " << BLACK << std::endl;
		std::cout << lerp(v1, v2, 0.3f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d vectors ]" << BLACK << std::endl;
		Vector<Complex<float>>	v3({Complex<float>(1., 1.), Complex<float>(2., 2.), Complex<float>(3., 3.)});
		Vector<Complex<float>>	v4({Complex<float>(101., 101.), Complex<float>(102., 102.), Complex<float>(103., 103.)});
		std::cout << MAGENTA << "v3: " << BLACK << std::endl << v3 << std::endl;
		std::cout << MAGENTA << "v4: " << BLACK << std::endl << v4 << std::endl;
		std::cout << MAGENTA << "liner interpolation v3, v4 and 0.65: " << BLACK << std::endl;
		std::cout << lerp(v3, v4, 0.65f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2d matrix ]" << BLACK << std::endl;
		Matrix<Complex<float>> m1({{Complex<float>(2., 2.), Complex<float>(1., 1.)},
					{Complex<float>(3., 3.), Complex<float>(4., 4.)}});
		Matrix<Complex<float>> m2({{Complex<float>(20., 20.), Complex<float>(10., 10.)},
					{Complex<float>(30., 30.), Complex<float>(40., 40.)}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "liner interpolation m1, m2 and 0.5: " << BLACK << std::endl;
		std::cout << lerp(m1, m2, 0.5f) << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3d matrix ]" << BLACK << std::endl;
		Matrix<Complex<float>> m3({{Complex<float>(11., 11.), Complex<float>(12., 12.), Complex<float>(13., 13.)},
					{Complex<float>(14., 14.), Complex<float>(15., 15.), Complex<float>(16., 16.)},
					{Complex<float>(17., 17.), Complex<float>(18., 18.), Complex<float>(19., 19.)}});
		Matrix<Complex<float>> m4({{Complex<float>(12., 12.), Complex<float>(13., 13.), Complex<float>(14., 14.)},
					{Complex<float>(15., 15.), Complex<float>(16., 16.), Complex<float>(17., 17.)},
					{Complex<float>(18., 18.), Complex<float>(19., 19.), Complex<float>(20., 20.)}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "liner interpolation m3, m4 and 0.4: " << BLACK << std::endl;
		std::cout << lerp(m3, m4, 0.4f) << std::endl;
		std::cout << std::endl;
	}
	return (0);
}
