/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 13:39:20 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/22 13:52:04 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s2[i])
	{
		if (s1[i] != s2[i])
		{
			return (-1);
		}
		i++;
	}	
	return (0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	h;

	if (to_find[0] == '\0')
	{
		return (str);
	}
	i = 0;
	h = 0;
	while (str[i])
	{
		if (str[i] == to_find[h])
		{
			if (ft_strcmp(&str[i], to_find) == 0)
				return (&str[i]);
		}
		i++;
	}
	return (0);
}
//int main()
//{
//    char haystack[] = "the haystack is stacked with stack";
//    char needle[] = "stack";
//
//    char *search = ft_strstr(haystack, needle);
//    if (search)
//    {
//        printf("found: %s\n", search);
//    }
//    else
//    {
//        printf("not found.");
//    }
//
//    return 0;
//}
