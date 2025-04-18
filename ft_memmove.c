/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/09 19:37:48 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/15 20:00:35 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*j_dest;
	unsigned char	*j_src;

	j_dest = (unsigned char *)dest;
	j_src = (unsigned char *)src;
	i = 0;
	if (dest > src)
	{
		while (n)
		{
			n--;
			j_dest[n] = j_src[n];
		}
	}
	if (dest < src)
	{
		while (i < n)
		{
			j_dest[i] = j_src[i];
			i++;
		}
	}
	return (dest);
}
