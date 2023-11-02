/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:13:41 by dpalmer           #+#    #+#             */
/*   Updated: 2023/11/02 10:23:04 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <string>
#include <iostream>
#include <stdint.h>	//for uintptr_t

typedef struct Data
{
	std::string	name;
	size_t		age;
	Data		*next;
}				Data;

class Serializer
{
	private:

	public:

		Serializer();
		Serializer(const Serializer &src);
		Serializer &operator=(const Serializer &src);
		~Serializer();

		uintptr_t serialize(Data *ptr);
		Data *unserialize(uintptr_t raw);
};

#endif
