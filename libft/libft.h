/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dysotoma <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/02/22 09:26:59 by dysotoma          #+#    #+#             */
/*   Updated: 2018/02/23 12:13:52 by dysotoma         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <unistd.h>

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(const char *str);
void    *ft_memset(void *b, int c, size_t len);
void    ft_bzero(void *str, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
char	*ft_strstr(const char *str, const char *to_find);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void    *ft_memmove(void *dst, const void *src, size_t len);
int		ft_isalnum(int c);
int     ft_isalpha(int c);
int		ft_isdigit(int c);
#endif
