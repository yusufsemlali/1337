void	ft_ultimate_ft(int *****nbr)
{
	*****nbr = 42;
}
int main(void)
{
	int nbr = 10 ;
	int *nbr1 = &nbr;
	int	**nbr2 = &nbr1;
	int	***nbr3 = &nbr2;
	int ****nbr4 = &nbr3;
	int *****nbr5 = &nbr4;
	ft_ultimate_ft( nbr5);
	printf("%d " , nbr);
	return (0);
}
