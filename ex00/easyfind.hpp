/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 01:21:42 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 01:58:04 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>
#include <list>

using std::cout;
using std::endl;

template <typename T> void easyfind(T& container, size_t find) {
	typename T::iterator itr = std::find(container.begin(), container.end(), find);
	if (itr == container.end())
		cout << "Number not found in the container." << endl;
	else
		cout << "Number found in the container." << endl;
}

#endif
