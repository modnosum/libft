/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   string.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:43:34 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/13 15:12:07 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRING_H
# define STRING_H

# include <stddef.h>
# include <ft/bool.h>

size_t					ft_strlen(const char *str);

char					*ft_strnew(size_t size, char c);
char					*ft_strfill(char *dst, size_t len, char c);

char					*ft_resize_str(const char *src, size_t size,
						size_t new_size);

char					*ft_strdup(char const *src);
char					*ft_strndup(char const *src, size_t n);

char					*ft_strcpy(char *dst, const char *src);
char					*ft_strncpy(char *dst, const char *src, size_t len);

char					*ft_strcat(char *s1, const char *s2);
char					*ft_strncat(char *s1, const char *s2, size_t n);

char const				*ft_strstr(const char *haystack, const char *needle);
char const				*ft_strnstr(const char *haystack, const char *needle,
						size_t n);

int						ft_strcmp(const char *s1, const char *s2);
int						ft_strncmp(const char *s1, const char *s2, size_t n);

char const				*ft_strchr(char const *str, char c);
char const				*ft_strrchr(char const *str, char c);

t_bool					ft_str_is_digits(char const *str);

char const				*ft_strstarts(char const *str, char const *start);
char const				*ft_strends(char const *str, char const *end);

int						ft_strequ(const char *s1, const char *s2);
int						ft_strnequ(const char *s1, const char *s2, size_t n);

int						ft_strequ_ic(const char *s1, const char *s2);
int						ft_strnequ_ic(const char *s1, const char *s2, size_t n);

char					*ft_toupper_s(char *str);

/*
** Count @c/@s occurences in @str
*/

size_t					ft_strcc(char const *str, char c);
size_t					ft_strcs(char const *str, char const *s);

char					*ft_strrev(char *str);

char					*ft_strsub(const char *s, size_t start,
						size_t len);
char					*ft_strjoin(const char *s1, const char *s2);
char					*ft_strtrim(const char *s);

/*
** Wide string.
*/

char					*ft_wstrncpy(char *dst, wchar_t const *src, size_t n);
size_t					ft_wstrlen(wchar_t const *str);
size_t					ft_wstrclen(wchar_t const *str, int is_prec,
						size_t precision);

#endif
