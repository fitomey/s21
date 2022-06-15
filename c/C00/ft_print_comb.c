// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

void ft_print_comb(void) {
    char n0 = '0';
    char n1 = '0';
    char n2 = '0';
    while (n0 <= '9') {
        n1 = '0';
        while (n1 <= '9') {
            n2 = '0';
            while (n2 <= '9') {
                if (n0 < n1 && n1 < n2) {
                    ft_putchar(n0);
                    ft_putchar(n1);
                    ft_putchar(n2);
                    if (n0 != '7') {
                        ft_putchar(',');
                        ft_putchar(' ');
                    }
                }
                n2 = n2 + 1;
            }
            n1 = n1 + 1;
        }
        n0 = n0 + 1;
    }
}

// int main(void) {
//     ft_print_comb();
// }