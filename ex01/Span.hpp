/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 02:02:18 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 07:15:11 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

using std::cout;
using std::endl;
using std::vector;

class Span
{
	private:
		vector<int> vec;
		unsigned int size;
		Span();
		
	public:
		Span(unsigned int N);
		Span(const Span& src);
		Span& operator=(const Span& rhs);
		~Span();

		void addNumber(int n);
		size_t shortestSpan() const;
		size_t longestSpan() const;

		const vector<int>* getVector() const;
		void addNumber(vector<int>::const_iterator start, vector<int>::const_iterator end);
};

std::ostream& operator<<(std::ostream& o, const Span& v);

#endif
