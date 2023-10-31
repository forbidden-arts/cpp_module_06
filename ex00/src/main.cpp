/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dpalmer <dpalmer@student.hive.fi>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:57:30 by dpalmer           #+#    #+#             */
/*   Updated: 2023/10/31 10:59:00 by dpalmer          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
	{
		std::cerr << "Usage: ./convert <input>" << std::endl;
		return (1);
	}
	try
	{
		Conversion conversion(argv[1]);
	}
	catch(const Conversion::ErrorException& e)
	{
		std::cerr << e.errCheck() << std::endl;
	}
	return (0);
}
