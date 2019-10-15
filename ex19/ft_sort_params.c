/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ngontjar <ngontjar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/15 12:45:35 by ngontjar          #+#    #+#             */
/*   Updated: 2019/10/15 16:02:11 by ngontjar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
	{
		ft_putchar(*str);
		++str;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		++s1;
		++s2;
	}
	if (*s1 - *s2 == 0)
		return (0);
	else
		return ((*s1 - *s2 < 0) ? -1 : 1);
}

void	ft_swap(void **a, void **b)
{
	void *c;

	c = *a;
	*a = *b;
	*b = c;
}

int		main(int argc, char **argv)
{
	int		a;
	int		b;

	if (argc > 1)
	{
		a = 1;
		while (a < (argc - 1))
		{
			b = a + 1;
			if (ft_strcmp(argv[a], argv[b]) == 1)
			{
				ft_swap((void**)&argv[a], (void**)&argv[b]);
				a = 0;
			}
			++a;
		}
		a = 1;
		while (a < argc)
		{
			ft_putstr(argv[a]);
			ft_putchar('\n');
			++a;
		}
	}
}
