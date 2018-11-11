/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 06:32:31 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/05 14:40:44 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int n, int pow)
{
	int var;
	int nbr;

	if (pow < 0)
		return (0);
	else if (pow == 0)
	{
		return (1);
	}
	nbr = n;
	var = pow;
	while (var > 1)
	{
		nbr *= n;
		var--;
	}
	return (nbr);
}
