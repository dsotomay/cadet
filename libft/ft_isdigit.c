/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/20 19:27:12 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/21 09:19:58 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_num_check(char check)
{
	return (check >= '0' && check <= '9');
}

int			ft_isdigit(int c)
{
	unsigned char uc;

	uc = (unsigned char)c;
	if (ft_num_check(uc))
		return (1);
	return (0);
}
