/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 14:19:26 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/25 14:46:52 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <libft.h>
//#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i < n)
		return (s1[i] - s2[i]);
	return (0);
}
/*
int	main(void)
{
	char s1[] = "ABC";
	char s2[] = "ABC";
	int	result = ft_strncmp(s1, s2, 3);
	if (result == 0)
		printf ("s1 y s2 son iguales\n");
	if (result < 0)
		printf ("s1 es menor que s2\n");
	else
		printf ("s1 es mayor que s2\n");
	printf ("Y la diferencia de Ascii es: %d\n", result);
	return (0);
}
*/
