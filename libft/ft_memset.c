/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:29:24 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/25 14:14:20 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>

void	*ft_memset(void *str, int c, size_t n)
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
