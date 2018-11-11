/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fel-hita <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/08 19:54:40 by fel-hita          #+#    #+#             */
/*   Updated: 2018/09/08 21:17:29 by fel-hita         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int		i;
	char	*p_dest;
	char	*p_src;

	i = 0;
	p_dest = dest;
	p_src = src;
	while (*p_dest != '\0')
	{
		p_dest++;
	}
	while (*p_src != '\0' && i < nb)
	{
		*p_dest = *p_src;
		p_dest++;
		p_src++;
		i++;
	}
	*p_dest = '\0';
	return (dest);
}
