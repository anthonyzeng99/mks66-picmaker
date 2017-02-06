#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void generate_header(FILE *file, int xsize, int ysize, int max_color) {
  fprintf(file, "P3\n%d %d\n%d\n", xsize, ysize, max_color); 
  }

void generate_image(FILE *file) {

  int i = 0;
  int j = 0;
  
  for (; i < 256; i++) {
 
    int r = 0;
    int g = 0;
    int b = 0;

    for (j = 0; j < 256; j++) {
      
      fprintf(file, "%d %d %d ", r, g, b);

      r++;
      g++;
      b++;
    
    }
  }
  
}

int main() {

  FILE *file = fopen("pic.ppm", "w");
    
  generate_header(file, 256, 256, 256);
  generate_image(file);
  
  fclose(file);
  
}
