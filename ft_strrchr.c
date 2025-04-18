/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:46:22 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/16 18:50:15 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	size;

	size = ft_strlen(s);
	while (size >= 0)
	{
		if ((char)s[size] == (char)c)
			return ((char *)&s[size]);
		size--;
	}
	return (NULL);
}
/*
#include <string.h>
#include <stdio.h>

int     main(void)
{
	const char  *s = "Testing strrchr";
	char    c = 'j';
	printf("%s\n", strrchr (s, c));
	printf("%s\n", ft_strrchr (s, c));
	printf("%p\n", strrchr (s, c));
	printf("%p\n", ft_strrchr (s, c));    
}*/
