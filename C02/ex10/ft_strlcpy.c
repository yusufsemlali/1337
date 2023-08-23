/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysemlali <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/21 09:44:26 by ysemlali          #+#    #+#             */
/*   Updated: 2023/08/22 10:54:18 by ysemlali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len])
	{
		len++;
	}
	if (size == 0)
		return (len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}
//int main() {
//    char src[] = "Welcome Home";
//    char dest[7]; 
//
//    unsigned int copy = ft_strlcpy(dest, src, sizeof(dest));
//
//    printf("Copied: %u\n", copy);
//    printf("Destination: %s\n", dest);
//
//    return 0;
//}
