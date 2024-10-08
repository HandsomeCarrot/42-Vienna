/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/15 11:28:37 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/15 11:40:18 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char	*str)
{
	int	counter;

	counter = 0;
	while (*str > 0)
	{
		counter++;
		str++;
	}
	return (counter);
}

/*
#include <stdio.h>

int	main(void)
{
	char	str[] = "Hello World!";
	char	*ptr;
	int str_len;

	ptr = &str[0];
	str_len = 0;

	printf("%s\n", str);
	str_len = ft_strlen(ptr);
	printf("The length is: %d\n", str_len);
	return (0);
}
*/
