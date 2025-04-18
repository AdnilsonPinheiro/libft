/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 19:59:11 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/17 15:16:18 by adpinhei         ###   ########.fr       */
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
/*
#include <stdio.h>
int     main(void)
{
	size_t  num;
	size_t  size;
	char    *test;

	num = 8;
	size = sizeof(char);
	printf("%p\n", test = calloc(num, size));
	test = "teste OG";
	printf("%s\n", test);
	printf("%p\n", test = ft_calloc(num, size));
	test = "teste FT";
	printf("%s\n", test);
}*/
