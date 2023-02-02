/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amoubare <amoubare@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 23:57:47 by amoubare          #+#    #+#             */
/*   Updated: 2023/02/03 00:02:07 by amoubare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed( void )
{
    std::cout << "default constructor called" << std::endl;
    fixed = 0;
}

Fixed::Fixed(Fixed const & cpy)
{
    std::cout << "copy constructor called" << std::endl;
    fixed = 0;
    *this = cpy;
}

Fixed::~Fixed( void )
{
    std::cout << "destructor called" << std::endl;
}
Fixed &	Fixed::operator=( Fixed const & rhs )
{
    std::cout<< "copy assignment operator called"<< std::endl;
    if (this != &rhs)
    {
        this->fixed = rhs.getRawBits();
    }
    return *this;
}

int		Fixed::getRawBits(void) const
{
	std::cout << "getRawBits called" << std::endl;
	return fixed;
}

void	Fixed::setRawBits(int raw)
{
    std::cout << "setRawBits called" << std::endl;
	fixed = raw;
}
