/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:38:18 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/22 16:03:43 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	sw;

	i = 0;
	sw = 1;
	ft_strlowcase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (sw == 1)
				str[i] -= 32;
			sw = 0;
		}
		else if (str[i] >= '0' && str[i] <= '9')
			sw = 0;
		else
			sw = 1;
		i++;
	}
	return (str);
}
//int main() {
//    char testStr[] = "42mots quarante-deux; cinquante+et+un";
//    
//    printf(" %s\n", testStr);
//    ft_strcapitalize(testStr);
//    printf(" %s\n", testStr);
//    
//    return 0;
//}
