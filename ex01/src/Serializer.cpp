/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:13:57 by dpalmer           #+#    #+#             */
/*   Updated: 2023/11/02 10:24:01 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer()
{

}

Serializer::Serializer(const Serializer &src)
{

	*this = src;
}

Serializer::~Serializer()
{

}

Serializer &Serializer::operator=(const Serializer &src)
{
	if (this == &src)
		return *this;
	return *this;
}

uintptr_t	Serializer::serialize(Data *ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data	*Serializer::unserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}
