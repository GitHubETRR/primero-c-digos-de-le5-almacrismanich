#include <stdio.h>

int main() {

      int anionac;
      int mesnac;
      int dianac;
      int edad;
      int anioact;
      int mesact;
      int diaact;
      do
      {
            printf("Ingrese su año de nacimiento\n");
            scanf("%d",&anionac);
            printf("Ingrese su mes de nacimiento\n");
            scanf("%d",&mesnac);
            printf("Ingrese su dia de nacimiento\n");
            scanf("%d",&dianac);
            printf("Ingrese el año actual\n");
          scanf("%d",&anioact);
          printf("Ingrese el mes actual\n");
          scanf("%d",&mesact);
          printf("Ingrese dia actual\n");
          scanf("%d",&diaact);
      }
      while((anionac<0) && (mesnac<0) && (mesnac>=12) && (dianac<0) &&( dianac>=31));
      if((mesnac>=mesact) && (dianac>diaact)) {
            edad=anioact-anionac;
            printf("Ud. tiene %d años",edad-1);
      }
      else {
            printf("Ud. tiene %d años",edad);
      }
      if((mesnac=1) && (dia nac<=19) || (mesnac=12) && (dianac>=22)){
          printf("\n Tu signo del zodiaco: Capricornio")}
       else if((mesnac=1) && (dianac>19) || (mes nac=2) && (dianac<=18))
        printf("\n Tu signo del zodiaco: Acuario")}
        else if((mesnac=2) && (dianac>18) || (mes nac=3) && (dianac<=20))
        printf("\n Tu signo del zodiaco: Piscis")}
}
}
      return 0;
}
