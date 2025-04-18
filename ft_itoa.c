/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 21:47:23 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/16 19:14:10 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_count_digits(int n)
{
	int	count;

	count = 0;
	if (n == INT_MIN)
		return (11);
	if (n < 0)
	{
		count++;
		n *= -1;
	}
	while (n >= 10)
	{
		n /= 10;
		count++;
	}
	return (++count);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;

	if (n == INT_MIN)
		return (ft_strdup("-2147483648"));
	len = ft_count_digits(n);
	res = (char *)malloc((sizeof(char) * (len + 1)));
	if (!res)
		return (NULL);
	if (n < 0)
	{
		res[0] = '-';
		n *= -1;
	}
	res[len] = '\0';
	while (len > (res[0] == '-'))
	{
		res[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (res);
}
/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int	n = -2147483648;
	printf("%s\n", ft_itoa(n));
}*/
