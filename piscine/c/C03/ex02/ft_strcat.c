/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 19:25:29 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 16:52:34 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	dest_pos;
	int	src_pos;

	dest_pos = 0;
	while (dest[dest_pos] != '\0')
	{
		dest_pos++;
	}
	src_pos = 0;
	while (src[src_pos] != '\0')
	{
		*(dest + dest_pos + src_pos) = src[src_pos];
		src_pos++;
	}
	*(dest + dest_pos + src_pos) = '\0';
	return (dest);
}

/*#include <string.h>
#include <stdio.h>
#include <unistd.h>

int	main(void)
{
	char str1[20] = "Hello\0";
	char str2[] = " World!";
	char str3[] = " NO :()";

	ft_strcat(str1, str2);
	printf("%s\n", str1);
	ft_strcat(str1, str3);
	printf("%s\n", str1);
	
	char str4[20] = "Hello\0";

	strcat(str4, str2);
	strcat(str4, str3);

	printf("%s\n", str4);
}*/