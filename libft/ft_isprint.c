/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:43:41 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 09:25:37 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_print_check(char check)
{
	if (check >= ' ' && check <= '~')
		return (1);
	return (0);
}

int			ft_isprint(char *str)
{
	int i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i])
	{
		if (ft_print_check(str[i]))
			i++;
		else
			return (0);
	}
	return (1);
}
