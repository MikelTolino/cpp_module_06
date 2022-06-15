/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:42:01 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/15 13:39:48 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
	if (argc != 2)
	{
		std::cout << "Error: Arguments invalid\n";
		return 1;
	}
	Convert num(argv[1]);

	num.showConversion();
	return 0;
}
