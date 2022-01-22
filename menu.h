//#############################################################################
// ARCHIVO             : menu.h
// AUTOR/ES            : Cesar Fernando Vera
// VERSION             : 0.01 beta.
// FECHA DE CREACION   : 29/06/2014.
// ULTIMA ACTUALIZACION: 25/02/2015.
// LICENCIA            : GPL (General Public License) - Version 3.
//
//  **************************************************************************
//  * El software libre no es una cuestion economica sino una cuestion etica *
//  **************************************************************************
//
// Este programa es software libre;  puede redistribuirlo  o  modificarlo bajo
// los terminos de la Licencia Publica General de GNU  tal como se publica por
// la  Free Software Foundation;  ya sea la version 3 de la Licencia,  o (a su
// eleccion) cualquier version posterior.
//
// Este programa se distribuye con la esperanza  de que le sea util,  pero SIN
// NINGUNA  GARANTIA;  sin  incluso  la garantia implicita de MERCANTILIDAD  o
// IDONEIDAD PARA UN PROPOSITO PARTICULAR.
//
// Vea la Licencia Publica General GNU para mas detalles.
//
// Deberia haber recibido una copia de la Licencia Publica General de GNU junto
// con este proyecto, si no es asi, escriba a la Free Software Foundation, Inc,
// 59 Temple Place - Suite 330, Boston, MA 02111-1307, EE.UU.

//=============================================================================
// SISTEMA OPERATIVO   : Linux (Ubuntu) / Windows XP / Windows 7.
// IDE                 : Code::Blocks - 8.02 / 10.05
// COMPILADOR          : GNU GCC Compiler (Linux) / MinGW (Windows).
// LICENCIA            : GPL (General Public License) - Version 3.
//=============================================================================
// DESCRIPCION:
//              Breve explicacion sobre el contenido del archivo.
//
////////////////////////////////////////////////////////////////////////////////
#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED
#include "iniciarTablero.h"
#include <iostream>

using namespace std;

void ayuda(){
           char letra[10];
           cout<<"                         BATALLA NAVAL"<<endl<<endl;
           cout<<"Para comenzar a jugar el participante visualizara un tablero de 10x10 casille-"<<endl;
           cout<<"ros;el mismo debera usarlo para tomar nota sobre los tiros que realiza tratando"<<endl;
           cout<<"de atinarle a los barcos del rival. En el tablero las filas estan numeradas "<<endl;
           cout<<"del 1 al 10 y a las columnas se le asignan letras desde la A hasta la J."<<endl;
           cout<<" "<<endl;
           cout<<"Al iniciar el juego de la batalla naval tu deberas undir estratejicamente los"<<endl;
           cout<<"barcos de tu adversario que estan en el tablero. Los barcos se pueden hubicar"<<endl;
           cout<<"tanto vertical como horizontalmente"<<endl;
           cout<<" "<<endl;
           cout<<"Cuentas con 25 o 50 disparos(segun la dificultad que elijas), de los cuales "<<endl;
           cout<<"cuando toques o hundas alguna nave no se descontara el disparo, pero si ese "<<endl;
           cout<<"disparo pega mas de una vez en la misma coordenada se descontara el disparo."<<endl;
           cout<<""<<endl;
           cout<<"Tienes que hundir: 1 ACORAZADO <4 casilleros>, 2 DESTRUCTORES <3 casilleros>,"<<endl;
           cout<<"3 FRAGATAS <2 casilleros> y 4 SUBMARINOS <1 casilleros>"<<endl<<endl;
           cout<<"SI ESTAS LISTO PARA COMENZAR PRESIONA <ALGO> LUEGO <ENTER>   suerte!" <<endl;
           cout<<""<<endl;
           cin>>letra;
           sys::cls();
        return;
       }


void presentacion(){
           cout<<"                                                          "<<endl;
           cout<<"  BBBB   AAAAAA  TTTTTTT  AAAAAA  L       L       AAAAAA  "<<endl;
           cout<<"  B   B  A    A     T     A    A  L       L       A    A  "<<endl;
           cout<<"  BBBB   AAAAAA     T     AAAAAA  L       L       AAAAAA  "<<endl;
           cout<<"  B   B  A    A     T     A    A  L       L       A    A  "<<endl;
           cout<<"  BBBB   A    A     T     A    A  LLLLLL  LLLLLL  A    A  "<<endl;
           cout<<"                                                          "<<endl;
           cout<<"        NN   N  AAAAAA   V    V  AAAAAA  L                "<<endl;
           cout<<"        NN   N  A    A   V    V  A    A  L                "<<endl;
           cout<<"        N N  N  AAAAAA   V    V  AAAAAA  L                "<<endl;
           cout<<"        N  N N  A    A    V  V   A    A  L                "<<endl;
           cout<<"        N   NN  A    A     VV    A    A  LLLLLL           "<<endl;
           cout<<"                                                          "<<endl;
           sys::msleep(1);
        }

