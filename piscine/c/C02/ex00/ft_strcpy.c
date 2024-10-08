/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/17 09:47:01 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/18 11:52:25 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	position;

	position = 0;
	while (src[position] != '\0')
	{
		dest[position] = src[position];
		position++;
	}
	dest[position] = '\0';
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
	char	string[] = "Original Original Original";
	ft_putstr(string);
	
	char copy[] = "COPY COPY COPY COPY COPY";
	printf("\nCopy: \n");
	ft_putstr(copy);

	printf("\n\nAfter: \n\n");

	printf("Original: \n");
	ft_putstr(string);

	ft_strcpy(copy, string);
	printf("\nCopy: \n");
	ft_putstr(copy);
}*/