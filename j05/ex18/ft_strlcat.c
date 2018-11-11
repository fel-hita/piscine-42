/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 20:14:26 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/12 15:58:22 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int				j;
	unsigned int	i;
	unsigned int	dlen;

	i = 0;
	j = 0;
	dlen = 0;
	while (*dest)
	{
		dlen++;
		dest++;
	}
	while (src[j] != '\0')
	{
		j++;
	}
	while (src[i] && i < (size - dlen - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dlen + j);
}
