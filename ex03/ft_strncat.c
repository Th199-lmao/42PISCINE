/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/15 15:14:44 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/15 16:11:06 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	q;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	q = 0;
	while (src[q] != '\0' && q < nb)
	{
		dest[i + q] = src[q];
		q++;
	}
	dest[i + q] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char w[] = "yooohi";
//	char l[] = "hello";
//	printf("%s", ft_strncat(l, w, 2));
//	return 0;
//}
