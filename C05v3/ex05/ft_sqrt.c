/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiin <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/01/31 14:32:16 by jiin              #+#    #+#             */
/*   Updated: 2020/02/04 15:44:47 by jiin             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long long	i;
	int			sq;

	i = 1;
	sq = 1;
	if (nb == 0)
		return (0);
	while (i * i < (long long)nb)
		i++;
	if (i * i == (long long)nb)
		return ((int)i);
	else
		return (0);
}