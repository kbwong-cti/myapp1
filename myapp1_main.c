#include <unistd.h>

int main() {
    char disp_buf[] = "hello world\n";
    write(1,disp_buf,12 );
}