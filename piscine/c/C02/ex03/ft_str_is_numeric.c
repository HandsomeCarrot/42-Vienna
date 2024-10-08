/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 12:20:39 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/18 12:30:06 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	position;

	position = 0;
	while (str[position] != '\0')
	{
		if (str[position] >= '0' && str[position] <= '9')
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
	char	string1[] = "21 42 12";
	char	string2[] = "0123456789";
	char	string3[] = "0r161n4l";

	printf("%s: %d\n", string1, ft_str_is_numeric(string1));
	printf("%s: %d\n", string2, ft_str_is_numeric(string2));
	printf("%s: %d\n", string3, ft_str_is_numeric(string3));
}*/