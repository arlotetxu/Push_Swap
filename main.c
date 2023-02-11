
#include "push_swap.h"

int main(int argc, char **argv)
{
	int	i;
	int nb;

	i = 1;
	nb = 0;
	if (argc > 1)
	{
		while (argv[i])
		{
			nb = ft_check_limits(argv[i++]); // Check whithin the number is inside INT limits
			printf("nb: %d\n", nb);
		}
	}
	return 0;
}
