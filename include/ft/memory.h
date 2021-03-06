/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memory.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: modnosum <modnosum@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/21 15:38:41 by modnosum          #+#    #+#             */
/*   Updated: 2018/10/17 04:46:41 by modnosum         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MEMORY_H
# define MEMORY_H

# include <stdlib.h>

void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memset(void *ptr, int c, size_t n);

void	ft_common_deleter(void *mem, size_t size);

#endif
