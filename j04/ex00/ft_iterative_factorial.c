/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 06:27:44 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/05 15:09:55 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int n)
{
	int i;
	int fact;

	if (n == 0 || n == 1)
			return (1);
	else if (n < 13 && n > 1)
	{
		fact = 1;
		i = n;
		while (i > 0)
		{
			fact *= i;
			i--;
		}
		return (fact);
	}
	else
		return (0);
}
