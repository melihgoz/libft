/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 14:35:15 by megoz             #+#    #+#             */
/*   Updated: 2024/11/17 16:19:52 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*ptr;
	int		i;
	int		j;

	if (set == NULL || s1 == NULL)
		return (NULL);
	j = ft_strlen(s1);
	i = 0;
	while (*s1 && ft_strchr(set, s1[i]))
		i++;
	while (j && ft_strchr(set, s1[j]))
		j--;
	ptr = ft_substr(s1, i, j - i + 1);
	return (ptr);
}
