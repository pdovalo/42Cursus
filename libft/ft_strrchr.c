/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 13:27:16 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/25 14:16:45 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
#include <string.h>
#include <libft.h>

static size_t	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int	j;

	j = ft_strlen(s) - 1;
	while (j >= 0)
	{
		if (s[j] == (char)c)
			return ((char *)&s[j]);
		j--;
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
}
*/
