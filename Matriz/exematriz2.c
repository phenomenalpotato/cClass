#include <stdio.h>

#define PONTO printf("---------------------------------------");

int maior(int mat1, int mat2) {

  int matrizC;

  if(mat1 < mat2) {

    matrizC = mat2;

  }

  else if(mat2 < mat1) {

    matrizC = mat1;

  }
  else {

    matrizC = mat1;
  }

  return matrizC;
}

int main(void) {

    int matrizA[3][3] = {{10, 30, 50}, {5, 15, 25}, {2, 5, 9}};
    int matrizB[3][3] = {{5, 35, 70}, {1, 25, 30}, {1, 4, 9}};
    int matrizC[3][3];

    int i, j;

    // printf("%d\n", matrizA[0][3]);
    // printf("%d\n", matrizB[1][3][1]);

  for (int i = 0; i < 3; ++i)
  {
    for (int j = 0; j < 3; ++j)
    { 
        printf("MatrizA[%d][%d] = %d\n", i, j, matrizA[i][j]);
        // printf("MatrizB[%d][%d] = %d\n", i, j, matrizB[i][j]);

        // matrizC[i][j] = maior(matrizA[i][j], matrizB[i][j]);

        // printf("MatrizC[%d][%d] = %d\n", i, j, matrizC[i][j]);
    
    }
  }

PONTO

  for(i = 0; i < 3; i++) {

    for(j = 0; j < 3; j++) {

        printf("MatrizB[%d][%d] = [%d]\n", i, j, matrizB[i][j]);

    }

  }

PONTO

  for(i = 0; i < 3; i++) {

    for(j = 0; j < 3; j++) {

        matrizC[i][j] = maior(matrizA[i][j], matrizB[i][j]);        
        printf("MatrizC[%d][%d] = [%d]\n", i, j, matrizC[i][j]);

    }

  }

     return 0;
 }


// #include <stdio.h>
// int main()
// {
//   int test[2][3][2];

//   printf("Enter 12 values: \n");

//   for (int i = 0; i < 2; ++i)
//   {
//       // printf("%d\n", i);

//     for (int j = 0; j < 3; ++j)
//     {
//             // printf("%d\n", j);    

//       for (int k = 0; k < 2; ++k)
//       {
//           // printf("%d\n", k);

//         scanf("%d", &test[i][j][k]);
//         printf("test = %d\n",test[i][j][k]);
//       }
//     }
//   }

//   // Printing values with proper index.

//   printf("\nDisplaying values:\n");
//   for (int i = 0; i < 2; ++i)
//   {
//     for (int j = 0; j < 3; ++j)
//     {
//       for (int k = 0; k < 2; ++k)
//       {
//         printf("test[%d][%d][%d] = %d\n", i, j, k, test[i][j][k]);
//       }
//     }
//   }

//   return 0;
// }