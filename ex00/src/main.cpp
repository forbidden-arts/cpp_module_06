/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:57:30 by dpalmer           #+#    #+#             */
/*   Updated: 2023/11/16 10:14:31 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

#include <iostream>

int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		std::cout << "Error: no parameters\n" << "Usage: <program> <literal>" << std::endl;
		return 1;
	}

	ScalarConverter::convert(argv[1]);

	return 0;
}
