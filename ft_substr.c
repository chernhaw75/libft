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

char	*malloc_s1(size_t sublen)
{
	char	*s1;

	s1 = malloc((sublen + 1) * sizeof(char));
	return (s1);
}

char	*create_sub(char const *s, char *s1, size_t sublen, unsigned int start)
{
	unsigned int	j;
	unsigned int	i;

	j = 0;
	i = start;
	while (j < sublen)
	{
		s1[j] = s[i];
		i++;
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
	{
		s1 = malloc(1);
		if (!s1)
			return (NULL);
		s1[0] = '\0';
		return (s1);
	}
	sublen = str_len - start;
	if (sublen > len)
		sublen = len;
	s1 = malloc_s1(sub_str_len);
	if (!s1)
		return (NULL);
	s1 = create_sub(s, s1, sublen, start);
	return (s1);
}
