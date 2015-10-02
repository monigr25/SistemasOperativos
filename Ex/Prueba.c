#include <stdio.h>

size_t my_strlen(const char *);
char *my_strncpy(char *dest, const char *src, size_t n);

char const *pt;
char *pt2;
int point;
int point2;
int main(int argc, char const *argv[])
{
	char hola[] = "CampeonMoni";
	char Moni[] = "MoniJose";
	pt = &hola[0];
	pt2 = &Moni[0];
	point = my_strlen(pt);	 
	printf("\n");
	printf("%s",my_strncpy(pt2, pt , 4));
	printf("\n");
	printf("\n");	 
	return 0;
}
//Funcion para calcular la longitud del string
size_t my_strlen(const char* src){
    //Declaramos las variables que necesitaremos	
	int c =0;
    //Recorremos el string mediante un puntero
	while(*src!='\0'){
		src++;
		c++;
	}
	return c;
}
//Funcion para devolver un número determinado de carácteres
char *my_strncpy(char *dest, const char *src, size_t n){
	//Declaramos las variables que vamos a necesitar
	int c =0;
    //Cogemos la longitud del del string destino
	while(*dest!='\0'){
		dest++;
		c++;
	}
	char arr1[c];
	printf("%d",c);	
    //Miramos si el numero de valores que se quieren copiar es mayor al tamaño del string
	if(n>=c){
		n = n - (n-c);
	}else{
        //Rellenamos el string restante con blancos	
		for(int j = n; j<c; j++){
			arr1[j]='\0';
			//printf("%d", j);
		}
	}
	//printf("%d",n);
    //Copiamos los n primero carácteres del string origen al destino
	for(int i = 0; i<n; i++){
		arr1[i]=*src;
		src++;
		//printf("%d", i);
	}
	arr1[c+1] = '\0';
    //Asignamos nuestro puntero de retorno a nuestro nuevo array
	dest = &arr1[0];
	return dest;
}

