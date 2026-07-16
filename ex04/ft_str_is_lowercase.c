/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:26:43 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/12 17:37:20 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a') && (str[i] <= 'z')))
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
//	char c[] = "dwdwEE";
//	printf("%s\n", c);
//	printf("%d", ft_str_is_lowercase(c));
//}
