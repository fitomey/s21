// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

void ft_print_comb2(void) {
    char n00 = '0';
    char n01 = '0';
    char n10 = '0';
    char n11 = '0';
    while (n00 <= '9') {
        n01 = '0';
        while (n01 <= '9') {
            n10 = '0';
            while (n10 <= '9') {
                n11 = '0';
                while (n11 <= '9') {
                    if (n00 < n10 || ((n00 == n10) && (n01 < n11))) {
                        ft_putchar(n00);
                        ft_putchar(n01);
                        ft_putchar(' ');
                        ft_putchar(n10);
                        ft_putchar(n11);
                        if (n00 != '9' || n01 != '8'){
                            ft_putchar(',');
                            ft_putchar(' ');
                        }
                        
                    }
                    n11 = n11 + 1;
                }
                n10 = n10 + 1;
            }
            n01 = n01 + 1;
        }
        n00 = n00 + 1;
    }
}

// int main(void) {
//     ft_print_comb2();
// }