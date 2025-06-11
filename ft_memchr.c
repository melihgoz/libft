/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:03:59 by megoz             #+#    #+#             */
/*   Updated: 2024/11/14 19:41:49 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	int	idx;

	idx = 0;
	while (n-- > 0)
	{
		if (((unsigned char *)s)[idx] == (unsigned char)c)
			return ((void *)&s[idx]);
		idx++;
	}
	return (0);
}
