Implementar el método acolarMensajesCirculares de la clase Mensajero.

class Mensajero {

  public:

    /*
     * post: analiza los Mensajes de 'mensajesPendientes' y
     *       agrega a la cola 'mensajesCirculares' aquellos que tienen como
     *       destinatario a su remitente.
     */
    void acolarMensajesCirculares(Lista<Mensaje*>* mensajesPendientes,
                                  Cola<Mensaje*>* mensajesCirculares);
};

class Mensaje {

  public:

    /*
     * post: Mensaje con el contenido dado en 'texto' que envía el usuario
     *       indicado como 'remitente' y al usuario indicado por 'destinatario'.
     */
    Mensaje(string remitente, string texto, string destinatario);
   
    /*
     * post: devuelve el nombre del usuario que envía el mensaje.
     */
    string obtenerRemitente();

    /*
     * post: devuelve el texto del mensaje.
     */
    string obtenerContenido();

    /*
     * post: devuelve el nombre del usuario destinatario del mensaje.
     */
    string obtenerDestinatario();
   
};






//Falta el :: lo dejo asi porque es como viene en el enunciado,seria Mensajero::

    /* 
     * post: analiza los Mensajes de 'mensajesPendientes' y
     *       agrega a la cola 'mensajesCirculares' aquellos que tienen como
     *       destinatario a su remitente.
     */ 

void acolarMensajesCirculares(Lista<Mensaje*>* mensajesPendientes, Cola<Mensaje*>* mensajesCirculares) {



    mensajesPendientes->iniciarCursor();



    while (mensajesPendientes->avanzarCursor()) {



        Mensaje* mensajeActual = mensajesPendientes->obtenerCursor();



        if (mensajeActual->obtenerRemitente() == mensajeActual->obtenerDestinatario()) {



            mensajesCirculares->acolar(mensajeActual);

        }

    }



}


//PUNTAJE 5.0/5.0
