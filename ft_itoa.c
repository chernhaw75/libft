/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 15:40:48 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/24 13:35:55 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static long	ft_is_negative(long num)
{
	if (num < 0)
		return (1);
	return (0);
}

static int	ft_set_len(int is_negative, long num)
{
	long	tmp;
	int		len;

	if (is_negative)
		len = 1;
	else
		len = 0;
	if (num == 0)
		len++;
	else
	{
		tmp = num;
		while (tmp > 0)
		{
			len++;
			tmp /= 10;
		}
	}
	return (len);
}

char	*ft_itoa(int n)
{
	long	num;
	int		len;
	char	*str;
	int		is_negative;

	num = n;
	is_negative = ft_is_negative(num);
	if (is_negative)
		num = -num;
	len = ft_set_len(is_negative, num);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (num == 0)
		str[0] = '0';
	while (num > 0)
	{
		str[--len] = (num % 10) + '0';
		num /= 10;
	}
	if (is_negative)
		str[0] = '-';
	return (str);
}
