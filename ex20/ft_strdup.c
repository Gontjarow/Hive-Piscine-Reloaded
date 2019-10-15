/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 14:11:42 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/15 19:49:24 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int length;

	length = 0;
	while (*str)
	{
		++length;
		++str;
	}
	return (length);
}

char	*ft_strdup(char *src)
{
	char	*ptr;
	int		len;
	int		i;

	ptr = malloc(ft_strlen(src) + 1);
	if (ptr == 0)
		return (0);
	else
	{
		len = ft_strlen(src);
		i = 0;
		while (i < len)
		{
			ptr[i] = src[i];
			++i;
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
