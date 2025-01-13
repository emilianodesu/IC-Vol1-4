//Declaramos las librerias que se utilizaran
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<math.h>
//Definimos la maxima longitud de cadeba a 
#define MAXIMA_LONGITUD_CADENA 50
//*****************************************************Variables globales************************************************************

//menu principal
int respuestamenu1=0;

//Declaramos las variables globales que usuaran las funciones 
int ganancias=0, gastos=0, salir=0, bucle=0, bucle_main=0;
float entradas_pos[MAXIMA_LONGITUD_CADENA], entradas_neg[MAXIMA_LONGITUD_CADENA];
char archivo_bdn[MAXIMA_LONGITUD_CADENA];
char extension[]= ".txt";
char nota[MAXIMA_LONGITUD_CADENA]="\0";
char archivo_bdn[MAXIMA_LONGITUD_CADENA];
int vacia = 0;


//*********************************************************funciones de programas************************************************************

//menu principal
void imprimir_menu_principal();
//Declaramos las funciones
//finanzas
void finanzas(); //principal
void imprimir_menu_app();
int opcion();
void entrada_registros();
void imprimir_registros();
void borrar_registros();
void guardar_registros();
int seguir_o_salir();

//limpia pantalla
void clrscr();

//calculadora
void calculadora();

//calendario
void calendario();

//bloc de notas
void blocdenotas(); //principal
void imprimir_portada();
void crearnotas();
int respuesta1();
void guardarnotas();
void clrscr();
void sobreescribirnotas();
void leernotas();
int salirop();
void borrarnotas();

int main(){ //*********************************************INICIO MAIN********************************************************
    //Invocamos al metodo imprimir_menu_principal
	imprimir_menu_principal();
	//Mientras la variable respuestamenu1 sea distinta a 5 no se saldra del programa
    while (respuestamenu1 != 5){
        if (bucle_main == 1)
        //Invocamos a la funcion imprimir_menu_principal
            imprimir_menu_principal();
        //Declaramos la estructura switch evaluando el valor de la funcion opcion
		switch(opcion()){
		//En caso de que el usuario elegio bloc de notas
		case 1: 
		//Igualamos la variable salir a 0
			salir = 0;
			clrscr();
			//Invocamos a la funcion bloc de notas
			blocdenotas();
			//Igualamos la variable respuestamenu1 a 0
			respuestamenu1 = 0;
			//Igualamos la variable bucle_main a 1
			bucle_main = 1;
			break;
		//En caso de que el usuario elegio mis finanzas
		case 2:
			//Igualamos la variable salir a 0
            salir = 0;
            clrscr();
			//Invocamos a la funcion finanzas
			finanzas();
			//Igualamos la variable respuestamenu1 a 0
            respuestamenu1 = 0;
            //Igualamos la variable bucle_main a 1
            bucle_main = 1;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
			break;
			//En caso de que el usuario calculadora
		case 3: 
		//Igualamos la variable salir a 0
			salir = 0;
			//Invocamos a la funcion para limpiar pantalla
            clrscr();
            calculadora();
            //Igualamos la variable respuestamenu1 a 0
            respuestamenu1 = 0;
            bucle_main = 1;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
			break;
			//En caso de que el usuario elegio calendario
		case 4: 
	
		//Igualamos la variable salir a 0
			salir = 0;
            calendario();
            //Igualamos la variable respuestamenu1 a 0
            respuestamenu1=0;
            bucle_main = 1;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
			break;
			//En caso de que el usuario elegio salir del programa
		default:
			//Igualamos la variable respuestamenu1 a 0
			respuestamenu1 = 5;
			break;
		} 
	}

	return 0;
}//*****************************************************FIN MAIN**************************************************************

//***************************************************Implementacion de funciones***********************************************

//menu principal
void imprimir_menu_principal(){
	//Se imprime el menu junto con las opciones
	printf("\t---Menu principal----");	
	printf("\n\n[1]Mi Bloc de notas");
	printf("\n[2]Mis finanzas");
	printf("\n[3]Calculadora basica");
	printf("\n[4]Calendario");
    printf("\n[5]Salir");
    //Se solicita al usuario a donde se desea dirigir
	printf("\n\n%cA donde se desea dirigir?\n",168);
}
//limpia pantalla
void clrscr(){
	//Limpiamos pantalla
    system("@cls||clear");
}

