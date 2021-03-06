/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 16:05:47 by modnosum          #+#    #+#             */
/*   Updated: 2018/09/07 17:04:22 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ft/string.h>

char const		*ft_strnstr(const char *haystack, const char *needle,
				size_t n)
{
	char const	*p;
	size_t		len;

	len = ft_strlen(needle);
	if (len == 0)
		return ((char*)haystack);
	p = (char*)haystack;
	while ((p = ft_strchr(p, *needle)) != 0)
	{
		if ((unsigned long)(p - haystack + len) > n)
			return (NULL);
		if (ft_strncmp(p, needle, len) == 0)
			return (p);
		p++;
	}
	return (NULL);
}
