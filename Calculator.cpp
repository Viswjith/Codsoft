#include <iostream>


class Calculator{
    private:
    

    public:
        template<typename T>
        T add( T a, T b){
            return a + b;
        }

        template<typename T>
        T sub( T a, T b){
            return a - b;
        }

        template<typename T>
        T div( T a, T b){
            return a / b;
        }

        template<typename T>
        T mod( T a, T b){
            return a % b;
        }

        template<typename T>
        T mul( T a, T b){
            return a * b;
        }

};