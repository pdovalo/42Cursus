/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:01:33 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 11:29:13 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_1;
	unsigned char	*s2_1;

	i = 0;
	s1_1 = (unsigned char *)s1;
	s2_1 = (unsigned char *)s2;
	while (i < n)
	{
		if (s1_1[i] != s2_1[i])
			return (s1_1[i] - s2_1[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "A";
	char s2[] = "aBCasdasd";
	int	result = ft_memcmp(s1, s2, 0);
	if (result == 0)
		printf ("s1 y s2 son iguales\n");
	if (result < 0)
		printf ("s1 es menor que s2\n");
	if (result > 0)
		printf ("s1 es mayor que s2\n");
	printf ("El retorno de la función es: %d\n", result);
	return (0);
}*/
