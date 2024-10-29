#include <stdio.h>
struct aluno
{
float nota1;
float nota2;
float nota3;
float media;
};

float mediaAluno(float n1, float n2, float n3){
float media;
media = (n1 + n2 + n3)/3;
return media;
}

int main(){
struct aluno aluno1, aluno2, aluno3;
aluno1.nota1 = 10;
aluno1.nota2 = 3;
aluno1.nota3 =7;
aluno1.media = mediaAluno(aluno1.nota1, aluno1.nota2, aluno1.nota3);

aluno2.nota1 = 5;
aluno2.nota2= 8;
aluno2.nota3= 10;
aluno2.media = mediaAluno(aluno2.nota1, aluno2.nota2, aluno2.nota3);


aluno3.nota1= 4;
aluno3.nota2= 9;
aluno3.nota3=10;
aluno3.media = mediaAluno(aluno3.nota1, aluno3.nota2, aluno3.nota3);

printf("-----------------------------\n");
printf("nota 1: %f\n", aluno1.nota1);
printf("nota 2: %f\n", aluno1.nota1);
printf("nota 3: %f\n", aluno1.nota1);
printf("media: %f\n", aluno1.media);
printf("Situação: %s\n", aluno1.media>=7.0?"aprovado":"reprovado");
printf("------------------------------\n");
return 0;
}