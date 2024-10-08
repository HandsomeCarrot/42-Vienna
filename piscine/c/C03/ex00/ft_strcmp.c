/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:47:14 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 15:34:46 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while ((s1[i] != '\0') || (s2[i] != '\0'))
	{
		if ((s1[i] != s2[i]))
		{
			return (s1[i] - s2[i]);
		}
		else
			i++;
	}
	return (0);
}

/*#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[] = "Hello World!";
	char	str2[] = "Hello World!";

	printf("%d", strcmp(str1, str2));
	printf("\n%d\n", ft_strcmp(str1, str2));
}*/