/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Linear.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhwang <yhwang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/06 01:14:00 by yhwang            #+#    #+#             */
/*   Updated: 2024/04/06 07:19:25 by yhwang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LINEAR_HPP
# define LINEAR_HPP

#include "./Vector.hpp"

template <typename K>
Vector<K>	linearCombination(const std::vector<Vector<K>> &u, const Vector<K> &cofs);

#include "./Linear.cpp"

#endif
