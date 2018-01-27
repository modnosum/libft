/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   arrdel.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 18:24:53 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/27 14:29:02 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void					arrdel(void **ap, size_t size)
{
	unsigned char		*s;
	size_t				i;

	s = *((unsigned char**)ap);
	i = 0;
	while (s[i])
	{
		ft_memdel((void**)(s + i));
		i += size;
	}
	ft_memdel(ap);
}
