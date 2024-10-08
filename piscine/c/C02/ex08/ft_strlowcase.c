/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:47:01 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/18 13:30:22 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			str[position] = str[position] + 32;
		}
		position++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[] = "Original OriGinal Original";
	printf("Before: %s\n\n", string);

	ft_strlowcase(string);
	printf("After: %s", string);
}*/