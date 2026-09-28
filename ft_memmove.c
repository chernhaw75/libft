/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 10:21:41 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/28 16:06:27 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static void	copyforward(unsigned char *d, const unsigned char *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

static void	copybackward(unsigned char *d, const unsigned char *s, size_t n)
{
	while (n > 0)
	{
		n--;
		d[n] = s[n];
	}
}

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	if (n == 0)
		return (NULL);
	if ((unsigned char *)dst > (const unsigned char *)src)
	{
		copybackward((unsigned char *)dst, (const unsigned char *)src, n);
	}
	copyforward((unsigned char *)dst, (const unsigned char *)src, n);
	return (dst);
}
