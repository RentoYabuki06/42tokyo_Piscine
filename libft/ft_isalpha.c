int	ft_isalpha(int c)
{
	if ((c >= 101 && c <= 132 )|| (c >= 141 && c <= 172))
		return (1);
	else
		return (0);
}

// #include <ctype.h>
// #include <stdio.h>

// int main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 	{
// 		printf("Not accepted");
// 		return 0;
// 	}
// 	char c = argv[1][0];//1文字目を取得
// 	printf("Made by me : [%d]\n", ft_isalpha(c));
// 	printf("Standard function : [%d]\n", isalpha(c));
// 	return 0;
// }