/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 12:30:11 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/28 09:33:05 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	in_set(char c, char const *set)
{
	int	i;
	
	i = 0;
	while(set[i] != '\0')
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*result;
	
	if (!s1 || !set)
		return NULL;
	start = 0;
	while (s1[start] && in_set(s1[start], set))
		start++;
	end = ft_strlen(s1);
	while (end > start && in_set(s1[end - 1], set))
		end--;
	result = malloc(sizeof(char) * (end - start + 1));
	if (!result)
	{
		return (NULL);
	}
	i = 0;
	
	while (start < end)
	{
		result[i] = s1[start];
		i++;
		start++;
	}
	result [i] = '\0';
	return (result);
}