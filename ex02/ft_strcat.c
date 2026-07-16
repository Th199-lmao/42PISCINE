/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 14:30:59 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/15 18:36:10 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	n;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	n = 0;
	while (src[n] != '\0')
	{
		dest[i + n] = src[n];
		n++;
	}
	dest [i + n] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char s[] = "gayyy";
//	char l[] = "when?";
//
//	printf("%s", ft_strcat(s, l));
//	return 0;
//}
