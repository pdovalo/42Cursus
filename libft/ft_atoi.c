/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pdovalo- <pdovalo-@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 12:39:57 by pdovalo-          #+#    #+#             */
/*   Updated: 2024/09/26 14:11:35 by pdovalo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
//#include <stdio.h>

static int	ft_isspace(int c)
{
	c = (unsigned char)c;
	if (c == ' ' || c == '\f' || c == '\n' || c == '\r'
		|| c == '\t' || c == '\v')
		return (1);
	return (0);
}

int	ft_atoi(const char *nptr)
{
	int	i;
	int	sign_count;
	int	number;

	i = 0;
	sign_count = 0;
	while (ft_isspace(nptr[i]))
		i++;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign_count++;
		i++;
	}
	number = 0;
	while (nptr[i] != '\0' && nptr[i] >= '0' && nptr[i] <= '9')
	{
		number = (number * 10) + (nptr[i] - '0');
		i++;
	}
	if (sign_count % 2 != 0)
		number = -number;
	return (number);
}

/*int	main(void)
{
	int			atoi;
	const char	*c;

	c = "--+-685sdfPablos";
	atoi = ft_atoi(c);
	printf ("%d\n", atoi);
	return (0);
}*/
