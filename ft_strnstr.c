/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:49:26 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 11:52:25 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int k;

	i = 0;
	if (ft_strlen(little) == 0)
		return ((char *)big);
	while (big[i] != '\0' && (size_t)i < len)
	{
		if (big[i] == little[0])
		{
			k = 1;
			while (little[k] != '\0' && big[i + k] == little[k]
					&& (size_t)(i + k) < len)
				k++;
			if (little[k] == '\0')
				return ((char*)&big[i]);
		}
		i++;
	}
	return (0);
}
