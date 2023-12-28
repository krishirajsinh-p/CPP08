/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 02:02:36 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 07:50:10 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int N) : size(N)
{
}

Span::Span(const Span &src)
{
	*this = src;
}

Span &Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		size = rhs.size;
		vec = rhs.vec;
	}
	return *this;
}

Span::~Span()
{
}

void Span::addNumber(int n)
{
	if (vec.size() > size)
		throw std::out_of_range("no more space in the container to add numbers.");
	vec.push_back(n);
}

size_t Span::shortestSpan() const
{
	if (size < 2)
		throw std::out_of_range("not enough number to calculate span");
	vector<int> sortedVec(vec);
	std::sort(sortedVec.begin(), sortedVec.end());
	size_t min = Span::longestSpan();
	for (vector<int>::const_iterator it = sortedVec.begin(); it != sortedVec.end() - 1; ++it)
	{
		size_t span = std::abs(*(it + 1) - *it);
		if (span < min)
			min = span;
	}
	return min;
}

size_t Span::longestSpan() const
{
	if (size < 2)
		throw std::out_of_range("not enough number to calculate span");
	return *(std::max_element(vec.begin(), vec.end())) - *(std::min_element(vec.begin(), vec.end()));
}

void Span::addNumber(vector<int>::const_iterator start, vector<int>::const_iterator end)
{
	if (vec.size() + std::distance(start, end) > size)
		throw std::out_of_range("no more space in the container to add numbers.");
	vec.insert(vec.end(), start, end);
}

const vector<int> *Span::getVector() const
{
	return &vec;
}

std::ostream &operator<<(std::ostream &o, const Span &v)
{
	if (v.getVector()->size() > 0)
	{
		for (vector<int>::const_iterator it = v.getVector()->begin(); it != v.getVector()->end(); ++it)
			o << "[" << *it << "] ";
	}
	else
		o << "[]";
	return o;
}
