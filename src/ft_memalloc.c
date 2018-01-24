/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 12:38:57 by modnosum          #+#    #+#             */
/*   Updated: 2018/01/23 18:33:03 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void					*ft_memalloc(size_t size)
{
	unsigned char		*ptr;

	ptr = (unsigned char*)malloc(size);
	if (ptr)
		ft_bzero(ptr, size);
	return (ptr);
}
