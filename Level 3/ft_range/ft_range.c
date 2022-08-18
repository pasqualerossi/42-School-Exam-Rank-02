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
	int *temp;
	int len;

	if (end < start)
		len = start - end;
	else
		len = end - start;
	temp = malloc(sizeof(int) * len + 1);
	if (temp == NULL)
		return (NULL);
	while (len >= 0)
	{
		temp[len] = end;
		if (start > end)
			end++;
		else
			end--;
		len--;
	}
	return (temp);
}
