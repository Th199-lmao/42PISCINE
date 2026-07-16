/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:18:56 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/12 17:25:59 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0') && (str[i] <= '9')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int main (void)
//{
//	char c[] = "hi67";
//	printf ("%s\n", c);
//	printf ("%d\n", ft_str_is_numeric(c));
//}
