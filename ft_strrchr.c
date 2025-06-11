/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/01 21:52:44 by megoz             #+#    #+#             */
/*   Updated: 2024/11/17 16:20:50 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen(s);
	if ((char)c == 0)
	{
		return ((char *)&s[len]);
	}
	while (len >= 0)
	{
		if ((char)c == s[len])
		{
			return ((char *)&s[len]);
		}
		len--;
	}
	return (NULL);
}
