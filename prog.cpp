#include <iostream>
using namespace std;

class Usuario{
    private:
        int id=1234;
        int age=21;
        string name;
    public:
        friend int Status_saida(Usuario);
};

int Status_saida(Usuario usuario){
    cout<< usuario.id << endl;
    return usuario.id;
}
int main(){
    Usuario user1;
    Status_saida(user1);
    return 0;
}