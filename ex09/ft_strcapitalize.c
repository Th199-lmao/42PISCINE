/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 16:21:23 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/13 16:40:25 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	num;

	i = 0;
	num = 1;
	while (str[i])
	{
		if ((str[i] >= 'a' && str[i] <= 'z')
			|| (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (num && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
			else if (!num && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = str[i] + 32;
			num = 0;
		}
		else
		{
			num = 1;
		}
		i++;
	}
	return (str);
}
//#include <stdio.h>
//int main(void)
//{
//	char c[] = "hi How are you who";
//	printf("%s\n", c);
//	printf("%s\n", ft_strcapitalize(c));
//}
