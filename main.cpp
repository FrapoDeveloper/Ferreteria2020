#include <iostream>
#include "feterreteria.h"
#include "sede.h"
#include "lsedes.h"
#include "persona.h"
#include "producto.h"
#include "lproductos.h"
#include "trabajador.h"
#include "cliente.h"
#include "lpersonas.h"
#include "venta.h"
#include <time.h>
#include <string.h>
using namespace std;




void menu()
{
    cout<<"\t\t\t\t\t\t\tFERRETERIA COVID"<<endl;
    cout<<"\t\t\t\t\t**************************************"<<endl;
    cout<<"\t\t\t\t\t1.ESTABLECER SEDES."<<endl;
    cout<<"\t\t\t\t\t2.LISTA DE SEDES."<<endl;
    cout<<"\t\t\t\t\t3.REGISTRAR PRODUCTOS"<<endl;
    cout<<"\t\t\t\t\t4.MOSTRAR PRODUCTOS DISPONIBLES."<<endl;
    cout<<"\t\t\t\t\t5.REGISTRAR TRABAJADOR."<<endl;
    cout<<"\t\t\t\t\t6.REEGISTRAR VENTA-CLIENTE."<<endl;
    cout<<"\t\t\t\t\t7.MOSTRAR LISTA  TRABAJADORES."<<endl;
    cout<<"\t\t\t\t\t8.MOSTRAR LISTA DE CLIENTES."<<endl;
    cout<<"\t\t\t\t\t9.DETALLE DE VENTAS."<<endl;
    cout<<"\t\t\t\t\t10.SALIR"<<endl;
    cout<<"\t\t\t\t\t**************************************"<<endl;
}



