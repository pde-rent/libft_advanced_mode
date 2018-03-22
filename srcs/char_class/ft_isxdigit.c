/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isxdigit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <pde-rent@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/25 21:57:24 by pde-rent          #+#    #+#             */
/*   Updated: 2017/11/27 15:32:48 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isxdigit(int c)
{
	return (('0' <= c && c <= '9')
			|| ('a' <= c && c <= 'f')
			|| ('A' <= c && c <= 'F'));
}