//finanzas
void imprimir_menu_app(){
	//Se imprime el menu de finanzas
    printf("\n\t\t\tM I S  F I N A N Z A S\n");
    printf("\nEn esta aplicacion puedes registrar tus gastos y ganancias y tener un control de ellos.\n");
    printf("\nOpciones:\n");
    printf("\n1) Registrar mis ganancias/gastos.");
    printf("\n2) Ver mis registros.");
    printf("\n3) Borrar mis registros.");
    printf("\n4) Guardar mis registros.");
    printf("\n5) Salir.\n");
}
//opcion
int opcion(){
	//Igualamos la variable de tipo entero a 0
    int opc = 0;
    //Leemos lo solicitado en la funcion anterios en la variable opc
    scanf("%d",&opc);
    return opc;
}
//entrada de registros
void entrada_registros(){
	//Invocamos a la funcion para limpiar pantalla
    clrscr();
    //Declaramos la variable de tipo entero control 
    //Igualamos la variable prev_gan a la variable ganancias 
    //Igualamos la variable prev_gas a la variable gastos
    //Igualamos la variable num_registros a 1
    int control=0, prev_gan = ganancias, prev_gas = gastos,num_registros = 1;
    //declaramos el do mientras ganancias + gastos != num_registros
    do{
    	//Declaramos el do mientras num_registros < 1
        do
        {
        	//Imprimimos en pantalla y solicitamos el num de registros
            printf("\nCuantos registros deseas guardar?\n");
            scanf("%d",&num_registros);
            //En caso que el usuario de un numero incorrecto se imprime en pantalla un aviso
            if (num_registros < 1){
                printf("Por que querrias guardar eso? Ingresa otro numero:");
            }
        } while (num_registros < 1);
        //Se solicita y se guarda las ganancias en la variable ganancias
        printf("\nCuantas ganancias tuviste?\n");
        scanf("%d",&ganancias);
        //Se solicita y se guarda los gastos en la variable gastos
        printf("\nCuantos gastos tuviste?\n");
        scanf("%d",&gastos);
        //Declaramos la estructura if
        if (ganancias + gastos != num_registros)
        //Igualamos la variable control a 1
            control = 1;
        //Declaramos la estructura if
        if (control == 1){
        	//Invocamos a la funcion para limpiar pantalla
            clrscr();
            //Se imprime en pantalla que los datos ingresados son incorrectos 
            printf("\nAlgo no cuadra... Intentalo de nuevo.\n");
            printf("Num registros = num ganancias + num gastos.\n");
        }
        //Declaramos la estructura while
    } while (ganancias + gastos != num_registros);

    ganancias = bucle == 1 ? ganancias + prev_gan : ganancias;
    gastos = bucle == 1 ? gastos + prev_gas : gastos;
    //Invocamos a la funcion para limpiar pantalla
    clrscr();
    for (int i = prev_gan; i < ganancias; i++){
        printf("\nRegistrando ganancia %d de %d: $",i+1,ganancias);
        scanf("%f",&entradas_pos[i]);
    }
    for (int j = prev_gas; j < gastos; j++){
        printf("\nRegistrando gasto %d de %d: $",j+1,gastos);
        scanf("%f",&entradas_neg[j]);
    }
}
//Imprimir registros 
void imprimir_registros(){
	//Invocamos a la funcion para limpiar pantalla
    clrscr();
    //Declaramos las variables de tipo flotante 
    float total_ganancias=0, total_gastos=0;
    if (!(entradas_pos[0] == 0 && entradas_neg[0] == 0)){
    	//Se imprimen en pantalla los registros
        printf("\n\t\t\tE S T A D O   D E   C U E N T A S\n");
        printf("\nTus ganancias son:\n");
        for (int i = 0; i < ganancias; i++){
            printf("$%.2f \n",entradas_pos[i]);
            total_ganancias += entradas_pos[i];
        }
        printf("Total: $%.2f\n", total_ganancias);

        printf("\nTus gastos son: \n");
        for (int l = 0; l < gastos; l++){
            printf("-$%.2f \n",entradas_neg[l]); 
            total_gastos += entradas_neg[l];
        }
        printf("Total: -$%.2f", total_gastos);
        printf("\n\nTu balance es de $%.2f\n",total_ganancias-total_gastos);
    }
    else{
        printf("\nRegistros vacios\n");
    }
}
//seguir o salir
int seguir_o_salir(){
	//Declaramos la variable de tipo entero eleccion 
    int eleccion;
    //Se le pregunta al usuario si desea salir o quedarse
    printf("\nDesea hacer otra operacion o salir?\n");
    printf("\n1) Otra operacion");
    printf("\n2) Salir\n");
    //La respuesta se guarda en la variable eleccion
    scanf("%d",&eleccion);
    return eleccion;
}
//Borrar registros
void borrar_registros(){
	//mediante un for vaciamos los arreglos para "Borrar" los registros"
    for (int i = 0; i < MAXIMA_LONGITUD_CADENA; i++)
        entradas_pos[i] = 0;
    for (int j = 0; j < MAXIMA_LONGITUD_CADENA; j++)
        entradas_neg[j] = 0;
    ganancias = 0;
    gastos = 0;
    printf("\nRegistros borrados con exito\n");
}
//guardar registros
void guardar_registros(){
	//Declaramos las variables de tipo flotante 
    float total_ganancias=0, total_gastos=0;
    //usamos un char para la extension .txt
	char extension[]=".txt";
	//Invocamos a la funcion para limpiar pantalla
    clrscr();
    //Solicitamos al usuario el nombre con el que quiere guardar los registros
    printf("\nCon que nombre deseas guardar? (sin espacios)\n");
    //La respuesta se guarda en la variable archivo_bdn 
    scanf("%s",archivo_bdn); 
    strcat(archivo_bdn,extension); 
    //Abrimos el archivo con modo a
    FILE * flujo = fopen(archivo_bdn,"a");
    //En caso que nos arroje un valor nulo nos marca error
    if (flujo == NULL){
        perror("\nError en la creación del archivo\n");
    }
    else{
        if (!(entradas_pos[0] == 0 && entradas_neg[0] == 0)){
            fputs("\n\t\t\tE S T A D O   D E   C U E N T A S\n",flujo);
            fputs("\nTus ganancias son:\n",flujo);
            for (int i = 0; i < ganancias; i++){
                fprintf(flujo,"$%.2f \n",entradas_pos[i]);
                total_ganancias += entradas_pos[i];
            }
            fprintf(flujo,"Total: $%.2f\n",total_ganancias);

            fputs("\nTus gastos son: \n",flujo);
            for (int l = 0; l < gastos; l++){
                fprintf(flujo,"-$%.2f \n",entradas_neg[l]);
                total_gastos += entradas_neg[l];
            }
            fprintf(flujo,"Total: -$%.2f", total_gastos);
            fprintf(flujo,"\n\nTu balance es de $%.2f\n",total_ganancias-total_gastos);

            fflush(flujo);
            fclose(flujo);

            printf("\nArchivo guardado con exito\n");
        }
        else{
            printf("\nRegistros vacios\n");
        }
    }
}
//finanzas
void finanzas(){
    //Declaramos la estructura while
    while (salir!=5){
        imprimir_menu_app();
        switch (opcion()){
        case 1:
        	//invocamos a la funciones entrada_registros e imprimir _registros
            entrada_registros(); 
            imprimir_registros();
            //Igualamos a la variable salir a la funcion seguir o salir mas 3
            salir = seguir_o_salir()+3;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle = 1;
            break;
        case 2:
        	//invocamos a la funcion para imprimir registros
            imprimir_registros();
            //Igualamos a la variable salir a la funcion seguir o salir mas 3
            salir = seguir_o_salir()+3;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle = 1;
            break;
        case 3:
            borrar_registros();
            //Igualamos a la variable salir a la funcion seguir o salir mas 3
            salir = seguir_o_salir()+3;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle = 1;
            break;
        case 4:
            guardar_registros();
            //Igualamos a la variable salir a la funcion seguir o salir mas 3
            salir = seguir_o_salir()+3;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle = 1;
            break;
        default:
        	//Igualamos la variable salir a 5
            salir = 5;
            break;
        }
    }
}
//calculadora
void calculadora(){
	//Declaramos las variables de tipo flotante a y b, y se igualan a 0
	float a,b;
	a=0;
	b=0;
	//Declaramos las variables de tipo flotante para las operaciones y resultados
	float suma, resta, multi, division, menu, res, e;
	while (b==0){
		//Invocamos a la funcion para limpiar pantalla
		clrscr();
		//Imprimimos en pantalla el menu
		printf("\t------------------------------|CALCULADORA|------------------------------\n");
		printf("\nSeleccione una de las siguientes opciones:\n");
		printf("\t1.-Suma\n\t2.- Resta\n\t3.-Multiplicacion\n\t4.-Division\n\t5.-Al Exponente\n\t6.-Salir\n");
		//Guardamos la respuesta en la variable menu
		scanf("%f", &menu);
		//Si menu es igual a 6 salimos del programa 
        if (menu == 6){
			break;
		}
		if (menu==1) {
		clrscr();
		if (a==0){
			//Solicitamos el primer numero y lo guardamos
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
		}
		//Solicitamos el segundo numero y lo guardamos
		printf("\nIngrese segundo numero\n");
		scanf("%f", &b);
		//Calculamos suma
		res=a+b;
		//Imprimimos en pantalla el resultado
		printf("El resultado de la suma de %.1f + %.1f es %.1f\n\n", a, b, res);
		}
		//Decalramos el if
		if (menu==2) {
		//Invocamos a la funcion para limpiar pantalla
		clrscr();
		if (a==0){
				//Solicitamos el primer numero y lo guardamos
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
		}
			//Solicitamos el segundo numero y lo guardamos
		printf("\nIngrese segundo numero\n");
		scanf("%f", &b);
		//Calculamos resta
		res=a-b;
		//Imprimimos en pantalla el resultado
		printf("\nEl resultado de la resta de %.1f - %.1f es %.1f\n\n", a, b, res);
		}
		if (menu==3) {
		//Invocamos a la funcion para limpiar pantalla
		clrscr();
		if (a==0){
				//Solicitamos el primer numero y lo guardamos
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
		}
			//Solicitamos el segundo numero y lo guardamos
		printf("\nIngrese segundo numero\n");
		scanf("%f", &b);
		//Calculamos multiplicacion
		res=a*b;
		//Imprimimos en pantalla el resultado
		printf("\n\nEl resultado de la multiplicacion de %.1f * %.1f es %.1f\n\n", a, b, res);
		}
		if (menu==4) {
		//Invocamos a la funcion para limpiar pantalla
		clrscr();
		if (a==0){
				//Solicitamos el primer numero y lo guardamos
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
		}
			//Solicitamos el segundo numero y lo guardamos
		printf("\nIngrese segundo numero\n");
		scanf("%f", &b);
		//Calculamos resta
		res=a/b;
		//Imprimimos en pantalla el resultado
		printf("\n\nEl resultado de la division de %.1f / %.1f es %.1f\n\n", a, b, res);
		}
		if (menu==5) {
		//Invocamos a la funcion para limpiar pantalla
		clrscr();
		if (a==0){
				//Solicitamos el primer numero y lo guardamos
			printf("\nIngrese primer numero\n");
			scanf("%f", &a);
		}
			//Solicitamos el segundo numero y lo guardamos
		printf("\nIngrese segundo numero\n");
		scanf("%f", &b);
		//Calculamos exponente
		res=pow(a,b);
		//Imprimimos en pantalla el resultado
		printf("\n\nEl resultado del exponente de %.1f ^ %.1f es %.1f\n\n", a, b, res);
		}
		//Le preguntamos al usuario si desea salir o continuar con el resultado
		printf("1=CONTINUAR CON EL RESULTADO   0=REGRESAR AL MENU DE LA CALCULADORA\n");
		scanf("%f", &e);
		if (e==1){
			a=res;
			b=0;
		} 
		if (e==0){
			a=0;
			b=0;
		}
	}
}
//Calendario
void calendario(){
	//Declaramos las variables de tipo entero 
    int a,d,cont;
	int dia,mes,anio,semana,moduloMes,febrero,total_mes;
	int seleccion=1;
	a=d=cont=0;
	time_t sisTime;
	struct tm *tiempo;
	time(&sisTime);
	tiempo=localtime(&sisTime);
	//Asignamos los valores del sistema
	dia=tiempo->tm_mday;
	mes=tiempo->tm_mon;
	anio=(tiempo->tm_year)+1900;
	//Invocamos a la funcion para limpiar pantalla
	clrscr();
	//Se imprime en pantalla el calendario
	printf("\t-----------------------------|CALENDARIO|-----------------------------\n\n");
	printf("\tHoy es: %d/%d/%d \n\n\n",dia,mes+1,anio);

	while(seleccion != 0){
		if ((anio%4==0) && (anio%100!=0) || anio%400==0)
			febrero=29;
		else
			febrero=28;

		switch (mes){
		case 3: case 5: case 8: case 10: 
			total_mes=30; 
			break; 
		case 1: 
			total_mes=febrero; 
			break; 
		case 0: case 2: case 4: case 6: case 7: case 9: case 11: 
			total_mes=31; 
			break; 
		}

		switch (mes){
		case 0:printf("\t\tENERO\t%d",anio);break;
		case 1:printf("\t\tFEBRERO\t%d",anio);break;
		case 2:printf("\t\tMARZO\t%d",anio);break;
		case 3:printf("\t\tABRIL\t%d",anio);break;
		case 4:printf("\t\tMAYO\t%d",anio);break;
		case 5:printf("\t\tJUNIO\t%d",anio);break;
		case 6:printf("\t\tJULIO\t%d",anio);break;
		case 7:printf("\t\tAGOSTO\t%d",anio);break;
		case 8:printf("\t\tSEPTIEMBRE\t%d",anio);break;
		case 9:printf("\t\tOCTUBRE\t%d",anio);break;
		case 10:printf("\t\tNOVIEMBRE\t%d",anio);break;
		case 11:printf("\t\tDICIEMBRE\t%d",anio);break;
		}

		if (febrero==29){
			switch (mes){
			case 0:moduloMes=0;break;
			case 1:moduloMes=3;break;
			case 2:moduloMes=4;break;
			case 3:moduloMes=0;break;
			case 4:moduloMes=2;break;
			case 5:moduloMes=5;break;
			case 6:moduloMes=0;break;
			case 7:moduloMes=3;break;
			case 8:moduloMes=6;break;
			case 9:moduloMes=1;break;
			case 10:moduloMes=4;break;
			case 11:moduloMes=6;break;
			}
		}else{
			switch (mes){
			case 0:moduloMes=0;break;
			case 1:moduloMes=3;break;
			case 2:moduloMes=3;break;
			case 3:moduloMes=6;break;
			case 4:moduloMes=1;break;
			case 5:moduloMes=4;break;
			case 6:moduloMes=6;break;
			case 7:moduloMes=2;break;
			case 8:moduloMes=5;break;
			case 9:moduloMes=0;break;
			case 10:moduloMes=3;break;
			case 11:moduloMes=5;break;
			}
		}

		semana=((anio-1)%7+ ((anio-1)/4 -(3*((anio-1)/100+1)/4))%7+moduloMes+1%7)%7;

		printf("\nDo\tLu\tMar\tMier\tJue\tVier\tSab\n");
	
		for(d=0;d<semana;d++)
			printf("\t");

		for(a=1;a<=total_mes;a++){
			if(a==8-semana||a==15-semana||a==22-semana||a==29-semana ||a== 36-semana)
				printf("\n%d\t",a);
			else	
				printf("%d\t",a);
		}

		printf("\n\nDesea Buscar otra Fecha? \n\t1=SI 0=NO\t>>> ");
		scanf("%d",&seleccion);

		while (seleccion<0 || seleccion>1){
			printf("ERROR, Ingrese 1/0\n");
			printf("Desea Buscar otra Fecha? \n\t1=SI 0=NO\t>>> ");
			scanf("%d",&seleccion);
		}
		if (seleccion == 0){
			break;
		}
		
		if (seleccion == 1){
			printf("\nIngrese Mes (1-12): ");
			scanf("%d",&mes);
			mes-=1;
			printf ("Ingrese A%co: ",164);
			scanf("%d",&anio);
			clrscr();
			printf("\t-----------------------------|CALENDARIO|-----------------------------\n\n");
		}
	}
}
//bloc de notas
void blocdenotas(){
    while(salir!=6){
        imprimir_portada();
        //Declaramos el switch en funcion de la funcion respuesta1
        switch(respuesta1()){
        case 1:
        	//Invocamos a la funcion crear notas
            crearnotas();
            salir = salirop()+4;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle =1;
            break;
        case 2:
        	//Invocamos a la funcion guardar notas
            guardarnotas();
            salir = salirop()+4;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle =1;
            break;
        case 3:
        	//Invocamos a la funcion sobreescribir notas
            sobreescribirnotas();
            salir = salirop()+4;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle =1;
            break;
        case 4:
        	//Invocamos a la funcion leer notas
            leernotas();
            salir = salirop()+4;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle =1;
            break;
        case 5:
        	//Invocamos a la funcion borrar notas
            borrarnotas();
            salir = salirop()+4;
            //Invocamos a la funcion para limpiar pantalla
            clrscr();
            bucle =1;
            break;
        default:
            salir = 6;
            //Invocamos a la funcion para limpiar pantalla
			clrscr();
            break;
        }
    }	
}
//imprimir menu
void imprimir_portada(){
	//Se imprime en pantalla el menu
	printf("\t-----Mi bloc de notas-----");
	printf("\n\n%cQue desea hacer?",168);
	printf("\n\n[1]Crear nota del programa\n[2]Guardar nota en memoria\n[3]Sobreescribir nota en memoria\n[4]Leer nota\n[5]Borrar nota del programa\n[6]Salir de Mi bloc de notas\n");
}
//respuesta 1
int respuesta1(){
	//Declaramos la variable en la que se responde y la guardamos
	int respuesta1 =0;
	scanf("%d",&respuesta1);
	return respuesta1;
}
//Guardar notas
void guardarnotas(){
	//Invocamos a la funcion para limpiar pantalla
    clrscr();
    //Solicitamos el nombre en el que desea guardar las notas y las guardamos
    printf("Ingrese el nombre del archivo en el que desea guardar sus notas: (Sin espacios)\n");
    scanf("%s",archivo_bdn);
    strcat(archivo_bdn,extension);
    FILE * flujo = fopen(archivo_bdn,"a");
    if(flujo == NULL){
        perror("\nERROR(No se puedo crear el archivo)");
    }
    else{
        if (vacia == 0){
            fprintf(flujo,"%s",nota);
            fflush(flujo);
            fclose(flujo);
            printf("Nota creadas con exito");
        }
        else{
			fputs("NOTA VACIA",flujo);
            printf("\nTu nota esta vacia\n");
        }
    }    
}

