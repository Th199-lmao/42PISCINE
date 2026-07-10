/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 19:05:21 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/10 19:21:21 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	rush(int x, int y)
{
	int	r;
	int	c;

	r = 0;
	while (r < y)
	{
		c = 0;
		while (c < x)
		{
			if (r == 0 && c == 0 || r == y - 1 && c == 0)
				ft_putchar('A');
			else if (r == 0 && c == x - 1 || r == y - 1 && c == x - 1)
				ft_putchar('C');
			else if (r == 0 || c == 0 || c == x - 1 || r == y - 1)
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		r++;
		ft_putchar('\n');
	}
}
