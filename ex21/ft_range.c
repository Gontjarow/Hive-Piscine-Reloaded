/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:27:41 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/15 20:06:12 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int *array;
	int i;

	array = (int *)malloc((max - min) * sizeof(int));
	if (array == 0)
	{
		return (0);
	}
	else if (min >= max)
	{
		return (0);
	}
	else
	{
		i = 0;
		while (min < max)
		{
			array[i] = min;
			++i;
			++min;
		}
	}
	return (array);
}
