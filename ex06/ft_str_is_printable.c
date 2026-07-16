/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 17:42:05 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/12 17:55:45 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 32 && str[i] <= 126)))
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
//	char c[] = "abc\t";
//	printf("%s\n", c);
//	printf("%d\n", ft_str_is_printable(c));
//}
