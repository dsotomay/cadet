/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/01 14:48:38 by dysotoma          #+#    #+#             */
/*   Updated: 2018/03/01 14:48:46 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const char *str;

	str = (const char *)s;
	while (*str != (unsigned char)c && n--)
		if (!*str++ && !n--)
			return (0);
	return ((char *)str);
}
