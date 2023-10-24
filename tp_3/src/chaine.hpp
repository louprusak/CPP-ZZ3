#include <iostream>
#include <string>

template<typename T>
class ExceptionChaine : public std::exception
{
public:
    ExceptionChaine() {message = msg;};
    ExceptionChaine():ExceptionChaine("") {}

    const char *what() const noexcept override {
        return "Conversion en chaine impossible pour '"+
    }

private:
    typename C;
};

