/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:32:57 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/15 14:15:16 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	if (n == 0)
	{
		return (0);
	}
	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && i < n - 1)
	{
		i++;
	}
	return (((unsigned char)s1[i]) - ((unsigned char)s2[i]));
}
//#include <stdio.h>
//int main(void)
//{
//	char p[] = "he11a";
//	char w[] = "heIlo";
//
//	printf("%d\n", ft_strncmp(w, p, 3));
//	return 0;
//}
