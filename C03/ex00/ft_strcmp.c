/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 18:18:04 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/23 18:19:05 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
//int	main(void)
//{
//
//	char *str1 = "123";
//	char *str2 = "1234";
//	int comp = ft_strcmp(str1, str2);
//	printf(" %d ", comp);
//	return (0);
//}
