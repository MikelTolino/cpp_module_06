/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:42:06 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/15 13:44:54 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert(char const *str)
{
	std::stringstream ss;
	ss << str;
	ss >> this->_integer;
	this->_point = std::atof(str);

	this->_c = static_cast<char>(this->_point);
	if (this->_c < 32 || this->_c > 126)
	{
		std::cout << "Character no representable\n";
	}
}

Convert::~Convert()
{
	return;
}

int Convert::getInteger( void ) const
{
	return this->_integer;
}

float Convert::getFloat( void ) const
{
	return this->_point;
}

char Convert::getChar( void ) const
{
	return this->_c;
}

void Convert::showConversion( void ) const
{
	std::cout << "Integer: " << this->getInteger() << std::endl;
	std::cout << "Char: " << this->getChar() << std::endl;
	std::cout << "Float: " << this->getFloat() << std::endl;
}