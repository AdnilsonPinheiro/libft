/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:45:11 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/14 16:29:21 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Note that the standard function returns the original INT C if the upper
 case version is not available in the same locale.
Hence the return (c) both in line 23 and 25*/

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main(void)
{
	char    c = 'j';
	printf("%i\n",toupper(c));
	printf("%i\n", ft_toupper(c));    
}*/
