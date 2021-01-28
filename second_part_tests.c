/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   second_part_tests.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgiron <jgiron@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 15:13:13 by jgiron            #+#    #+#             */
/*   Updated: 2021/01/27 15:37:22 by jgiron           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./libasm.h"

void	 ft_write_test()
{
	int fd1 = open("libasm_test_tmp1", O_CREAT | O_RDWR, 0666);
	int fd2 = open("libasm_test_tmp2", O_CREAT | O_RDWR, 0666);
	int ret1;
	int ret2;
	int errno1;
	int errno2;

	printf("====== ft_write:  ======\n");
	system("echo \"\" > libasm_test_tmp1; echo \"\" > libasm_test_tmp2");
	ret1 = ft_write(fd1, "", 1);
	errno1 = errno;
	ret2 = write(fd2, "", 1 );
	errno2 = errno;
	printf("%s", errno1 == errno2 && ret1 == ret2 && !system("cmp libasm_test_tmp1 libasm_test_tmp2") ? "✅" : "❌");
	system("echo \"\" > libasm_test_tmp1; echo \"\" > libasm_test_tmp2");
	ret1 = ft_write(fd1, "coucou", 6);
	errno1 = errno;
	ret2 = write(fd2, "coucou", 6);
	errno2 = errno;
	printf("%s", errno1 == errno2 && ret1 == ret2 && !system("cmp libasm_test_tmp1 libasm_test_tmp2") ? "✅" : "❌");
	system("echo \"\" > libasm_test_tmp1; echo \"\" > libasm_test_tmp2");
	ret1 = ft_write(fd1, "coucou", 1);
	errno1 = errno;
	ret2 = write(fd2, "coucou", 1 );
	errno2 = errno;
	printf("%s", errno1 == errno2 && ret1 == ret2 && !system("cmp libasm_test_tmp1 libasm_test_tmp2") ? "✅" : "❌");
	system("echo \"\" > libasm_test_tmp1; echo \"\" > libasm_test_tmp2");
	ret1 = ft_write(fd1, "coucou", 0);
	errno1 = errno;
	ret2 = write(fd2, "coucou", 0);
	errno2 = errno;
	printf("%s", errno1 == errno2 && ret1 == ret2 && !system("cmp libasm_test_tmp1 libasm_test_tmp2") ? "✅" : "❌");
	system("echo \"\" > libasm_test_tmp1; echo \"\" > libasm_test_tmp2");
	ret1 = ft_write(fd1, NULL, 0);
	errno1 = errno;
	ret2 = write(fd2, NULL, 0);
	errno2 = errno;
	printf("%s\n", errno1 == errno2 && ret1 == ret2 && !system("cmp libasm_test_tmp1 libasm_test_tmp2") ? "✅" : "❌");
	system("rm -f libasm_test_tmp1 libasm_test_tmp2");
}

void	ft_read_test()
{
	system("echo \"coucoulescopinous\" > libasm_test_tmp1; echo \"coucoulescopinous\" > libasm_test_tmp2");
	int fd1 = open("libasm_test_tmp1", O_CREAT | O_RDWR, 0666);
	int fd2 = open("libasm_test_tmp2", O_CREAT | O_RDWR, 0666);
	char	*buff1;
	char	*buff2;
	int ret1;
	int ret2;
	int errno1;
	int errno2;
	if (!(buff1 = malloc(1000)) ||
		!(buff2 = malloc(1000)))
		return;
	printf("====== ft_read:   ======\n");
	ret1 = ft_read(fd1, buff1, 6);
	errno1 = errno;
	ret2 = read(fd2, buff2, 6);
	errno2 = errno;
	printf("%s", ret1 == ret2 && errno1 == errno2 && !strcmp(buff1, buff2) ? "✅" : "❌");
	ret1 = ft_read(fd1, buff1, 1);
	errno1 = errno;
	ret2 = read(fd2, buff2, 1 );
	errno2 = errno;
	printf("%s", ret1 == ret2 && errno1 == errno2 && !strcmp(buff1, buff2) ? "✅" : "❌");
	ret1 = ft_read(fd1, buff1, 0);
	errno1 = errno;
	ret2 = read(fd2, buff2, 0);
	errno2 = errno;
	printf("%s", ret1 == ret2 && errno1 == errno2 && !strcmp(buff1, buff2) ? "✅" : "❌");
	ret1 = ft_read(fd1, NULL, 0);
	errno1 = errno;
	ret2 = read(fd2, NULL, 0);
	errno2 = errno;
	printf("%s\n", ret1 == ret2 && errno1 == errno2 && !strcmp(buff1, buff2) ? "✅" : "❌");
	system("rm -f libasm_test_tmp1 libasm_test_tmp2");

}

void	ft_strdup_test()
{
	char *s1;
	char	*s2;
	printf("====== ft_strdup: ======\n");
	printf("%s", strcmp(s1 = strdup(""), s2 = ft_strdup("")) == 0 ? "✅" : "❌");
	free(s1);
	free(s2);
	printf("%s\n", strcmp(s1 = strdup("coucou"), s2 = ft_strdup("coucou")) == 0  ? "✅" : "❌");	
	free(s1);
	free(s2);
}
