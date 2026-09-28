/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:06:00 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/22 14:24:44 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int		i;
	int		j;

	if (!little)
	{
		return (big);
	}
	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (little[j] && big[i + j] == little[j] && (i + j) < len)
		{
			i++;
		}
		if (little[j])
			return ((char *)(big + i));
		i++;
	}
	return (NULL);
}
