/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:27:16 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/27 08:39:32 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <libft.h>

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[j]);
		i--;
	}
	if (c == '\0')
		return ((char *)&s[ft_strlen(s)]);
	return (NULL);
}

/*int	main(void)
{
	const char str[]= "1A2A3A4A5A";
	int c = '4';
	char	*result = ft_strrchr(str, c);
	if (result != NULL)
		printf ("%s\n", result);
	else
		printf("Cáracter no encontrado\n");
	return (0);
}*/
