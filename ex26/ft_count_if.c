/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 16:36:30 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/15 16:54:11 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int string;
	int count;

	string = 0;
	count = 0;
	while (tab[string])
	{
		if (f(tab[string]))
			++count;
		++string;
	}
	return (count);
}
