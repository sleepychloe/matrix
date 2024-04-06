/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linear.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 07:14:24 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/06 07:19:02 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Linear.hpp"

template <typename K>
Vector<K>	linearCombination(const std::vector<Vector<K>> &u, const Vector<K> &cofs)
{
	std::vector<K>	res = std::vector<K>(u[0].getSize());
	if (u.size() != cofs.getSize())
	{
		std::string	msg = "error: invalid size of the input matrix or coefficient";
		throw (msg);
	}

	for (size_t c = 0; c < u.size(); c++)
	{
		if (u[c].getSize() != res.size())
		{
			std::string	msg = "error: invalid size of the input matrix or cofficient";
			throw (msg);
		}
		for (size_t r = 0; r < u[0].getSize(); r++)
		{
			res[r] = fma(cofs.getVector()[c], u[c].getVector()[r], res[r]);
		}
	}
	return (Vector<K>(res));
}
