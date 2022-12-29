/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saeby <saeby>                              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:28:40 by dantremb          #+#    #+#             */
/*   Updated: 2022/12/29 10:26:13 by saeby            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int start, int end)
{
	int	*res;
	int	size;
	int	i;

	size = (end - start) + 1;
	i = 0;
	res = (int *) malloc(size * sizeof(int));
	if (!res)
		return (NULL);
	while (i++ < size)
		res[i] = start + i;
	return (res);
}

/*
#include <stdio.h>
int main(void)
{
	int	start;
	int	end;
	int	i;
	int	*tab;

	start = 0;
	end = 0;
	tab = ft_range(start, end);
	i = 0;
	while (i < (end - start) + 1)
	{
		printf("%d\n", tab[i]);
		i++;
	}
}
*/