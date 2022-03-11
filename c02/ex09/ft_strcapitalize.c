/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ikharbac <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/15 08:54:59 by ikharbac          #+#    #+#             */
/*   Updated: 2021/08/15 10:42:15 by ikharbac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strcapitalize(char *str)
{
	int	i;
	int	up;

	i = 0;
	up = 1;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')
			|| (str[i] >= '0' && str[i] <= '9'))
		{
			if (up && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = (str[i] - 32);
			if (!up && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] = (str[i] + 32);
			up = 0;
		}
		else
			up = 1;
		i++;
	}
	return (str);
}
