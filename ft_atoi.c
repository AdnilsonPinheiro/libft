/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 15:57:34 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/18 19:25:03 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
Skips the initial spaces and ISSPACE(3)
Cerifies for ONE sign. If neg, changes the signaler from one to minus one.
Iterates the string while it has digits and exists
*/

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	res;

	i = 0;
	sign = 1;
	res = 0;
	while ((str[i] == ' ') || (str[i] >= '\t' && str[i] <= '\r'))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9' && str[i])
	{
		res = res * 10 + (str[i] - '0');
		i++;
	}
	res = res * sign;
	return (res);
}
/*
#include <stdlib.h>
#include <stdio.h>
int	main(void)
{
	char	*str = "1322670498";
	printf("%i\n", ft_atoi(str));
	printf("%i\n", atoi(str));
}*/
