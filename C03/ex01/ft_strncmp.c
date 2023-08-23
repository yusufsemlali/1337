/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 20:10:56 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/22 20:23:19 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0'  ;
		i++ ;
	}
	return(dest);
}
int main() {
   char str1[] = "123a";
    char str2[] = "123z";
    unsigned int n = 4;

    int comp = ft_strncmp(str1, str2, n);

    printf(" %d", comp);

	return 0;
}
