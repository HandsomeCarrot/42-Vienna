/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:33:15 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/22 12:28:05 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= 'A' && str[position] <= 'Z')
		{
			position++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

/*#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	char *ptr = str;
	while (*ptr != '\0')
	{
		ft_putchar(*ptr);
		ptr++;
	}
}

int	main(void)
{
	char	string1[] = "Original Original Original";
	char	string2[] = "ORIGINAL";
	char	string3[] = "OR1GINAL";

	printf("%s: %d\n", string1, ft_str_is_uppercase(string1));
	printf("%s: %d\n", string2, ft_str_is_uppercase(string2));
	printf("%s: %d\n", string3, ft_str_is_uppercase(string3));
}*/