#include <stdio.h>

TOH(int n, int source, int auxillary, int destination){

  TOH(n-1, source, destination, auxillary);
  printf("move disc from %d to %d", source, destination);
  TOH(n-1, auxillary, source, destination);
}

int main(){
  TOH(3, 1, 2, 3);
}
