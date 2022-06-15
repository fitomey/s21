// #include <unistd.h>

// void ft_putchar(char c) {
//     write(1, &c, 1);
// }

void ft_print_numbers(void) {
    char let = '0';
    while (let <= '9'){
        ft_putchar(let);
        let = let + 1;
    }
}

// int main(void) {
//     ft_print_numbers();
// }