/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: megoz <megoz@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 17:32:45 by megoz             #+#    #+#             */
/*   Updated: 2024/11/16 20:50:30 by megoz            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	digit_counter(long nb)
{
	int	counter;

	counter = 0;
	if (nb < 0)
	{
		nb *= -1;
		counter++;
	}
	while (nb > 9)
	{
		nb /= 10;
		counter++;
	}
	counter++;
	return (counter);
}

static void	number_to_char(long nb, char *str, int *i)
{
	if (nb < 0)
	{
		nb *= -1;
		*str = '-';
		*i += 1;
	}
	if (nb > 9)
	{
		number_to_char(nb / 10, str, i);
		number_to_char(nb % 10, str, i);
	}
	else
	{
		str[*i] = nb + '0';
		*i += 1;
	}
}

char	*ft_itoa(int n)
{
	long	nb;
	char	*str;
	int		digit_count;
	int		i;

	i = 0;
	nb = n;
	digit_count = digit_counter(nb);
	str = malloc(sizeof(char) * (digit_count + 1));
	if (!str)
		return (NULL);
	number_to_char(nb, str, &i);
	str[i] = '\0';
	return (str);
}
