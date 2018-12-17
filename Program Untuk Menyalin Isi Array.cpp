#include<stdio.h>
main(){
int R[2][3]={97,1,24,22,1,97}, T[2][3], r, t ;

printf("Isi variabel R:\n\n");

for(r=0; r<2; r++){
for(t=0; t<3; t++){
printf("%5i", R[r][t]);
}
printf("\n");
}

for(r=0; r<2; r++){
for(t=0; t<3; t++){
T[r][t]=R[r][t];
}
}

printf("\n\n\n\n\nHasil pemindahan ke variabel T:\n\n");

for(r=0; r<2; r++){
for(t=0; t<3; t++){
printf("%5i", T[r][t]);
}
printf("\n");
 }
}