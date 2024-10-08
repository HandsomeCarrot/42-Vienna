/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 17:13:28 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 21:58:37 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	counter;

	counter = 0;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

/* #include <stdio.h>
#include <string.h>

int	main(void)
{
	char str[] = "Hello World!";
	printf("%lu", strlen(str));
	printf("\n%d\n", ft_strlen(str));
} */