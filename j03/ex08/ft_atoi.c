/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aoi.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/05 20:28:55 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/10 11:14:47 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	negative_max(char *str)
{
	if (str[0] == '2' && str[1] == '1' && str[2] == '4')
		if (str[3] == '7' && str[4] == '4')
			if (str[5] == '8' && str[6] == '3')
				if (str[7] == '6' && str[8] == '4' && str[9] == '8')
					return (1);
	return (0);
}

int	number_checker(char *str, int f)
{
	int	a;
	int	flag;

	flag = f;
	a = 0;
	while (*str != '\0')
		if ((*str <= '9' && *str >= 48))
		{
			a = a * 10 + ((*str) - 48);
			str++;
		}
		else
			break ;
	if (flag == 1)
		a = a * (-1);
	return (a);
}

int	ft_atoi(char *str)
{
	int flag;

	flag = 0;
	while (*str == ' ')
		str++;
	if (*str == '-')
	{
		str = str + 1;
		if (*str == '-' || *str == '+')
			return (0);
		flag = 1;
	}
	if (*str == '+')
	{
		str = str + 1;
		if (*str == '-' || *str == '+')
			return (0);
	}
	if (negative_max(str))
		return (-2147483648);
	return (number_checker(str, flag));
}
