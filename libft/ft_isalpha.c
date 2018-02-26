/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 17:06:03 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 09:20:59 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_alpha_check(char check)
{
	if (check >= 'A' && check <= 'Z' || check >= 'a' && check <= 'z')
		return (1);
	return (0);
}

int			ft_isalpha(int c)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (ft_alpha_check(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
