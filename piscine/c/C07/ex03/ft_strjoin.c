/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 10:44:40 by vpoka             #+#    #+#             */
/*   Updated: 2024/08/01 12:58:56 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	get_len(char *sep, char **strs, int size)
{
	int	pos;
	int	pos2;
	int	len;

	pos = 0;
	len = 0;
	while (pos < size)
	{
		pos2 = 0;
		while (strs[pos][pos2])
		{
			len++;
			pos2++;
		}
		pos2 = 0;
		while (sep[pos2] && pos < size - 1)
		{
			len++;
			pos2++;
		}
		pos++;
	}
	return (len);
}

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

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int	pos;
	char	*res;

	pos = 0;
	if (size == 0)
	{
		res = malloc(0);
	}
	else
	{
		res = malloc((1 + get_len(sep, strs, size)) * sizeof(char));
		while (pos < size)
		{
			ft_strcat(res, strs[pos]);
			if (pos < size - 1)
				ft_strcat(res, sep);
			pos++;
		}
	}
	return (res);
}

/* #include <stdio.h>

int main(void)
{
	int size = 4;
	char	*str[size];
	char	*sep = "-";
	str[0] = "";
	str[1] = "Hello";
	str[2] = "";
	str[3] = "world";
	printf("%s", ft_strjoin(size, str, sep));
} */