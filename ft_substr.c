/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:59:34 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/16 18:42:08 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	if (!s || start > ft_strlen(s))
	{
		return (ft_strdup(""));
	}
	if (ft_strlen(s + start) < len)
		len = ft_strlen(s + start);
	dest = (char *)malloc(len * sizeof(char) + 1);
	if (!dest)
		return (NULL);
	while (i < (unsigned int)len)
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>
int	main(void)
{
	char const	s[] = "Testing ft_substr 12345";
	printf("%s\n", s);
	printf("%s\n", ft_substr(s, 0, 0));
	free(ft_substr);
	printf("%p\n", ft_substr(s, 0, 0));
}*/
