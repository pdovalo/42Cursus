/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 12:54:20 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 11:07:05 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>

void	*ft_bzero(void *str, size_t n)
{
	unsigned int	i;
	char			*str_a;

	str_a = (char *)str;
	i = 0;
	while (i < n)
	{
		str_a[i] = '\0';
		i++;
	}
	return (str);
}
