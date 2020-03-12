nasm -fmacho64 ft_strcmp_lmartin.asm && nasm -fmacho64 ft_strcmp.asm && gcc -c test_time_ft_strcmp.c && clang -fno-pie ft_strcmp_lmartin.o ft_strcmp.o test_time_ft_strcmp.o && rm *.o && ./a.out
