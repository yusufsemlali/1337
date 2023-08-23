/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 21:11:18 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/21 21:12:27 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	i2;
	int	srci;

	i = 0;
	srci = 0;
	while (dest[i])
	{
		i++;
	}
	i2 = i;
	while (src[srci])
	{
		dest[i2] = src[srci];
		srci++;
		i2++;
	}
	dest[i2] = '\0';
	return (dest);
}
//int main()
//{
//    char dest[50] = "You";
//    char src[] = "ssef";
//    printf("src = %s\n", src);
//
//    ft_strcat(dest, src);
//
//    printf("%s ", dest);
//
//    return 0;
//}
