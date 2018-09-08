/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft/memory.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@gmail.com>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/13 18:23:04 by modnosum          #+#    #+#             */
/*   Updated: 2018/03/13 18:42:13 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stdlib.h>

void	*ft_memncpy(void *dst, void *src, size_t n);

void	ft_common_deleter(void *mem, size_t size);

#endif