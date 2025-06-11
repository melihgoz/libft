/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 16:36:28 by megoz             #+#    #+#             */
/*   Updated: 2024/11/17 16:17:03 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*free_allocations(char **strs, size_t i)
{
	size_t	j;

	j = 0;
	while (j < i)
	{
		free(strs[j]);
		j++;
	}
	free(strs);
	return (NULL);
}

static int	countwords(char const *s, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (*(s + i))
	{
		if (*(s + i) == c)
			i++;
		else
		{
			count++;
			while (*(s + i) && *(s + i) != c)
				i++;
		}
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	size_t	len;
	char	**strs;
	size_t	i;
	size_t	j;

	if (!s)
		return (0);
	len = countwords(s, c);
	strs = (char **)ft_calloc((len + 1), sizeof(char *));
	if (!strs)
		return (0);
	i = -1;
	while (++i < len)
	{
		while (*s == c)
			s++;
		j = 0;
		while (*(s + j) != c && *(s + j))
			j++;
		*(strs + i) = ft_substr(s, 0, j);
		if (*(strs + i) == NULL)
			return ((char **)free_allocations(strs, i));
		s += j;
	}
	return (strs);
}
