/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 21:01:42 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/15 20:00:58 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*size must be greater then strlen(dest) because size is total final length,
AFTER concatenation. Therefore, if size <= strlen(dest), 
there is no concatenation*/
size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	unsigned int	s_dest;
	unsigned int	s_src;
	unsigned int	i;
	unsigned int	j;

	s_dest = (unsigned int)ft_strlen(dest);
	s_src = (unsigned int)ft_strlen(src);
	j = s_dest;
	i = 0;
	if (size <= s_dest || size == 0)
		return (size + s_src);
	while (size > (j + 1) && src[i] != '\0')
		dest[j++] = src[i++];
	dest[j] = '\0';
	return (s_dest + s_src);
}

/*#include <stdio.h>
#include <bsd/string.h>

int     main(void)
{
	size_t  size = 15;
	char    dest[11] = "a";
	const char  *src = "lorem";
	printf("%s\n", dest);
	printf("%zu\n",strlcat (dest, src, size));
	printf("%s\n", dest);
	printf("%zu\n", ft_strlcat (dest, src, size));
	printf("%s\n", dest);
}
*/