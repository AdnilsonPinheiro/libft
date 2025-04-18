/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 13:15:40 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/15 20:02:55 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int				i;
	unsigned char	*c1;
	unsigned char	*c2;

	c1 = (unsigned char *)s1;
	c2 = (unsigned char *)s2;
	i = 0;
	if (n == 0)
		return (0);
	while ((c1[i] != '\0' || c2[i] != '\0') && n > 0)
	{
		if (c1[i] != c2[i])
			return (c1[i] - c2[i]);
		i++;
		n--;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int     main(void)
{
	const char  s1[] = "test\200";
	const char s2[] = "test\0";
	printf("%d\n", strncmp(s1, s2, 6));
	printf("%d\n", ft_strncmp(s1, s2, 6));
}*/
