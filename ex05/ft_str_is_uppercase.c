/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:38:13 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/12 17:44:34 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A') && (str[i] <= 'Z')))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
//#include <stdio.h>
//int main(void)
//{
//      char c[] = "dwdwEE";
//      printf("%s\n", c);
//      printf("%d", ft_str_is_uppercase(c));
//}
