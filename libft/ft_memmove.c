/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:57:37 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/25 14:13:25 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
#include <libft.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned int	i;
	char			*dest_a;
	char			*temp_dest;
	const char		*src_a;

	i = 0;
	dest_a = (char *)dest;
	src_a = (const char *)src;
	while (i < n)
	{
		temp_dest[i] = src_a[i];
		i++;
	}
	temp_dest = dest_a;
	return (dest_a);
}
/*
int	main(void)
{
	char src[] = "Start stop";
	ft_memmove(src, src + 2, 3);
	printf ("%s\n", src);

	return (0);
}
*/
