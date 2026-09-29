/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 14:30:33 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/22 14:37:42 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*r;

	if (count != 0 && size > SIZE_MAX / count)
		return (NULL);
	r = malloc(count * size);
	if (!r)
		return (NULL);
	ft_memset(r, 0, count * size);
	return (r);
}
