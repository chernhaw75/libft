/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/23 08:17:17 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/28 16:22:49 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include "libft.h"

static char	*malloc_s1(size_t sublen)
{
	char	*s1;

	s1 = malloc((sublen + 1) * sizeof(char));
	return (s1);
}

static char	*create_sub(char const *s, char *s1,
		size_t sublen, unsigned int start)
{
	size_t	j;

	j = 0;
	while (j < sublen)
	{
		s1[j] = s[start + j];
		j++;
	}
	s1[j] = '\0';
	return (s1);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	str_len;
	size_t	sublen;

	str_len = ft_strlen(s);
	if (start >= str_len)
		sublen = 0;
	else
	{
		sublen = str_len - start;
		if (sublen > len)
			sublen = len;
	}
	s1 = malloc_s1(sublen);
	if (!s1)
		return (NULL);
	return (create_sub(s, s1, sublen, start));
}
