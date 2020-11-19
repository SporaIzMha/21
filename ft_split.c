/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:30:48 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/19 11:47:56 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void		*ft_freemem(char **r, size_t i)
{
	while (i > 0)
	{
		free(r[i - 1]);
		i--;
	}
	free(r);
	return (NULL);
}

static void		ft_setworld(char **stark, char **e, char c)
{
	while (**stark == c && **stark != 0)
		(*stark)++;
	*e = *stark;
	while (**e != c && **e != 0)
		(*e)++;
}

static size_t	ft_count_words(char const *s, char c)
{
	size_t		r;
	int			i;

	r = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
			r++;
		i++;
	}
	return (r);
}

char			**ft_split(char const *s, char c)
{
	char		**res;
	char		*stark;
	char		*e;
	size_t		k;

	if (!s)
		return (NULL);
	if (!(res = (char **)malloc((ft_count_words(s, c) + 1) * sizeof(char *))))
		return (NULL);
	e = (char *)s;
	k = 0;
	while (k < ft_count_words(s, c))
	{
		stark = e;
		ft_setworld(&stark, &e, c);
		if (!(res[k] = (char *)malloc(e - stark + sizeof(char))))
			return (ft_freemem(res, k));
		ft_memmove(res[k], stark, (e - stark));
		res[k][(e - stark) / sizeof(char)] = 0;
		k++;
	}
	res[k] = NULL;
	return (res);
}
