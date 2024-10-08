/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 11:26:31 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/18 11:55:07 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	int	position;

	position = 0;
	while (src[position] != '\0' && n > 0)
	{
		dest[position] = src[position];
		position++;
		n--;
	}
	while (n > 0)
	{
		dest[position] = '\0';
		position++;
		n--;
	}
	return (dest);
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
	printf("Original: \n");
	char	string[] = "Original";
	ft_putstr(string);
	
	char copy[] = "COPY COPY COPY COPY COPY";
	printf("\nCopy: \n");
	ft_putstr(copy);

	printf("\n\nAfter: \n\n");

	printf("Original: \n");
	ft_putstr(string);

	ft_strncpy(copy, string, 20);
	printf("\nCopy: \n");
	ft_putstr(copy);
}*/