/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 10:07:14 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 11:01:01 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*str;

	str = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (str[i] == (unsigned char)c)
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	const char str[]= "1A2A3A4A5A";
	int c = '4';
	size_t n = 7;
	char	*result = ft_memchr(str, c, n);
	if (result != NULL)
		printf ("%s\n", result);
	else
		printf("Cáracter no encontrado\n");
	return (0);
}
*/
