/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:29:24 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/20 13:17:45 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *str, int c, unsigned int n)
{
	unsigned int	i;
	char			*str_a;

	str_a = (char *)str;
	i = 0;
	while (i < n)
	{
		str_a[i] = c;
		i++;
	}
	return (str);
}
