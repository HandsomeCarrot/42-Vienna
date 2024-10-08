/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:47:14 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 16:52:41 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && n > i)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char	str1[1] = "a";
	char	str2[] = "ab";
	int n = 6;

	printf("%i", strncmp(str1, str2, n));
	printf("\n%d\n", ft_strncmp(str1, str2, n));
} */