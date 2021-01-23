/*

ENUNCIADO :


Para la clase Lista<T> implementada con una estructura doblemente enlazada desarrollar el siguiente método, indicando pre y post condiciones:

/*
 * pre :
 * post:
 */
void agregarAlPrincipio(T elemento);

Tener en cuenta que la estructura de la lista doblemente enlazada está definida por:

template<class T> class Nodo {
   
    private:
        T dato;
        Nodo<T>* anterior;
        Nodo<T>* siguiente;

    // ...
};

template<class T> class Lista {

    private:
        Nodo<T>* primero;
        Nodo<T>* ultimo;
        unsigned int tamanio;

    // ...
};

*/





/*Pre: Requiere de un dato a insertar en la lista. Se fija si el primer valor apuntaba a null o no

*Post: Insertar un nuevo nodo al principio de una lista y le suma al tamanio uno

*/

//Falta el :: lo dejo asi porque es como viene en el enunciado, seria template<class T> void Lista<T>::

void agregarAlPrincipio(T elemento) {



    //Asumo que existe el Nodo(elemento)

    Nodo* nuevoNodo = new Nodo(elemento);

    nuevoNodo->siguiente = primero;

    nuevoNodo->anterior = NULL;



    if (primero == NULL) {

        ultimo = nuevoNodo;

    }

    else {

        primero->anterior = nuevoNodo;

        primero = nuevoNodo;

    }



    tamanio++;

}



/*

COMENTARIO:


ComentariosComentario:
La pre es incorrecta. Por un lado es redundante porque el elemento es un parámetro y por lo tanto no se puede invocar el método sin proporcionarle el parámetro. Por otro lado, explicitar "Se fija si el primer valor apuntaba a null o no" no es algo que quien utiliza el TDA deba cumplir antes de invocar el método. Confunde el concepto de precondición.



No es necesario explicitar en la post que se suma uno al tamanio, porque ese es un detalle de la implementación, que quien usa el TDA no necesita conocer.



Nodo es un template, por lo tanta se declara y crea de la siguiente manera:

Nodo<T>* nuevoNodo = new Nodo<T>(elemento);



Los atributos "siguiente" y "anterior" de Nodo<T> son privados, por lo tanto no pueden ser accedidos desde Lista<T>, es necesario utilizar los métodos públicos que tiene Nodo<T>.



En el caso de que la lista esté vacía, hay que apuntar tanto el ultimo como el primero al nuevo Nodo.



    if (primero == NULL) {
        primero = nuevoNodo;

        ultimo = nuevoNodo;

    }

...


El atributo "anterior" ya lo inicializa Nodo<T> en NULL, no es necesario hacerlo explítamente.
*/
