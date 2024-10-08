/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vpoka <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:29:05 by vpoka             #+#    #+#             */
/*   Updated: 2024/07/14 21:46:05 by vpoka            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*
#include <stdio.h>

int	main(void)
{
	int	nb1;
	int	nb2;
	int *ptr1;
	int	*ptr2;

	nb1 = 10;
	nb2 = 20;
	ptr1 = &nb1;
	ptr2 = &nb2;
	
	printf("ptr1: %d, ptr2: %d\n", *ptr1, *ptr2);
	ft_swap(ptr1, ptr2);
	printf("ptr1: %d, ptr2: %d", *ptr1, *ptr2);
	return (0);
}
*/
