/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 16:11:44 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/15 17:14:10 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	if (to_find[0] == '\0')
		return (str);
	i = 0;
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] == to_find[j] && to_find[j] != '\0')
		{
			j++;
		}
		if (to_find[j] == '\0')
			return (&str[i]);
		i++;
	}
	return (0);
}
//#include <stdio.h>
//int main(void)
//{
//	char s1[] = "hello";
//	printf("Test 1: %s\n", ft_strstr(s1, "llo"));
//	printf("Test 2: %s\n", ft_strstr(s1, ""));
//	printf("Test 3: %s\n", ft_strstr(s1, "World"));
//	return 0;
//}
