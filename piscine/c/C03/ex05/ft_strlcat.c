/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 13:35:08 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/23 18:57:13 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	str_size(char *dest, char *src, int positions[2], unsigned int size)
{
	int	init_size;

	init_size = size;
	while (src[positions[0]] != '\0' || dest[positions[1]] != '\0')
	{
		if (src[positions[0]] != '\0')
			positions[0]++;
		if (dest[positions[1]] != '\0' && init_size > 0)
		{
			positions[1]++;
			init_size--;
			if (init_size == 0)
			{
				dest[positions[1]] = '\0';
				return (size + positions[0]);
			}
		}
	}
	return (0);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	final_length;
	int				positions[2];
	int				init_size;

	init_size = size;
	positions[0] = 0;
	positions[1] = 0;
	if (str_size(dest, src, positions, size) != 0)
		return (size + positions[0] + positions[1] + 1);
	final_length = positions[0] + positions[1];
	positions[0] = 0;
	while ((positions[1] + positions[0]) < init_size - 1
		&& src[positions[0]] != '\0')
	{
		dest[positions[1] + positions[0]] = src[positions[0]];
		positions[0]++;
	}
	return (final_length);
}

#include <bsd/string.h>
#include <stdio.h>

int main(void)
{
    char dest[200] = "Hello";
    char src[] = " Evaluator!sdsdasdasdsadasdasadasdasdasdadasdassadasdasdasda";
	char dest2[200] = "Hello";
	char src2[] = " Evaluator!sdsdasdasdsadasdasadasdasdasdadasdassadasdasdasda";

    int size = strlcat(dest2, src2, sizeof(dest2));

    printf("%s| string size: %d", dest, size);
    
    int size2 = ft_strlcat(dest, src, sizeof(dest));

	printf("\n%s| string size: %d", dest2, size2);
}