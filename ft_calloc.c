/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:03:59 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 02:31:25 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t num, size_t size)
{
	void	*x;
	size_t	i;

	i = 0;
	x = malloc(num * size);
	if (!x)
		return (NULL);
	while (i < (num * size))
	{
		*((unsigned char *)x + i) = 0;
		i++;
	}
	return (x);
}
