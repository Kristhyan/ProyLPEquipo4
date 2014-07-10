// desde aqui trabajo el señor patricio gallegos que colaboro con el
//desarrollo de este proyecto no lo pudo subir desde su correo por la razon que no
//entraba a su cuenta ni con la contraseña ya que los dos trabajamos en la misma
//computadora y creo k ubo incombenientes para subir su parte asi que desidimos
//subir desde mi cuenta espero que nos sepa entender ING.Natalia Layedra Gracias.
 #include <iostream.h>
 #include <stdlib.h>
 #include <conio.h>
 #include <string.h>


struct agenda
{

char fecha[100];
char hora[100];
char evento[100];
char lugar[100];
char buscahora[100];//Buscar los eventos por hora
char buscafecha[100];//Buscar los eventos por fecha



};
struct agenda a[100][100];

int i,j;   //Variable de los arreglos
int n,m;   //La dimensión de los arreglos
int op; //Controla las opciones del menu


void eventos()
{

do
 {
//******MENU DE OPCIONES*********************************
 clrscr();
 cout<<"-----------Lenguaje de Programacion------------"<<endl;
 cout<<"------------------CALENDARIO-------------------"<<endl;
 cout<<"-                                             -"<<endl;
 cout<<"-        1.-Ingresar al calendario            -"<<endl;
 cout<<"-        2.-Mostrar todos los eventos         -"<<endl;
 cout<<"-        3.-Buscar los eventos por hora       -"<<endl;
 cout<<"-        4.-Buscar los eventos por fecha      -"<<endl;
 cout<<"-        5.-Salir                             -"<<endl;
 cout<<"-----------------------------------------------"<<endl;

 		cout<<"Ingrese la opcion"<<endl;
 		cin>>op;


 		switch(op)
 	{
   			case 1:
   				{
                j=1;
                cout<<"Ingrese la cantidad de dias"<<endl;
                cin>>n;

               for (i=1;i<=n;i++)
//culmina aqui la contribucion del compañero Patricio Gallegos....
{

                     cout<<"Ingrese la fecha"<<endl;
                		cin>>a[i][j].fecha;
                     cout<<"Ingrese la cantidad de eventos del dia"<<endl;
                		cin>>m;

               	for (j=2;j<=m+1;j++)

                     {

                     cout<<"Ingrese la hora del dia"<<endl;
               		cin>>a[i][j].hora;
               		cout<<"Ingrese el evento "<<endl;
               		cin>>a[i][j].evento;
               		cout<<"Ingrese el lugar "<<endl;
               		cin>>a[i][j].lugar;
               		cout<<endl<<endl;
                		}
               }

               	getch();
               	break;
               }

   			case 2:
                 {
                 			 j=1;
                         cout<<"Los eventos existentes son:"<<endl<<endl;

                         for (i=1;i<=n;i++)
              			 		{

                                    cout<<"Fecha    :  "<<a[i][j].fecha<<endl<<endl;
                                 for (j=2;j<=m+1;j++)

                     	   		{
                            			cout<<"Hora     :  "<<a[i][j].hora<<endl;
                     					cout<<"Evento   :  "<<a[i][j].evento<<endl;
                     					cout<<"Lugar   :  "<<a[i][j].lugar<<endl;
                                    cout<<"    	 ----------- "<<endl;
                        			}
                                 cout<<"\n*************************"<<endl<<endl;
              					 }


                  getch();
                  break;
                 }
            case 3:
                  {
                     int k=1,p=1;
                      j=1;
                  	cout<<"Ingrese la hora a buscar en el calendario"<<endl;
                     cin>>a[k][p].buscahora;
                   for (i=1;i<=n;i++)

                 	{
                              cout<<"FECHA  : "<<a[i][j].fecha<<endl;

                        for (j=2;j<=m+1;j++)
                        {
                 				if (strcmp(a[k][p].buscahora,a[i][j].hora)==0)
                        		{
                         		cout<<"\nLOS EVENTOS A LA "<<a[i][j].hora<<" HORAS SON:"<<endl<<endl;
                              cout<<"EVENTO : "<<a[i][j].evento<<endl;
                         		cout<<"LUGAR  : "<<a[i][j].lugar<<endl<<endl;
                              }
                        }
                  }
                  getch();
                  break;
                  }

            case 4:
                 {
                      int k=1,p=1;
                     		cout<<"Ingrese la fecha a buscar en el calendario"<<endl;
                     		cin>>a[k][p].buscafecha;
                   for (i=1;i<=n;i++)

                 	{

                        for (j=1;j<=m;j++)
                        {
                 				if (strcmp(a[k][p].buscafecha,a[i][j].fecha)==0)

                             {
                         		cout<<"\nLos eventos de la fecha "<<a[i][j].fecha<<" son:"<<endl<<endl;
                              cout<<"Hora   : "<<a[i][j].hora<<endl;
                  	    		cout<<"Evento : "<<a[i][j].evento<<endl;
                         		cout<<"Lugar  : "<<a[i][j].lugar<<endl<<endl;
                              }

                        }
                  }
                  getch();

                  break;
                  }
            case 5:
            		{
            			cout<<"PROGRAMA FINALIZADO"<<endl;

            			break;
           			 }
            default:
            		{
                      break;
           			 }

   }


 }
   while (op!=5);

 }

 void main()
 {

 eventos();
 }


