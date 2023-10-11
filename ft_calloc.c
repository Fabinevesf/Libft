/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: faneves <faneves@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 10:52:51 by faneves           #+#    #+#             */
/*   Updated: 2023/10/11 15:25:37 by faneves          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	ptr = malloc(nmemb * size);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, nmemb * size);
	return (ptr);
}

/*int	main(void)
{
	int *arr = (int *)ft_calloc(50, sizeof(int));

	if (arr == NULL)
	{
		printf("Erro na alocação de memória.\n");
		return 1;
	}
	for (int i = 0; i < 51; i++)
        	printf("%d ", arr[i]);
	free(arr);
	return (0);
}*/