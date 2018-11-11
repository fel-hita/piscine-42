/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/06 21:20:55 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 18:55:21 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		letter(char *str)
{
	if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		return (1);
	else if (*str >= '0' && *str <= '9')
		return (2);
	else
		return (0);
}

void	uncap(char *str)
{
	if (*str >= 'A' && *str <= 'Z')
		*str += 32;
}

void	capitalize(char *str)
{
	if (*str >= 'a' && *str <= 'z')
		*str -= 32;
}

char	*ft_strcapitalize(char *str)
{
	int		flag;
	char	*p;

	flag = 1;
	p = str;
	while (*p != '\0')
	{
		if (letter(p) == 1)
		{
			if (flag == 1)
			{
				capitalize(p);
				flag = 0;
			}
			else
				uncap(p);
		}
		else if (letter(p) == 2)
			flag = 0;
		else
			flag = 1;
		p++;
	}
	return (str);
}
