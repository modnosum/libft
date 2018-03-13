/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/16 17:29:28 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:38:53 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ftctype.h>

int						ft_isascii(int c)
{
	return (c >= 0 && c <= 0177);
}