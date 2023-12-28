/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 02:10:57 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 07:49:07 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

static int generateRandomNumber() {
    return (std::rand() % 25) + 1;
}

int main(void)
{
	cout << "----------------------" << endl;

	{
		Span sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		cout << sp << endl;

		cout << "Shortest span: " << sp.shortestSpan() << endl;
		cout << "Longest span: " << sp.longestSpan() << endl;
	}

	cout << "----------------------" << endl;

	{
		try
		{
			std::vector<int> nums(5);
			std::srand(time(NULL));
			std::generate(nums.begin(), nums.end(), generateRandomNumber);

			Span span(nums.size());
			span.addNumber(nums.begin(), nums.end());

			cout << span << endl;

			cout << "Shortest span: " << span.shortestSpan() << endl;
			cout << "Longest span: " << span.longestSpan() << endl;
		}
		catch (std::exception &e)
		{
			cout << e.what() << endl;
		}
	}

	cout << "----------------------" << endl;

	return EXIT_SUCCESS;
}
