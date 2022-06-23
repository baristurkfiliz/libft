/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bturkfil <bturkfil@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/23 11:53:03 by bturkfil          #+#    #+#             */
/*   Updated: 2022/06/23 12:19:15 by bturkfil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <stddef.h>

void	*ft_memcpy(void *dest, const void *src, size_t len);
void	*ft_memchr(const void *src, int c, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t n);
void	ft_bzero(void *src, size_t len);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	*ft_memset(void *dest, int val, size_t len);
size_t	ft_strlen(const char *src);
size_t	ft_strlcat(char *dest, const char *source, size_t maxlen);
char	*ft_strchr(const char *str, int c);
char	*ft_strrchr(const char *str, int c);
size_t	ft_strlcpy(char *dest, const char *source, size_t maxlen);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
char	*ft_strdup(const char *src);
char	*ft_strchr(const char *str, int c);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
int		ft_atoi(const char *str);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s1, const char *set);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t maxlen);
char	*ft_substr(char const *s, unsigned int start, size_t len);
#endif
