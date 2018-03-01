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

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	if (*to_find == '\0')
		return ((char *)str);
	while (n && *str)
	{
		if (*to_find == '\0' || *str == '\0')
			return (0);
		if (!ft_strncmp(str, to_find, n))
			return ((char *) str);
		str++;
		n--;
	}
	return (0);
}
