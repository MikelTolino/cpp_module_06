/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmateo-t <mmateo-t@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/14 11:42:04 by mmateo-t          #+#    #+#             */
/*   Updated: 2022/06/15 13:41:47 by mmateo-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERT_HPP
# define CONVERT_HPP
# include <sstream>
# include <iostream>
# include <string>

static const std::string _pseudo[3] = {"-inff", "+inff" , "nanf"};

class Convert
{
private:
	int _integer;
	float _point;
	char _c;
public:
	Convert(char const *);
	~Convert( void );
	int getInteger( void ) const;
	float getFloat( void ) const;
	char getChar( void ) const;
	void showConversion( void ) const;
};

#endif