/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:48:45 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/17 16:49:18 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncmp(const char *str1, const char *str2, size_t num)
{
	size_t i;

	i = 0;
	while ((*str1 == *str2) && *str1 && (i < num))
	{
		str1++;
		str2++;
		i++;
	}
	return ((unsigned char)*str1 - (unsigned char)*str2);
}
