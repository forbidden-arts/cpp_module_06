/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/02 10:13:55 by dpalmer           #+#    #+#             */
/*   Updated: 2023/11/02 10:32:25 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
	//Because we're building a "fake" list, we need to do it in reverse.
	Data ptr2;
	ptr2.name = "Rasmus Rask";
	ptr2.age = 10;
	ptr2.next = NULL;

	Data ptr;
	ptr.name = "Dan Palmer";
	ptr.age = 42;
	ptr.next = &ptr2;

	std::cout << "Original:" <<
				"\n\taddress: " << &ptr <<
				"\n\tname: " << ptr.name <<
				"\n\tage: " << ptr.age <<
				"\n\taddress next: " << ptr.next <<
	std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl << std::endl;

	Serializer a;

	Data *reserialized_struct = a.unserialize(a.serialize(&ptr));

	std::cout << "Reserialized:" <<
				"\n\taddress: " << reserialized_struct <<
				"\n\tname: " << reserialized_struct->name <<
				"\n\tage: " << reserialized_struct->age <<
				"\n\taddress next: " << reserialized_struct->next <<
	std::endl << std::endl;
	std::cout << "\taddress ptr2: " << &ptr2 <<
				"\n\tname: " << ptr2.name <<
				"\n\tage: " << ptr2.age <<
				"\n\taddress next: " << ptr2.next <<
	std::endl;

	return (0);
}
