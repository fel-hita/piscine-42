/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 07:15:35 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/05 14:42:16 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int n, int pow)
{
	if (pow < 0)
	{
		return (0);
	}
	else if (pow == 0)
	{
		return (1);
	}
	else
	{
		return (n * ft_recursive_power(n, pow - 1));
	}
}
