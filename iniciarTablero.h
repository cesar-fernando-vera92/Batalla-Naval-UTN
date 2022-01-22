//#############################################################################
// ARCHIVO             : iniciar Tablero.h
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
#ifndef INICIARTABLERO_H_INCLUDED
#define INICIARTABLERO_H_INCLUDED
#include "funciones.h"
#include "menu.h"
#include <iostream>

using namespace std;
int fila,colum,acua=0;

void Iniciar_juego(int m1[12][12],char m[10][10],int vfa[4],int vca[4],int tiros, int bandera){
  char comp=254;
  char opc[200];
  int opcion;
  bool game_over= false;


           for(int i=0;i<10;i++){
             for(int i2=0;i2<10;i2++){
              m[i][i2]=254;
                }
               }

                    do{
                         sys::cls();
                         tablero1(m);

                      cout<<"Tiros restantes: "<<tiros<<endl<<endl<<endl;
//================================ingreso de fila=================================================0
                     do{
                       cout<<"INGRESE UNA FILA:";cin>>opc;
                           fila=opc[0]-48;
                           if(opc[0]==119){
                            if(bandera==0){
                                sys::cls();
                                tablero2(m1);
                                sys::msleep(5);
                                sys::cls();
                                tablero1(m);
                                bandera++;
                               }
                            }
                            if (opc[0] == 's')
                             {
                              sys::cls();
                              cout<<"======================================================="<<endl;
                              cout<<"|                                                     |"<<endl;
                              cout<<"|                SEGURO DESEA SALIR?                  |"<<endl;
                              cout<<"|                                                     |"<<endl;
                              cout<<"|                1-SI         2-NO                    |"<<endl;
                              cout<<"|                                                     |"<<endl;
                              cout<<"-------------------------------------------------------"<<endl<<endl;
                              cin>>opcion;

                             switch(opcion){
                               case 1:
                                  {
                                   return ;
                                  }break;
                                  case 2:
                                    {
                                    }break;
                                  default:
                                    {
                                     cout<<"\n\nOpcion Incorrecta...";
                                     sys::msleep(1);
                                    }
                                   }
                                   sys::cls();
                                }
                        }while(fila < 0 || fila > 9);

//==================================fin de ingreso de fila================================================
//==================================ingreso de columna=====================================================
                            do{
                           if(w!=67){
                           cout<<"INGRESE UNA COLUMNA:";cin>>opc;
                           colum=opc[0]-96;
                           if(colum!=19){
                                }
                            else{
                                w=100;
                               colum=10;
                               sys::cls();
                               }
                               }
                               else{
                              colum=10;
                             }
                        }while(colum < 1 || colum > 10);
//====================================fin de ingreso de columnas================================================
         w++;
         if (m[fila][colum-1]=='A'){
                cout<<"\n ya tiraste ahi.."<<endl;
                sys::msleep(1);
                tiros--;
         }
      if(m1[fila+1][colum]==0){
          if(m[fila][colum-1]==comp){
              m[fila][colum-1]='A';
              cout<<"\n tocaste agua.."<<endl;
              sys::msleep(1);
              tiros--;
            }
      }
      else
      {
          if(m1[fila+1][colum]==4){
              if(m[fila][colum-1]==comp){
                  m[fila][colum-1]='H';
                  cout<<"\n Hundido.."<<endl;
                  sys::msleep(1);
                  w-=1;
                  atinados++;
              }
          }
          else
          {
              if(m1[fila+1][colum]==3){
                  if(m[fila][colum-1]==comp){
                      m[fila][colum-1]='T';
                      cout<<"\n Tocado.."<<endl;
                      sys::msleep(1);
                      w-=1;
                      atinados++;
                      hundir_fragata(m, fila, colum);
                    }
              }
              else
              {
                 if(m1[fila+1][colum]==2){
                     if(m[fila][colum-1]==comp){
                         m[fila][colum-1]='T';
                         cout<<"\n Tocado..."<<endl;
                         sys::msleep(1);
                         w-=1;
                         atinados++;
                         hundir_destructor(m, fila, colum);
                       }
                   }
                   else
                   {
                     if(m[fila][colum-1]==comp){
                         m[fila][colum-1]='T';
                         cout<<"\n Tocado..."<<endl;
                         sys::msleep(1);
                         w-=1;
                         atinados++;
                         ///Hunde el acorazado///
                         vfa[acua]=fila;
                         vca[acua]=colum;
                         acua++;
                         if(acua==4){
                          int x;
                          for(x=0;x<4;x++)
                          {
                            m[vfa[x]][vca[x]-1]='H';
                          }
                         }
                       }
                   }
              }
          }
      }


      if(tiros==0){
            sys::cls();
            game_over=true;
            cout<<"\n\t PERDISTEEEEEE"<<endl<<endl<<endl;
        }
      if(atinados==20){
           sys::cls();
           cout<<"\n\t  GANASTEEEEEEEE "<<endl<<endl<<endl;
          return;
      }
    }while(game_over!=true);

}

//#################################################################################################
//========================================fin de funcion juego=====================================
//#################################################################################################


#endif // INICIARTABLERO_H_INCLUDED