int main()
{

      char fecha[25];//ctime devuelve 26 caracteres pero tambien se podría usar un puntero de char
      time_t current_time;
      current_time=time(NULL);
      ctime(&current_time);
      strcpy(fecha, ctime(&current_time));

    int op;
    Ferreteria *ferreteria = new Ferreteria("Ferreteria covid");
    cout<<"Nombre: "<<ferreteria->getNombreFerreteria()<<endl;
    Sede *sedes[3];
    Producto *productos[3];
    Lproductos *lproductos;
    Trabajador *trabajadores[3];
    Cliente *clientes[3];
    Venta *venta[3];

    int longitud_sede,longitud_producto,longitud_trabajador,longitud_cliente;
    do
       {
       system("color A");
       system("cls");
       fflush(stdin);
       menu();
       cout<<"Porfavor ingrese una opcion: ";
       cin>>op;

       switch (op) {


        case 1:{
                    system("cls");
                    system("color C");
                    string nombre_sede;
                    int tiempo_sede;
                    longitud_sede = sizeof(sedes)/sizeof(*sedes);
                    for(int i=0;i<longitud_sede;i++){
                         fflush(stdin);
                         cout<<"\n************************************"<<endl;
                         cout<<"Lugar de la sede: ";
                         getline(cin,nombre_sede);
                         fflush(stdin);
                         cout<<"Ingresar tiempo de sedes: ";
                         cin>>tiempo_sede;
                         cout<<"************************************"<<endl;
                         sedes[i] = new Sede(nombre_sede,tiempo_sede);
                    }
                     system("pause");

                }
        break;

        case 2: {
                    system("cls");
                    system("color C");
                    Lsedes *lsedes = new Lsedes(sedes,longitud_sede);
                         lsedes->getListaSedes();
                    system("pause");

                }
       break;

       case 3:  {
                   system("cls");
                   system("color C");
                   string nombre_prod;
                   int precio_prod,id_prod;

                   longitud_producto = sizeof(productos)/sizeof(*productos);
                   for(int i=0;i<longitud_producto;i++){
                        fflush(stdin);
                        cout<<"\n************************************"<<endl;
                        cout<<"Ingresar codigo del producto: ";
                        cin>>id_prod;
                        fflush(stdin);
                        cout<<"Ingresar nombre del producto: ";
                        getline(cin,nombre_prod);
                        fflush(stdin);
                        cout<<"Ingresar precio del producto: ";
                        cin>>precio_prod;
                        cout<<"************************************"<<endl;
                        productos[i] = new Producto(nombre_prod,precio_prod,id_prod);
                   }
                   system("pause");

                }
       break;

       case 4:  {
                     system("cls");
                     system("color C");
                     cout<<"\t\t\tProductos disponibles"<<endl;
                     for(int i=0;i<longitud_producto;i++){
                         cout<<"\n--------------------------------------------------------"<<endl;
                         cout<<"Codigo producto: "<<productos[i]->getIdProducto()<<endl;
                         cout<<"Nombre producto: "<<productos[i]->getNombreProducto()<<endl;
                         cout<<"Precio de producto: "<<productos[i]->getCostoProducto()<<endl;
                         cout<<"\n--------------------------------------------------------"<<endl;

                     }
                     system("pause");
                }
       break;

       case 5:  {
                     system("cls");
                     system("color C");
                     string nombre_trabajador,almacen_trabajador;
                     long dni_trabajador;
                     int cod_trabajador;

                     longitud_trabajador = sizeof(productos)/sizeof(*productos);
                     for(int i=0;i<longitud_trabajador;i++){
                         fflush(stdin);
                         cout<<"\n************************************"<<endl;
                         cout<<"Ingresar codigo del trabajador: ";
                         cin>>cod_trabajador;
                         fflush(stdin);
                         cout<<"Ingresar nombre del trabajador: ";
                         getline(cin,nombre_trabajador);
                         fflush(stdin);
                         cout<<"Ingresar almacen del trabajador: ";
                         getline(cin,almacen_trabajador);
                         cout<<"Ingresar dni del trabajador: ";
                         cin>>dni_trabajador;
                         cout<<"************************************"<<endl;
                         trabajadores[i] = new Trabajador(nombre_trabajador,dni_trabajador,almacen_trabajador,cod_trabajador);
                     }
                     system("pause");
                }
        break;

       case 6:  {
                   system("cls");
                   system("color C");
                   string nombre_cliente;
                   int id_productocompra,dni_cliente,cod_vendedor;

                   longitud_cliente = sizeof(productos)/sizeof(*productos);
                   for(int i=0;i<longitud_cliente;i++){
                       fflush(stdin);
                       cout<<"\n************************************"<<endl;
                       cout<<"Codigo del producto comprado: ";
                       cin>>id_productocompra;
                       fflush(stdin);
                       cout<<"Ingresar nombre del cliente: ";
                       getline(cin,nombre_cliente);
                       fflush(stdin);
                       cout<<"Ingresar dni del cliente: ";
                       cin>>dni_cliente;
                       cout<<"Codigo del vendedor: ";
                       cin>>cod_vendedor;
                       cout<<"************************************"<<endl;
                       clientes[i] = new Cliente(nombre_cliente,dni_cliente,id_productocompra);
                       venta[i] = new Venta(&lproductos,longitud_producto,id_productocompra,clientes[i],cod_vendedor);
                   }

                       system("pause");
                }
       break;

       case 7:  {
                       system("cls");
                       system("color C");
                       Lpersonas *lista_trabajadores = new Lpersonas(trabajadores, longitud_trabajador);
                       lista_trabajadores->getListaTrabajadores();
                       system("pause");

                }
       break;

       case 8:  {
                       system("cls");
                       system("color C");
                       Lpersonas *lista_client = new Lpersonas(clientes, longitud_cliente);
                       lista_client->getListaClientes();

                       system("pause");
                }
        break;

       case 9:  {
                       system("cls");
                       system("color D");
                       for(int i = 0; i<longitud_producto;i++){
                           cout<<"\n------------------------------------------------------"<<endl;
                           cout<<"======================================================"<<endl;

                           cout<<"\t\t\tDETALLE DE VENTAS"<<endl;
                           cout<<"Cliente: "<<venta[i]->getClienteVenta()<<endl;
                           cout<<"Producto comprado: "<<venta[i]->getProductoVendido()<<endl;
                           cout<<"Atendido por: "<<venta[i]->getTrabajadorVenta()<<endl;
                           cout<<"Importe del cliente: "<<venta[i]->getImporteVendido()<<endl;
                           cout<<"Fecha de compra: "<<fecha;
                           cout<<"\n======================================================"<<endl;

                           cout<<"\n------------------------------------------------------"<<endl;

                       }

                        system("pause");
                }
       break;
       }


    }while(op!=10);







}
