#include <unistd.h>
#include <stdio.h>

void ft_convert(char *str)	
{
	if (*str == ' ')
                printf("   ");
	if (*str == 'a' || *str == 'A')
		printf(".- ");
	if (*str == 'b' || *str == 'B')
                printf("-... ");
	if (*str == 'c' || *str == 'C')
                printf("-.-. ");
	if (*str == 'd' || *str == 'D')
                printf("-.. ");
	if (*str == 'd' || *str == 'D')
                printf("-.. ");
	if (*str == 'e' || *str == 'E')
                printf(". ");
	if (*str == 'f' || *str == 'F')
                printf("..-. ");
	if (*str == 'g' || *str == 'G')
                printf("--.");
	if (*str == 'h' || *str == 'H')
                printf(".... ");
	if (*str == 'i' || *str == 'I')
                printf(".. ");
	if (*str == 'j' || *str == 'J')
                printf(".--- ");
	if (*str == 'k' || *str == 'K')
                printf("-.- ");
	if (*str == 'l' || *str == 'L')
                printf(".-.. ");
	if (*str == 'm' || *str == 'M')
                printf("-- ");
	if (*str == 'n' || *str == 'N')
                printf("-. ");
	if (*str == 'o' || *str == 'O')
                printf("--- ");
	if (*str == 'p' || *str == 'P')
                printf(".--. ");
	if (*str == 'q' || *str == 'Q')
                printf("--.- ");
	if (*str == 'r' || *str == 'R')
                printf(".-. ");
	if (*str == 's' || *str == 'S')
                printf("... ");
	if (*str == 't' || *str == 'T')
                printf("- ");
	if (*str == 'u' || *str == 'U')
                printf("..- ");
	if (*str == 'v' || *str == 'V')
                printf("...- ");
	if (*str == 'w' || *str == 'W')
                printf(".-- ");
	if (*str == 'x' || *str == 'X')
                printf("-..- ");
	if (*str == 'y' || *str == 'Y')
                printf("-.-- ");
	if (*str == 'z' || *str == 'Z')
                printf("--.. ");
	if (*str == '1')
                printf(".---- ");
	if (*str == '2')
                printf("..--- ");
	if (*str == '3')
                printf("...-- ");
	if (*str == '4')
                printf("....- ");
	if (*str == '5')
                printf("..... ");
	if (*str == '6')
                printf("-.... ");
	if (*str == '7')
                printf("--... ");
	if (*str == '8')
                printf("---.. ");
	if (*str == '9')
                printf("----. ");
	if (*str == '0')
                printf("----- ");

}

int main(int argc, char **argv)
{
	int i = 0;

	if (argc != 2)
	{
	 	printf("[ERROR]: Please enter a valid string");
		return (0);
	}
	while (argv[1][i])
	{
		
		if (argv[1][i] < ' ' || (argv[1][i] > ' ' && argv[1][i] < '0') || (argv[1][i] > '9' && argv[1][i] < 'A') || (argv[1][i] > 'Z' && argv[1][i] < 'a') || argv[1][i] > 'z')
		{
			printf("[ERROR]: Please enter a valid string. Only characters, spaces and numbers are supported, failed to write %c", argv[1][i]);
                	return (0);
		}
		ft_convert(&argv[1][i]);
		i++;
	}
	printf("\n");
	return (1);
}

