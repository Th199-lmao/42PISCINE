/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   st_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 13:10:39 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/15 14:25:08 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0')
	{
		i++;
	}
	return ((unsigned char) s1[i] - (unsigned char) s2[i]);
}
//#include <stdio.h>
//int main(void)
//{
//	char w[] = "hella";
//	char o[] = "hello";
//	printf("%d\n", ft_strcmp(w, o));
//	return 0;
//}
