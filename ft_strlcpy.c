/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 20:26:54 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/14 21:59:54 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((i < size - 1) && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	return ((ft_strlen(src)));
}

/*
#include <bsd/string.h>
#include <stdio.h>
int     main(void)
{
	char    src[] = "teste123";
	char    dest[sizeof(src)] = "blabla";
	printf("%s\n", src);
	strlcpy (dest, src, 0);
	printf("%s\n", dest);
	ft_strlcpy (dest, src, 0);
	printf("%s\n", dest);
}*/
