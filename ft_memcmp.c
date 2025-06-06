/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 16:41:59 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/14 16:08:12 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n == 0)
		return (0);
	while (n--)
	{
		if (*str1 != *str2)
			return (*str1 - *str2);
		str1++;
		str2++;
	}
	return (0);
}

/*
#include <string.h>
#include <stdio.h>
int     main(void)
{
	const char  s1[] = "Testing memcmp";
	const char  s2[] = "Testing memcmp123";
	printf("%i\n", memcmp(s1, s2, 24));
	printf("%i\n", ft_memcmp(s1, s2, 24));
}*/