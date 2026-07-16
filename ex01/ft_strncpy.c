/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/12 15:29:18 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/12 15:52:31 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src [i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
//#include <stdio.h>
//int main (void)
//{
//	char first[] = "hel";
//	char sec[10];
//	printf("%s %s\n", first, sec);
//	ft_strncpy(sec, first, 5);
//	printf("%s %s\n", first, sec);
//}
