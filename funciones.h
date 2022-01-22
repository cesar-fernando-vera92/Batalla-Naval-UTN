//#############################################################################
// ARCHIVO             : Funciones.h
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
#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
#include <iostream>

using namespace std;

       int atinados,w=0;
       char c1=217;char c2=191;char c3=218;char c4=192;
       char c5=179;char c6=196;char c7=195;char c8=180;
       char c9=193;char ca=194;char cb=197;char cc='x';

     void tablero1(char m[10][10]){
                cout<<""<<endl;
                cout<<"\t\t\t\t\t  INGRESE LA LETRA <W> PARA TECLA FLASH."<<endl;
                cout<<"                  TABLERO               "<<endl;
                cout<<"      "<<c3<<c6<<c6<<c6<<ca<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c2<<endl;
                cout<<"      "<<c5<<" "<<cc<<" "<<c5<<" " << "A"    <<" " << "B"    <<" " << "C"    <<" "<< "D"    <<" "<< "E"    <<" "<< "F"    <<" "<< "G"    <<" "<< "H"    <<" "<< "I"    <<" "<< "J "<<c5<<endl;
                cout<<"      "<<c7<<c6<<c6<<c6<<cb<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c8<<endl;
                cout<<"      "<<c5<<" 0 "<<c5<<" " << m[0][0]<<" " << m[0][1]<<" " << m[0][2]<<" "<< m[0][3]<<" "<< m[0][4]<<" "<< m[0][5]<<" "<< m[0][6]<<" "<< m[0][7]<<" "<< m[0][8]<<" "<< m[0][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 1 "<<c5<<" " << m[1][0]<<" " << m[1][1]<<" " << m[1][2]<<" "<< m[1][3]<<" "<< m[1][4]<<" "<< m[1][5]<<" "<< m[1][6]<<" "<< m[1][7]<<" "<< m[1][8]<<" "<< m[1][9]<<" "<<c5<<"      Disparos atinados:"<<" "<<atinados<< "/20" <<endl;
                cout<<"      "<<c5<<" 2 "<<c5<<" " << m[2][0]<<" " << m[2][1]<<" " << m[2][2]<<" "<< m[2][3]<<" "<< m[2][4]<<" "<< m[2][5]<<" "<< m[2][6]<<" "<< m[2][7]<<" "<< m[2][8]<<" "<< m[2][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 3 "<<c5<<" " << m[3][0]<<" " << m[3][1]<<" " << m[3][2]<<" "<< m[3][3]<<" "<< m[3][4]<<" "<< m[3][5]<<" "<< m[3][6]<<" "<< m[3][7]<<" "<< m[3][8]<<" "<< m[3][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 4 "<<c5<<" " << m[4][0]<<" " << m[4][1]<<" " << m[4][2]<<" "<< m[4][3]<<" "<< m[4][4]<<" "<< m[4][5]<<" "<< m[4][6]<<" "<< m[4][7]<<" "<< m[4][8]<<" "<< m[4][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 5 "<<c5<<" " << m[5][0]<<" " << m[5][1]<<" " << m[5][2]<<" "<< m[5][3]<<" "<< m[5][4]<<" "<< m[5][5]<<" "<< m[5][6]<<" "<< m[5][7]<<" "<< m[5][8]<<" "<< m[5][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 6 "<<c5<<" " << m[6][0]<<" " << m[6][1]<<" " << m[6][2]<<" "<< m[6][3]<<" "<< m[6][4]<<" "<< m[6][5]<<" "<< m[6][6]<<" "<< m[6][7]<<" "<< m[6][8]<<" "<< m[6][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 7 "<<c5<<" " << m[7][0]<<" " << m[7][1]<<" " << m[7][2]<<" "<< m[7][3]<<" "<< m[7][4]<<" "<< m[7][5]<<" "<< m[7][6]<<" "<< m[7][7]<<" "<< m[7][8]<<" "<< m[7][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 8 "<<c5<<" " << m[8][0]<<" " << m[8][1]<<" " << m[8][2]<<" "<< m[8][3]<<" "<< m[8][4]<<" "<< m[8][5]<<" "<< m[8][6]<<" "<< m[8][7]<<" "<< m[8][8]<<" "<< m[8][9]<<" "<<c5<<endl;
                cout<<"      "<<c5<<" 9 "<<c5<<" " << m[9][0]<<" " << m[9][1]<<" " << m[9][2]<<" "<< m[9][3]<<" "<< m[9][4]<<" "<< m[9][5]<<" "<< m[9][6]<<" "<< m[9][7]<<" "<< m[9][8]<<" "<< m[9][9]<<" "<<c5<<endl;
                cout<<"      "<<c4<<c6<<c6<<c6<<c9<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c6<<c1<<endl;
                cout<<endl<<endl;
              }

       void tablero2(int m1[12][12]){
                cout <<endl<<endl;
                cout << "      " << c3 << c6 << c6 << c6 << ca << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c2 << endl;
                cout << "      " << c5 << " " << cc << " " << c5 << " " << "A" << " " << "B" << " " << "C" << " " << "D" << " " << "E" << " " << "F" << " " << "G" << " " << "H" << " " << "I" << " " << "J " << c5 << endl;
	            cout << "      " << c7 << c6 << c6 << c6 << cb << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c8 << endl;
	            cout << "      " << c5 << " 0 " << c5 << " " << m1[1][1] << " " << m1[1][2] << " " << m1[1][3] << " " << m1[1][4] << " " << m1[1][5] << " " << m1[1][6] << " " << m1[1][7] << " " << m1[1][8] << " " << m1[1][9] << " " << m1[1][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 1 " << c5 << " " << m1[2][1] << " " << m1[2][2] << " " << m1[2][3] << " " << m1[2][4] << " " << m1[2][5] << " " << m1[2][6] << " " << m1[2][7] << " " << m1[2][8] << " " << m1[2][9] << " " << m1[2][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 2 " << c5 << " " << m1[3][1] << " " << m1[3][2] << " " << m1[3][3] << " " << m1[3][4] << " " << m1[3][5] << " " << m1[3][6] << " " << m1[3][7] << " " << m1[3][8] << " " << m1[3][9] << " " << m1[3][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 3 " << c5 << " " << m1[4][1] << " " << m1[4][2] << " " << m1[4][3] << " " << m1[4][4] << " " << m1[4][5] << " " << m1[4][6] << " " << m1[4][7] << " " << m1[4][8] << " " << m1[4][9] << " " << m1[4][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 4 " << c5 << " " << m1[5][1] << " " << m1[5][2] << " " << m1[5][3] << " " << m1[5][4] << " " << m1[5][5] << " " << m1[5][6] << " " << m1[5][7] << " " << m1[5][8] << " " << m1[5][9] << " " << m1[5][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 5 " << c5 << " " << m1[6][1] << " " << m1[6][2] << " " << m1[6][3] << " " << m1[6][4] << " " << m1[6][5] << " " << m1[6][6] << " " << m1[6][7] << " " << m1[6][8] << " " << m1[6][9] << " " << m1[6][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 6 " << c5 << " " << m1[7][1] << " " << m1[7][2] << " " << m1[7][3] << " " << m1[7][4] << " " << m1[7][5] << " " << m1[7][6] << " " << m1[7][7] << " " << m1[7][8] << " " << m1[7][9] << " " << m1[7][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 7 " << c5 << " " << m1[8][1] << " " << m1[8][2] << " " << m1[8][3] << " " << m1[8][4] << " " << m1[8][5] << " " << m1[8][6] << " " << m1[8][7] << " " << m1[8][8] << " " << m1[8][9] << " " << m1[8][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 8 " << c5 << " " << m1[9][1] << " " << m1[9][2] << " " << m1[9][3] << " " << m1[9][4] << " " << m1[9][5] << " " << m1[9][6] << " " << m1[9][7] << " " << m1[9][8] << " " << m1[9][9] << " " << m1[9][10] << " " << c5 << endl;
	            cout << "      " << c5 << " 9 " << c5 << " " << m1[10][1] << " " << m1[10][2] << " " << m1[10][3] << " " << m1[10][4] << " " << m1[10][5] << " " << m1[10][6] << " " << m1[10][7] << " " << m1[10][8] << " " << m1[10][9] << " " << m1[10][10] << " " << c5 << endl;
	            cout << "      " << c4 << c6 << c6 << c6 << c9 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c6 << c1 << endl;
	            cout <<endl<<endl;
	           }

void cargar_en_cero(int m[12][12]){
  int i,i2;
  for(i=0;i<12;i++){
    for(i2=0;i2<12;i2++){
        m[i][i2]=0;
     }
  }
}

///Carga  1 acorazados de 4 casillas///
void cargar_acorazado(int m[12][12]){
  int rhv,rf,rc,i;
  rhv = sys::random(2);
  if (rhv ==0)               ////////////////////////////////////////////////////////////////////////
  {                          //  Si da horizontal (0) los próximos aleatorios van a ser:           //
    rf = sys::random(10) + 1;//<-todas las filas (10) y,                                           //
    rc = sys::random(7) + 1; //<-solo (7) columnas para evitar desborde.                           //
    i = 0;                   ////////////////////////////////////////////////////////////////////////
    while(i != 4){
      m[rf][rc+i] = 1;
      i++;
    }
  }
  else                        ////////////////////////////////////////////////////////////////////////
  {                           //  pero si da vertical (1) los próximos aleatorios van a ser:        //
    rf = sys::random(7) + 1;  //<-solo (7) filas y,                                                 //
    rc = sys::random(10) + 1; //<-todas las columnas.                                               //
    i = 0;                    ////////////////////////////////////////////////////////////////////////
    while(i != 4){
      m[rf+i][rc] = 1;
      i++;
    }
  }
}
///<-------------------------------------------------------------------------------------------->///

///Carga 2 destructores de 3 casilleros///
void cargar_destructor(int m[12][12]){
  int rhv,rf,rc,i,i2,band;
  rhv = sys::random(2);
  if (rhv ==0){
    do                          ////////////////////////////////////////////////////////////////////
    {                           //                                                                //
      band=0;                   //  Este ciclo comprueba que la ubicación que se genere en el     //
      rf = sys::random(10);     //  aleatorio este disponible para poder insertar el destructor.  //
      rc = sys::random(8);      //                                                                //
      for(i=rf;i<rf+3;i++)      ////////////////////////////////////////////////////////////////////
      {
        for(i2=rc;i2<rc+5;i2++){
          if(m[i][i2] ==0){
           }
          else
          {
            band++;
          }
        }
      }
    }while(band!=0);
    i = 0;
    rf=rf+1;
    rc=rc+1;
    while(i != 3)
    {                           ////////////////////////////////////////////////////////////////////
      m[rf][rc+i] = 2;          //  Una vez encontrada la posición, se completa hasta alcanzar el //
      i++;                      //  tamaño del destructor (horizontal).                           //
    }                           ////////////////////////////////////////////////////////////////////
  }
  else                          //  Vertical (1)  //
  {
    do                          //  Validación  //
    {
      band=0;
      rf = sys::random(8);
      rc = sys::random(10);
      for(i=rf;i<rf+5;i++){
        for(i2=rc;i2<rc+3;i2++){
          if(m[i][i2] ==0)
          {
          }
          else
          {
            band++;
          }
        }
      }
    }while(band!=0);
    i = 0;
    rf=rf+1;
    rc=rc+1;
    while(i != 3)               //  Creación de destructor vertical //
    {
      m[rf+i][rc] = 2;
      i++;
    }
  }
}
///<-------------------------------------------------------------------------------------------->///

///Carga 3 fragatas de 2 casilleros///
void cargar_fragata(int m[12][12]){
  int rhv,rf,rc,i,i2,band;  // rvh= rango horizontal y vertical
  rhv = sys::random(2);
  if (rhv ==0)                  //  Horizontal (0)  //
  {
    do{                          //  Validación  //
      band=0;
      rf = sys::random(10);
      rc = sys::random(9);
      for(i=rf;i<rf+3;i++){
        for(i2=rc;i2<rc+4;i2++){
          if(m[i][i2]==0)
          {
           }
          else
          {
            band++;
          }
        }
      }
    }while(band!=0);
    i = 0;
    rf=rf+1;
    rc=rc+1;
    while(i != 2)               //  Creación de fragata horizontal  //
    {
      m[rf][rc+i] = 3;
      i++;
    }
  }
  else                          //  Vertical (1)  //
  {
    do{                          //  Validación  //
      band=0;
      rf = sys::random(9);
      rc = sys::random(10);
      for(i=rf;i<rf+4;i++){
        for(i2=rc;i2<rc+3;i2++){
          if(m[i][i2] ==0)
          {
          }
          else
          {
            band++;
          }
        }
      }
    }while(band!=0);
    i = 0;
    rf=rf+1;
    rc=rc+1;
    while(i != 2)               //  Creación de fragata vertical  //
    {
      m[rf+i][rc] = 3;
      i++;
    }
  }
}

///<-------------------------------------------------------------------------------------------->///

///Carga 4 submarinos de 1 casillero///
void cargar_submarino(int m[12][12]){
  int rf,rc,i,i2,band;
  do{
    band=0;
    rf = sys::random(10);
    rc = sys::random(10);
    for(i=rf;i<rf+3;i++){
      for(i2=rc;i2<rc+3;i2++){
        if(m[i][i2]==0)
        {
        }
        else
        {
          band++;
        }
      }
    }
  }while(band!=0);
  m[rf+1][rc+1] = 4;
}

///Hundir fragata///
void hundir_fragata(char m[10][10],int f,int c){
  if(m[f][c-2]=='T')
  {
    m[f][c-1]='H';
    m[f][c-2]='H';
  }
  if(m[f][c]=='T')
  {
    m[f][c-1]='H';
    m[f][c]='H';
  }
  if(m[f-1][c-1]=='T')
  {
    m[f][c-1]='H';
    m[f-1][c-1]='H';
  }
  if(m[f+1][c-1]=='T')
  {
    m[f][c-1]='H';
    m[f+1][c-1]='H';
  }
}

///Hundir destructor///

void hundir_destructor(char m[10][10],int f,int c){
  int conv=0;
  int conh=0;

  ///Horizontal///
  for(int x=-3;x<3;x++)  ///////////////////////////////////////////////////////////
  {                      // El horizontal varia ya que la columna se ve afectada  //
    if(m[f][c+x]=='T')   ///////////////////////////////////////////////////////////
    {
     conv++;
    }
    else
    {
     conv=0;
    }
    if(conv==3)
    {
      int y=x-2;
      while(y<x+1){
        m[f][c+y]='H';
        y++;
      }
    }
  }
  ///Vertical///
  for(int x=-2;x<3;x++){
    if(m[f+x][c-1]=='T')
    {
     conh++;
    }
    else
    {
     conh=0;
    }
    if(conh==3){
      int y=x-2;
      while(y<x+1)
      {
        m[f+y][c-1]='H';
        y++;
      }
    }
  }
  return;
}

//=========================================================================//
// FUNCION   : carga matriz m1                                             //
// ACCION    : ejecuta funciones para la carga matriz m1                   //
// PARAMETROS: int m1                                                      //
// RETORNO   : nada                                                        //
//.........................................................................//
// EJEMPLO   :carga 1 acorazado, 2destructores, 3 fragatas y 4 submarinos  //
//                                                                         //
//.........................................................................//
// NOTA      : pone la matriz en cero y carga los barcos en la matriz m1   //
//                                                                         //
//-------------------------------------------------------------------------//


void cargar_barcos(int m1[12][12]){
cargar_en_cero(m1);
cargar_acorazado(m1);
cargar_destructor(m1);cargar_destructor(m1);
cargar_fragata(m1);cargar_fragata(m1);cargar_fragata(m1);
cargar_submarino(m1);cargar_submarino(m1);cargar_submarino(m1);cargar_submarino(m1);
}


#endif // FUNCIONES_H_INCLUDED
