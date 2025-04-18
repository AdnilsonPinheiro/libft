/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 15:37:09 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/14 21:10:44 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *str, int c, size_t n)
{
	unsigned const char	*ustr;
	unsigned char		uc;

	ustr = (unsigned const char *)str;
	uc = (unsigned char)c;
	while (n--)
	{
		if (*ustr == uc)
			return ((void *)ustr);
		ustr++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int     main(void)
{
	const  char str[] = "Testing memchr123";
	char        c = 'j';
	printf("%s\n", (char *)memchr(str, c, 8));
	printf("%p\n", (char *)memchr(str, c, 8));
	printf("%s\n", (char *)ft_memchr(str, c, 8));
	printf("%p\n", (char *)ft_memchr(str, c, 8));
}*/
