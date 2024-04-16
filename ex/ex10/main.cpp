/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 21:57:26 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/16 05:16:13 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../matrix/incs/Matrix.hpp"
#include "../Color.hpp"

int	main(void)
{
	std::cout << YELLOW << "[ test 01: examples on the subject ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ ex01 ]" << BLACK << std::endl;
		Matrix<float>	m1({{1., 0., 0.}, {0., 1., 0.}, {0., 0., 1.}});
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m1: " << BLACK << std::endl;
		std::cout << m1.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex02 ]" << BLACK << std::endl;
		Matrix<float>	m2({{1., 2.}, {3., 4}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m2: " << BLACK << std::endl;
		std::cout << m2.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex03 ]" << BLACK << std::endl;
		Matrix<float>	m3({{1., 2.}, {2., 4}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m3: " << BLACK << std::endl;
		std::cout << m3.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ ex04 ]" << BLACK << std::endl;
		Matrix<float>	m4({{8., 5., -2., 4., 28.}, {4., 2.5, 20., 4., -4}, {8., 5., 1., 4., 17.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m4: " << BLACK << std::endl;
		std::cout << m4.row_echelon() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 02 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 1 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{7.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m1: " << BLACK << std::endl;
		std::cout << m1.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 1 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2({{2., 3.}});
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m2: " << BLACK << std::endl;
		std::cout << m2.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 1 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{4., -3., 8.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m3: " << BLACK << std::endl;
		std::cout << m3.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 1 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{4., -3., 8., 2.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m4: " << BLACK << std::endl;
		std::cout << m4.row_echelon() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 03 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 2 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{7.}, {-8.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m1: " << BLACK << std::endl;
		std::cout << m1.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2{{{3., 8.}, {-7., 6}}};
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m2: " << BLACK << std::endl;
		std::cout << m2.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{11, -13, 2.9}, {-3.9, 22, 12}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m3: " << BLACK << std::endl;
		std::cout << m3.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{4., -3., 2., -1.}, {-11., 22, -33., 44}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m4: " << BLACK << std::endl;
		std::cout << m4.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 2 by 5 matrix ]" << BLACK << std::endl;
		Matrix<float>	m5({{4., -3., 2., -1., 3.1}, {-11., 22, -33., 44, -3.4}});
		std::cout << MAGENTA << "m5: " << BLACK << std::endl << m5 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m5: " << BLACK << std::endl;
		std::cout << m5.row_echelon() << std::endl;
		std::cout << std::endl;
	}
	std::cout << std::endl;
	std::cout << YELLOW << "[ test 04 ]" << BLACK << std::endl;
	{
		std::cout << CYAN << "[ 3 by 1 matrix ]" << BLACK << std::endl;
		Matrix<float>	m1{{{7.}, {-8.}, {2.}}};
		std::cout << MAGENTA << "m1: " << BLACK << std::endl << m1 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m1: " << BLACK << std::endl;
		std::cout << m1.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 2 matrix ]" << BLACK << std::endl;
		Matrix<float>	m2{{{3., 1.4}, {-22., -7.}, {32.1, 76.4}}};
		std::cout << MAGENTA << "m2: " << BLACK << std::endl << m2 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m2: " << BLACK << std::endl;
		std::cout << m2.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 3 matrix ]" << BLACK << std::endl;
		Matrix<float>	m3({{112, -13, 2.9}, {-3.9, 242, 12}, {87., 76.3, 98.}});
		std::cout << MAGENTA << "m3: " << BLACK << std::endl << m3 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m3: " << BLACK << std::endl;
		std::cout << m3.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 4 matrix ]" << BLACK << std::endl;
		Matrix<float>	m4({{3., -88., 21., 38.}, {-151., 212, -3.2, 0.6}, {72.5, 8., 98.2, 55.}});
		std::cout << MAGENTA << "m4: " << BLACK << std::endl << m4 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m4: " << BLACK << std::endl;
		std::cout << m4.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 5 matrix ]" << BLACK << std::endl;
		Matrix<float>	m5({{3., -88., 21., 38., 33.}, {-151., 212, -3.2, 0.6, 2.1}, {72.5, 8., 98.2, 55., 333.}});
		std::cout << MAGENTA << "m5: " << BLACK << std::endl << m5 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m5: " << BLACK << std::endl;
		std::cout << m5.row_echelon() << std::endl;
		std::cout << std::endl;

		std::cout << CYAN << "[ 3 by 6 matrix ]" << BLACK << std::endl;
		Matrix<float>	m6({{3., 2.2, -88., 21., 38., 33.}, {-151., -1.6, 212, -3.2, 0.6, 2.1}, {121., 72.5, 8., 98.2, 55., 333.}});
		std::cout << MAGENTA << "m6: " << BLACK << std::endl << m6 << std::endl;
		std::cout << MAGENTA << "row-echelon form of m6: " << BLACK << std::endl;
		std::cout << m6.row_echelon() << std::endl;
		std::cout << std::endl;
	}
	std::cout << "to check the answers:" << std::endl
		<< "https://www.emathhelp.net/en/calculators/linear-algebra/reduced-row-echelon-form-rref-calculator/" << std::endl;
	return (0);
}
