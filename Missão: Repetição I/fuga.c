//Enunciado
//Contexto
//Um fugitivo, um helicóptero e um policial estão em posições distintas numa pista circular, exatamente como a mostrada na figura ao lado, com dezesseis posições numeradas de 0 a 15 em direção anti-horária.
//O helicóptero e o policial ficam sempre parados. O objetivo do fugitivo é chegar no helicóptero sem passar pelo policial antes, claro. Ele pode decidir correr na direção horária, ou na direção anti-horária.
//Neste problema, dadas as posições do helicóptero, do policial e do fugitivo, e a direção em que o fugitivo decide correr, seu programa deve dizer se ele vai ou não conseguir fugir! Na figura, se o fugitivo decidir correr na direção horária, ele consegue fugir; se decidir correr na direção anti-horária, ele vai ser preso antes de chegar no helicóptero!

//Entrada
//Quatro inteiros H, P, F e D em uma única linha, que representam:
//H: a posição do helicóptero (0 a 15),
//P: a posição do policial (0 a 15),
//F: a posição do fugitivo (0 a 15),
//D: a direção em que o fugitivo corre (-1 para horário e 1 para anti-horária).
//Saída
//Imprima “S” se o fugitivo conseguir chegar ao helicóptero, ou “N” caso contrário.
//Restrições
//Os inteiros H, P e F* são distintos e estão entre 0** e 15, inclusive.
//Testes
//>>>>>>>> INSERT
//4 14 7 -1
//======== EXPECT
//S
//<<<<<<<< FINISH
//>>>>>>>> INSERT
//4 14 7 1
//======== EXPECT
//N
//<<<<<<<< FINISH
//>>>>>>>> INSERT
//15 9 8 -1
//======== EXPECT
//S
//<<<<<<<< FINISH
//>>>>>>>> INSERT
//0 14 15 -1
//======== EXPECT
//N
//<<<<<<<< FINISH
//#include <stdio.h>

int main(){
    int h, p, f, d, i, v;
    scanf("%d%d%d%d", &h, &p, &f, &d);
    if(d==-1){
        for(i=f; i>=0; i--){
            v = (i - h) + 16 % 16; //distancia entre f e h
                if(i==h){
                    printf("S\n");
                    break;
                }
                if(i==p){
                    printf("N\n");
                    break;
                }
                if(i-1<0){
                    i = 16;
                }
        }
    }
    if(d==1){
        for(i=f; i<=15; i++){
            v = (i - p) + 16 % 16; //distancia entre f e h
                if(i==p){
                    printf("N\n");
                    break;
                }
                if(i==h){
                    printf("S\n");
                    break;
                }
                if(i+1>15){
                    i = -1;
                }
        }
    }
}
