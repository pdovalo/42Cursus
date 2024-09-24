/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:21:38 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/24 18:16:35 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if (c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

/*int	main(void)
{
	const char str[]= "Pablete";
	int c = 'e';
	if (ft_strchr (str, c) != NULL)
		printf ("%s\n", ft_strchr(str, c));
	else
		printf("Cáracter no encontrado\n");
	return (0);
}
*/
