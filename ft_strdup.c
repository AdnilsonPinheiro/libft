/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 21:02:26 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/22 16:01:20 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dest;
	size_t	length;

	length = ft_strlen(s);
	dest = (char *)malloc(length * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	ft_memcpy(dest, s, (length + 1));
	return (dest);
}
/*
#include <stdio.h>
int     main(void)
{
	const char  s[] = "lorem ipsum dolor sit amet";
	printf("%s\n", strdup(s));
	printf("%s\n", ft_strdup(s));
	printf("%p\n", strdup(s));
	printf("%p\n", ft_strdup(s));
}*/
