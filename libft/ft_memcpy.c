/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/20 13:24:23 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/20 13:36:47 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memcpy(void *dest, const void *src, unsigned int n)
{
	unsigned int	i;
	char			*dest_a;
	const char		*src_a;

	dest_a = (char *)dest;
	src_a = (const char *)src;
	i = 0;
	while (i < n)
	{
		dest_a[i] = src_a[i];
		i++;
	}
	return (dest);
}
