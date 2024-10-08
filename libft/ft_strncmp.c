/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:19:26 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 11:28:50 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*s1_1;
	unsigned char	*s2_1;

	s1_1 = (unsigned char *)s1;
	s2_1 = (unsigned char *)s2;
	i = 0;
	while (i < n && s1_1[i] != '\0' && s2_1[i] != '\0')
	{
		if (s1_1[i] != s2_1[i])
			return (s1_1[i] - s2_1[i]);
		i++;
	}
	return (0);
}

/*int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "ABB";
	int	result = ft_strncmp(s1, s2, 3);
	if (result == 0)
		printf ("s1 y s2 son iguales\n");
	if (result < 0)
		printf ("s1 es menor que s2\n");
	if (result > 0)
		printf ("s1 es mayor que s2\n");
	printf ("Y la diferencia de Ascii es: %d\n", result);
	return (0);
}*/
