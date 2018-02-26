/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 16:30:54 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 17:59:40 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(char *str, char *to_find, int n)
{
	int i;
	int j;

	i = 0;
	while (i < n)
	{
		if (str[i] == '\0')
			return (0);
		j = 0;
		while (str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		if (str[i + j] == '\0')
			return (0);
		i++;
	}
	return (0);
}
