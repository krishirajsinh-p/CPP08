/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kpuwar <kpuwar@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 07:53:14 by kpuwar            #+#    #+#             */
/*   Updated: 2023/12/28 21:16:30 by kpuwar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>

using std::cout;
using std::endl;
using std::stack;

template <typename T>
class MutantStack : public stack<T>
{
	public:
		typedef typename stack<T>::container_type::iterator iterator;

		typedef typename stack<T>::container_type::const_iterator const_iterator;

		MutantStack() {
			
		}

		MutantStack(const MutantStack &src) {
			*this = src;
		}

		MutantStack& operator=(const MutantStack &rhs) {
			stack<T>::operator=(rhs);
			return *this;
		}

		~MutantStack() {
			
		}

		iterator begin()
		{
			return this->c.begin();
		}

		iterator end()
		{
			return this->c.end();
		}

		const_iterator cbegin() const
		{
			return this->c.begin();
		}

		const_iterator cend() const
		{
			return this->c.end();
		}
};

template <typename T>
std::ostream& operator<<(std::ostream& o, MutantStack<T>& rhs) {
	if (rhs.size() < 1) {
		o << "---" << endl;
		o << "[] <- top" << endl;
		o << "---";
	} else {
		o << "---" << endl;
		for (typename MutantStack<T>::iterator i = rhs.begin(); i != rhs.end(); i++) {
			if (i + 1 == rhs.end()) {
				o << "[" << *i << "] <- top" << endl;
				o << "---";
			} else
				o << "[" << *i << "]" << endl;
		}
	}
	return o;
}

#endif
