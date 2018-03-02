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
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_isalnum(int c);
int     ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strncpy(char *dest, const char *src, size_t n);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t n);
char	*ft_strncat(char *dest, const char *src, size_t nb);
char	*ft_strrchr(const char *str, int c);
char	*ft_strdup(const char *src);
char	*ft_strcpy(char *dest, const char *src);
int		ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strchr(const char *str, int c);
#endif
