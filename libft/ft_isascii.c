/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/21 20:00:14 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/23 12:04:48 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_ascii_check(char check)
{
	if (check >= 0 && check <= 127)
		return (1);
	return (0);
}

int			ft_iscii(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (ft_ascii_check(uc))
		return (1);
	return (0);
}