void sobreescribirnotas(){
	//Invocamos a la funcion para limpiar pantalla
	clrscr();
	//Solicitamos el nombre del archivo que se desea editar
    printf("Ingrese el nombre del archivo que desea editar: (Sin extension)\n");
    scanf("%s",archivo_bdn);
    strcat(archivo_bdn,extension);
    FILE*flujo= fopen(archivo_bdn,"w");
    if(flujo == NULL){
        perror("\nERROR(No se puedo crear el archivo)");
    }
    else{
        if (vacia == 0){
            fprintf(flujo,"%s",nota);
            fflush(flujo);
            fclose(flujo);
            printf("Nota sobreescrita con exito");
        }
        else{
            printf("\nTu nota esta vacia\n");
        }
    }
}
void leernotas(){
	//Invocamos a la funcion para limpiar pantalla
	clrscr();
    char caracter;
    //Solicitamos el nombre del archivo que se desea leer
    printf("Ingrese el nombre del archivo que desea leer: (Sin extension)\n");
    scanf("%s",archivo_bdn);
    strcat(archivo_bdn,extension);
    FILE*flujo =fopen(archivo_bdn,"r");
    if(flujo == NULL){
        perror("\nERROR(No se puedo crear el archivo)");
    }
    else{
        if (vacia == 0){
            printf("\nTu nota dice:\n\n");
            while (feof(flujo)==0){
                caracter = fgetc(flujo);
                printf("%c",caracter);
            }
            fclose(flujo);
            printf("\n\nSe ha leido el archivo correctamente.\n");
        }
        else{
            printf("\n\nTu nota esta vacia\n");
        }
    }
    fclose(flujo);
}
//borrar notas
void borrarnotas(){
    nota[0] = '\0';
    printf("\nNota borrada con exito\n");
	vacia = 1;
}
//salir op
int salirop(){
	//Declaramos la variable entera
    int respuesta2;
    //preguntamos al usuario si desea salir
    printf("\n%cDesea realizar algo mas?\n",168);
    printf("[1]Si, deseo quedarme\n[2]Salir\n");
    scanf("%d",&respuesta2);
    return respuesta2;
}

void crearnotas(){
	//Invocamos a la funcion para limpiar pantalla
	clrscr();
	//Se solicita el nombre del archivo que desea crear
    printf("\nEscribe el contenido de tu nota. (Sin espacios)\n");
    scanf("%s",nota);
	vacia = 0;
}