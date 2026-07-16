/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tchaivor <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 15:31:06 by tchaivor          #+#    #+#             */
/*   Updated: 2026/07/11 16:10:16 by tchaivor         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
//#include <stdio.h>
//int main(void)
//{
//	char src[] = "Hello world";
//	char dest[20];
//	
//	ft_strcpy(dest, src);
//	printf("%s\n",dest);
//}
