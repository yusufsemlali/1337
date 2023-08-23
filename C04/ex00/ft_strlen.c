/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 14:36:45 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/19 22:47:18 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		i++;
	}
	return (i);
}
//
//
//int main()
//{
//    char Str[] = "Hello, Wodfgdfhkdghkrld!";
//    int length = ft_strlen(Str);
//    printf(" %d ", length);
//    return 0;
//}
