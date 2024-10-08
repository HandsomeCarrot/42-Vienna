/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:47:01 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/18 13:23:45 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'a' && str[position] <= 'z')
		{
			str[position] = str[position] - 32;
		}
		position++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char	string[] = "Original Original Original";
	printf("Before: %s\n\n", string);

	ft_strupcase(string);
	printf("After: %s", string);
}*/