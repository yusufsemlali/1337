/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 10:26:45 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/28 10:27:20 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_len(char *dest)
{
	int	len;

	len = 0;
	while (dest[len])
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i2;
	unsigned int	srci;

	srci = 0;
	i2 = count_len(dest);
	if (nb == 0)
	{
		return (dest);
	}
	else
	{
		while (src[srci] && srci < nb)
		{
			dest[i2] = src[srci];
			srci++;
			i2++;
            d_len++;
		}
	}
	dest[i2] = '\0';
	return (dest);
}
// int main()
//{
//    char dest[50] = "You";
//    char src[] = "ssef";
//	unsigned int size = 4;
//    printf("src = %s\n", src);
//
//    ft_strncat(dest, src , size);
//
//    printf("%s ", dest);
//
//    return (0);
//}
