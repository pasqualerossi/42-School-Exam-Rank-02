/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dantremb <dantremb@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/15 08:28:40 by dantremb          #+#    #+#             */
/*   Updated: 2022/08/15 08:28:41 by dantremb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int *ft_range(int start, int end)
{
	int size = end - start;
	int *ret;
	int *pointer;

	if (size)
	{
		pointer = (int *)malloc(sizeof(int) * size);
		if (pointer)
		{
			ret = pointer;
			while (start <= end)
			{
				*pointer = start;
				pointer++;
				start++;
			}
			return (ret);
		}
	}
	return (NULL);
}
