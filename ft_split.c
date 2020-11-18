/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrambton <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 16:30:48 by hrambton          #+#    #+#             */
/*   Updated: 2020/11/18 21:14:22 by hrambton         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char  **ft_split(char const *s, char c)
{
  char    **res;
  char    **start;
  char    *wend;
  size_t    k;
  
  if (!s)
    return (NULL);
  if (!(res = (char **)malloc((ft_count_words(s,c)+1
}
