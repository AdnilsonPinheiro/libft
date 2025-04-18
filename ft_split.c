/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adpinhei <adpinhei@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 16:29:47 by adpinhei          #+#    #+#             */
/*   Updated: 2025/04/17 15:59:56 by adpinhei         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*counts the number of substrings to be generated
check resets everytime it encounters the separator
this way we only increment count one time for each separator*/
static int	ft_count(char const *s, char c)
{
	int	count;
	int	check;

	count = 0;
	check = 0;
	while (*s)
	{
		if (*s != c && check == 0)
		{
			check = 1;
			count++;
		}
		else if (*s == c)
			check = 0;
		s++;
	}
	return (count);
}
/*calculates the size of each substring*/

static int	ft_sublen(char const *s, char c)
{
	int	len;

	len = 0;
	while (*s && *s != c)
	{
		len++;
		s++;
	}
	return (len);
}

static void	ft_free(char **res, int index)
{
	int	i;

	i = 0;
	while (i < index)
	{
		free(res[i]);
		i++;
	}
	free(res);
}
/*n_substr is the number of substrings to be generated
i the counter to iterate the substrings (char**)
in the loop we iterate the 's' instead of using a second counter.
This way we can pass the new starting adress as ft_substr 1st
parameter and '0' as second parameter. It also makes sure ft_sublen
always works. Lastly, "s += ft_sublen(s, c) makes the pointer
jump the exact amount of characters we just assigned to res[i]"*/

char	**ft_split(char const *s, char c)
{
	int		n_substr;
	int		i;
	char	**res;

	n_substr = ft_count(s, c);
	i = 0;
	res = (char **)malloc(sizeof(char *) * (n_substr + 1));
	if (!res || !s)
		return (NULL);
	while (i < n_substr)
	{
		while (*s && *s == c)
			s++;
		res[i] = ft_substr(s, 0, ft_sublen(s, c));
		if (!res[i])
		{
			ft_free(res, i);
			return (NULL);
		}
		s += ft_sublen(s, c);
		i++;
	}
	res[i] = NULL;
	return (res);
}
