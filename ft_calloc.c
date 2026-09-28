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

	r = malloc(count * size);
	if (!r)
	{
		return (NULL);
	}
	ft_memset(r, 0, count * size);
	return (r);
}
/*
int main()
{
    size_t count = 5;
    size_t size = sizeof(int);
    int *arr = (int *)ft_calloc(count, size);
    if (arr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (size_t i = 0; i < count; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
*/
