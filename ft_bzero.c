/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:45:09 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/22 09:48:19 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;

	ptr = (unsigned char *)s;
	while (n--)
	{
		*ptr++ = 0;
	}
}
/*
int main()
{
    char str[] = "Hello, World!";
    printf("Before ft_bzero: %s\n", str);
    ft_bzero(str, sizeof(str));
    printf("After ft_bzero: %s\n", str);
    return 0;
}
*/
