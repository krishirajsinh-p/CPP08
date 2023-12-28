/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 01:21:33 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 01:58:28 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(int argc, char *argv[])
{
	if (argc != 2) {
		cout << "usage: ./easyfind <number_to_find>" << endl;
		return EXIT_FAILURE;
	}

	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

	std::vector<int> vect(arr, arr + sizeof(arr) / sizeof(int));
	std::list<int> list(arr, arr + sizeof(arr) / sizeof(int));

	easyfind(vect, std::atoi(argv[1]));
	easyfind(list, std::atoi(argv[1]));

	return EXIT_SUCCESS;
}
