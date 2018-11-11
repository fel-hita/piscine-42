/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 01:41:26 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/05 15:07:01 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int n;

	if (nb < 1)
		return (0);
	n = 2;
	if ((nb == 0) || (nb == 1))
		return (0);
	while (n <= nb / 2)
	{
		if (nb % n == 0)
			return (0);
		n++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int i;

	i = nb;
	while (ft_is_prime(i) != 1)
	{
		i++;
	}
	return (i);
}
