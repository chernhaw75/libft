/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchern-h <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/22 09:09:20 by tchern-h          #+#    #+#             */
/*   Updated: 2026/09/22 09:11:59 by tchern-h         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isdigit(int c )
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

/*
#include <stdio.h>
int main()
{
    int c = '5';
    if (ft_isdigit(c))
        printf("%c is a digit.\n", c);
    else
        printf("%c is not a digit.\n", c);
    return 0;
}
*/
