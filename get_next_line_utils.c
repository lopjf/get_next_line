/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lpenelon <lpenelon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/26 14:17:13 by loris             #+#    #+#             */
/*   Updated: 2022/08/16 16:03:53 by lpenelon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

int	ft_strlen(char *s)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *s)
{
	int		i;
	int		j;
	char	*a;

	i = ft_strlen((char *) s) + 1;
	a = (char *) malloc(i * sizeof(char));
	if (a == NULL)
		return (NULL);
	j = 0;
	if (a == NULL && s == NULL)
		return (NULL);
	while (j < i)
	{
		*(char *)(a + j) = *(char *)(s + j);
		j++;
	}
	return (a);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	unsigned int	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen((char *) src));
	while (src[i] != '\0' && i < dstsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen((char *) src));
}

char	*ft_strjoin(char *s1, char *s2)
{
	int		i;
	int		n;
	int		total_len;
	char	*ret;

	if (!s1 || !s2)
		return (0);
	total_len = ft_strlen(s1) + ft_strlen(s2) + 1;
	ret = (char *) malloc(total_len);
	if (ret == NULL)
		return (NULL);
	ft_strlcpy(ret, s1, total_len);
	n = ft_strlen(ret);
	i = 0;
	while (s2[i] != '\0' && n < total_len - 1)
	{
		ret[n++] = s2[i++];
	}
	ret[n] = '\0';
	return (ret);
}

char	*ft_strchr(char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == (char)c)
		return ((char *) &s[i]);
	return (0);
}
