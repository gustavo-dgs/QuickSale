#ifndef USUARIO_H
#define USUARIO_H
#include "DBOperacion.h"
#include "Clasebase.h"
#include "Entidad.h"

class Usuario: public Entidad, public ClaseBase{
protected:
    int id_usuario;
    std::string contrasena;
    std::string tipo_usuario;

public:
    Usuario();
    Usuario(std::string, std::string, std::string, std::string, std::string, std::string);
    Usuario(int, std::string, std::string, std::string, std::string, std::string, std::string);
    
    virtual ~Usuario();

    int getId_usuario() const;
    std::string getTipo_usuario() const;
    void setTipo_usuario(const std::string &value);
    std::string getContrasena() const;
    void setContrasena(const std::string &value);

    void crear();
    bool consultar(std::string, std::string);
    void actualizar();
    void eliminar();

};

#endif // USUARIO_H