void despedida(){
            cout<<" "<<endl;
            cout<<"                               )___(                          "<<endl;
            cout<<"                          _______/__/_                        "<<endl;
            cout<<"                         /===========|______                  "<<endl;
            cout<<"  ____       __   [\\\]___/____________|__[///]   __          "<<endl;
            cout<<"  \   \_____[\\]__/___________________________\__[//]______   "<<endl;
            cout<<"    \  A40                                                 |  "<<endl;
            cout<<"      \                                                  /    "<<endl;
            cout<<"*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl;
            cout<<"*~~~~~~~~~~~~ GRACIAS POR JUGAR A BATALLA NAVAL ~~~~~~~~~~~~~*"<<endl;
            cout<<"*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl;
            cout<<"*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~*"<<endl<<endl<<endl;

}
void Primer_Menu(){
            cout<<"|============================================|"<<endl;
            cout<<"\t    .::.MENU PRINCIPAL.::.              "<<endl;
            cout<<"\n\n                                      "<<endl;
            cout<<"\t         1. JUGAR                       "<<endl;
            cout<<"\t         2. AYUDA                       "<<endl;
            cout<<"\t         3. AUTOR                       "<<endl;
            cout<<"\t         4. SALIR DEL JUEGO             "<<endl;
            cout<<"                                          "<<endl<<endl;
 }

 void Segundo_Menu(){
            cout<<"*===========================================*"<<endl;
	        cout<<"*        ELEJIR DIFICULTAD                  *"<<endl;
	        cout<<"*                                           *"<<endl;
	        cout<<"*  1)- GRUMETE   <50> DISPAROS              *"<<endl;
         	cout<<"*  2)- ALMIRANTE <25> DISPAROS              *"<<endl;
	        cout<<"*  3)- VOLVER                               *"<<endl;
	        cout<<"*  4)- SALIR DEL JUEGO                      *"<<endl;
	        cout<<"*                                           *"<<endl;
	        cout<<"*-------------------------------------------*"<<endl<<endl;
 }

//=================================================================================
// FUNCION   : funcionmenu                                                       //
// ACCION    : Ejecuta menu                                                      //
// PARAMETROS: Ninguno                                                           //
// RETORNO   : Nada                                                              //
//...............................................................................//
// EJEMPLO   : Abre un menu de opciones a ejecutar en la cual el usuario elije   //
//...............................................................................//
// NOTA      : El menu recibe un dato de tipo char pero lo convierte en int      //
//-------------------------------------------------------------------------------//
///////////////////////////////////////////////////////////////////////////////////

void funcionmenu(){
	int m1[12][12];char m[10][10]; int vfa[4]; int vca[4];
	int opcion;
	char op[10];

	do{
	    //Primer_Menu();
	    Primer_Menu();
		cout << "OPCION :";cin >>op;
		opcion = op[0]-48;
		switch (opcion){
		case 1:

		    sys::cls();
		    Segundo_Menu();
	        cout<<"OPCION:";cin>>op;
	        opcion = op[0]- 48;

	        switch(opcion){
            case 1:
            sys::cls();
            cargar_barcos(m1);
            Iniciar_juego(m1,m,vfa,vca,50,0);
            funcionmenu();
              break;

            case 2:
            sys::cls();
            cargar_barcos(m1);
            Iniciar_juego(m1,m,vfa,vca,25,0);
            funcionmenu();
              break;

            case 3:
            sys::cls();
              break;

            default:
                sys::cls();
                cout<<"GRACIAS POR JUGAR"<<endl;
		  }break;

		case 2:
			sys::cls();
			ayuda();
			break;

		case 3:
			sys::cls();
			cout<<"AUTOR: CESAR FERNANDO VERA "<<endl<<endl;
			break;

		case 4:
			sys::cls();
			despedida();
			break;

		default:
			sys::cls();
			cout<<"OPCION INVALIDA." <<endl;
			break;
		}
	} while (opcion!=4);
}
//=========================================FIN DE FUNCION==================================================


#endif // MENU_H_INCLUDED
