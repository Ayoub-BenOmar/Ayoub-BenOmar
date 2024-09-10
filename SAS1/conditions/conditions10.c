#include <stdio.h>
#include <stdlib.h>

int main(){
        int j,m,an;
        printf("entrer le date sous form de 10/09/2024: ");
        scanf("%d/%d/%d", &j,&m,&an);
        switch(m){
                case 1:
                        printf("%d-Janvier-%d", j,an);
                        break;
                case 2:
                        printf("%d-Fevrier-%d", j,an);
                        break;
                case 3:
                        printf("%d-Mars-%d", j,an);
                        break;
                case 4:
                        printf("%d-April-%d", j,an);
                        break;
                case 5:
                        printf("%d-May-%d", j,an);
                        break;
                case 6:
                        printf("%d-Juin-%d", j,an);
                        break;
                case 7:
                        printf("%d-Juillet-%d", j,an);
                        break;
                case 8:
                        printf("%d-Aout-%d", j,an);
                        break;
                case 9:
                        printf("%d-Septembre-%d", j,an);
                        break;
                case 10:
                        printf("%d-Octobre-%d", j,an);
                        break;
                case 11:
                        printf("%d-Novembre-%d", j,an);
                        break;

                case 12:
                        printf("%d-Decembre-%d", j,an);
                        break;
                default:
                        break;
        }
        return 0;
}