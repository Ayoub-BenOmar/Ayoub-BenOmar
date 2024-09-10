#include <stdio.h>
#include <stdlib.h>

int main(){
        int d,m,y;
        printf("entrer le date sous form de 10/09/2024: ");
        scanf("%d/%d/%d", &d,&m,&y);
        switch(m){
                case 1:
                        printf("%d-Janvier-%d", d,y);
                        break;
                case 2:
                        printf("%d-Fevrier-%d", d,y);
                        break;
                case 3:
                        printf("%d-Mars-%d", d,y);
                        break;
                case 4:
                        printf("%d-April-%d", d,y);
                        break;
                case 5:
                        printf("%d-May-%d", d,y);
                        break;
                case 6:
                        printf("%d-Juin-%d", d,y);
                        break;
                case 7:
                        printf("%d-Juillet-%d", d,y);
                        break;
                case 8:
                        printf("%d-Aout-%d", d,y);
                        break;
                case 9:
                        printf("%d-Septembre-%d", d,y);
                        break;
                case 10:
                        printf("%d-Octobre-%d", d,y);
                        break;
                case 11:
                        printf("%d-Novembre-%d", d,y);
                        break;

                case 12:
                        printf("%d-Decembre-%d", d,y);
                        break;
                default:
                        break;
        }
        return 0;
}