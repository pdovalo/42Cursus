/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 11:37:39 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 14:12:59 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (*needle == 0)
		return ((char *)haystack);
	i = 0;
	while (i < len && haystack[i] != '\0')
	{
		j = 0;
		while (i + j < len && needle[j] != '\0' && haystack[j + i] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)&haystack[i]);
		i++;
	}
	return (NULL);
}

/*int	main(void)
{
	char haystack[] = "Hola, esta es una cadena de ejemplo";
	char needle[] = "eje";
	size_t len = 10;
	char	*result = ft_strnstr(haystack, needle, len);

	if (result != NULL)
		printf("La subcadena es: %s\n", result);
	else
		printf("La subcadena no ha sido encontrada\n");
	return (0);
}*/
