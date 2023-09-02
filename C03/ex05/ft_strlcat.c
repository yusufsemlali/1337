/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 15:35:49 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/23 21:37:36 by ysemlali         ###   ########.fr       */
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
	unsigned int	i;
	unsigned int	s_len;
	unsigned int	d_len;

	i = 0;
	d_len = count_len(dest);
	s_len = count_len(src);
	if (size == 0 || size <= d_len)
	{
		return (s_len + size);
	}
	while (src[i] && i < size - d_len - 1)
	{
		dest[d_len + i] = src[i];
		i++;
	}
	dest[d_len + i] = '\0';
	return (d_len + s_len);
}

/*int	main(void)
{
	unsigned int	size;
	unsigned int	lcat;

	char dest[20] = "hello world ";
	char src[] = "how are you..";
	size = 18;
	lcat = ft_strlcat(dest, src, size);
	printf(" %s\n", dest);
	printf(" %u\n", lcat);
	return (0);
}*/
