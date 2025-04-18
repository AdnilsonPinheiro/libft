/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 18:41:59 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/16 18:15:02 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && i + j < len)
		{
			if (little[j + 1] == '\0')
			{
				return ((char *)&big[i]);
			}
			j++;
		}
		i++;
	}
	return (NULL);
}

/*
#include <bsd/string.h>
#include <stdio.h>

int     main(void)
{
	const char big[] = "lorem ipsum dolor sit amet";
	const char little[] = "";
	printf("%s\n", strnstr(big, little, 0));
	printf("%s\n", ft_strnstr(big, little, 0));
	printf("%p\n", strnstr(big, little, 0));
	printf("%p\n", ft_strnstr(big, little, 0));
}*/
