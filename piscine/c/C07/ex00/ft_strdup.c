/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 16:50:30 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/31 18:14:19 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	counter;

	counter = 1;
	while (str[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}

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

char	*ft_strdup(char *src)
{
	int		len;
	char	*res;

	len = ft_strlen(src);
	res = malloc(len * sizeof(char));
	res = ft_strcpy(res, src);
	return (res);
}

/* #include <stdio.h>

int main(void)
{
	char *str = "Hello World!";

	printf("%s\n", str);
	printf("%s\n", ft_strdup(str));
} */