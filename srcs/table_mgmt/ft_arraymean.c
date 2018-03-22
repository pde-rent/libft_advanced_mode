/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_arraymean.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pde-rent <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/27 14:29:56 by pde-rent          #+#    #+#             */
/*   Updated: 2018/01/23 18:15:44 by pde-rent         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_arraymean(int *tab, int n)
{
	int	i;
	int	sum;

	if (!tab)
		return (0);
	i = -1;
	sum = tab[i];
	while (++i <= n)
		sum += tab[i];
	return (sum / n);
}
