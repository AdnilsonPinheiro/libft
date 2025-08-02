/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:59:11 by adpinhei          #+#    #+#             */
/*   Updated: 2025/08/02 20:10:26 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//num is the number of elements in the destination pointer
//size is how many bytes each element is composed of
/*#include <stdlib.h>
#include <stddef.h>
#include <string.h>*/
#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*ptr;

	if (num == 0 || size == 0)
		return (malloc(0));
	ptr = (void *)malloc(size * num);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, (num * size));
	return ((void *)ptr);
}
