/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sozdamar <sozdamar@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/01 12:15:53 by sozdamar          #+#    #+#             */
/*   Updated: 2023/12/01 12:15:55 by sozdamar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (*(s + i))
		i++;
	return (i);
}

char	*ft_strchr(char *s, char c)
{
	if (s == NULL || c == '\0')
		return (NULL);
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}

char	*join(char *s1, char *s2)
{
	int		i;
	int		j;
	char	*res;

	if (!s1)
	{
		s1 = malloc(sizeof(char));
		*s1 = '\0';
	}
	if (!s1 || !s2)
		return (NULL);
	res = malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!res)
		return (NULL);
	i = -1;
	while (*(s1 + ++i))
		*(res + i) = *(s1 + i);
	j = 0;
	while (*(s2 + j))
		*(res + i++) = *(s2 + j++);
	*(res + i) = '\0';
	free(s1);
	return (res);
}
