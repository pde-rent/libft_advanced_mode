/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 20:33:59 by pde-rent          #+#    #+#             */
/*   Updated: 2017/11/27 14:26:37 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "memory_mgmt.h"

void	*ft_memcpy(void *mem2, const void *mem1, size_t n)
{
	size_t	i;

	i = -1;
	while (++i < n)
		((char*)mem2)[i] = ((char*)mem1)[i];
	return (mem2);
}
