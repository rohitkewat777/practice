#include <stdio.h>
#include <stdint.h>


__attribute__((section(".my_reserved"))) uint32_t arr[64];

int main() {

  printf("Hello\n");
  return 0;
}
