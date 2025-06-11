/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 14:49:18 by megoz             #+#    #+#             */
/*   Updated: 2024/11/17 16:20:40 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			t;
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	t = 0;
	while (str1[t] != '\0' && str2[t] != '\0'
		&& t < n - 1 && str1[t] == str2[t])
		t++;
	if (n == 0)
		return (0);
	return (str1[t] - str2[t]);
}
