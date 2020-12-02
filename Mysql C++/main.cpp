#include <windows.h>
#include <iostream>
#include <mysql.h>
#include <mysqld_error.h>
using namespace std;

int main (int argc, char** argv){
	MYSQL *datos;
	if(!(datos = mysql_init(0))){
		cout << "Error: imposible crear el objeto datos." << endl;
		return 1; 
	};
	//direccion, usuario, contraseña, basededatos, puerto
	if(mysql_real_connect(datos, "127.0.0.1", "root", "1234", "ormfactura", 3307, NULL,0)){
		cout << "Conexion realizada con exito" << endl;
		
		const char *sql = "SELECT * FROM articulo";
		int query = mysql_query(datos, sql);
		
		if(query != 0){
			cout << "Ha ocurrido un error en la consulta";
		}else{
			MYSQL_RES *resultado = mysql_store_result(datos);
			unsigned long filas = mysql_num_rows(resultado);
			MYSQL_ROW fila;
			for(int i = 0; i < filas; i++){
				fila = mysql_fetch_row(resultado);
				//en la siguiente salida se muestra la cantidad de columnas que tiene la tabla, puede variar
				cout << fila[0] << " " << fila [1] << " " << fila[2] << endl; 
			}
			
			mysql_free_result(resultado);
		}
		
		mysql_close(datos);
	}else{
		cout << "Conexion fallida \n" << mysql_error(datos);
	}

return 0;

}

