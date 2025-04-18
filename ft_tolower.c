/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 22:27:34 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/14 16:28:33 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*Check ft_toupper documentation*/

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + 32;
		return (c);
	}
	return (c);
}
/*
#include <stdio.h>
#include <ctype.h>
int     main(void)
{
	char    c = '5';
	printf("%i\n",tolower(c));
	printf("%i\n", ft_tolower(c));    
}*/
