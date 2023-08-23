/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:35:49 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/22 15:36:58 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_len(char *dest)
{
	unsigned int	len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	return (len);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	index;
	unsigned int	s_len;
	unsigned int	to_cat;
	unsigned int	d_len;

	index = 0;
	d_len = count_len(dest);
	to_cat = size - d_len - 1;
	s_len = count_len(src);
	if (size == 0 || size <= d_len)
	{
		return (s_len + size);
	}
	else
	{
		while (src[index] && index <= to_cat)
		{
			dest[d_len] = src[index];
			index++;
			d_len++;
		}
	}
	dest[d_len] = '\0';
	return (d_len + s_len);
}
//int	main(void)
//{
//	unsigned int	size;
//	unsigned int	lcat;
//
//	char dest[20] = "youssef ";
//	char src[] = "semlali..";
//	size = 10;
//	lcat = ft_strlcat(dest, src, size);
//	printf(" %s\n", dest);
//	printf(" %u\n", lcat);
//	return (0);
//}
