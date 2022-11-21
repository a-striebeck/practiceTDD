:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\Person.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Arm.cpp 
g++ -Wall -std=c++11 -I.\include -c .\src\Brain.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Leg.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Vest.cpp
g++ -Wall -std=c++11 -I.\include -c main.cpp 

:: Compilo el Binario
g++ -I.\include Arm.o Brain.o Leg.o Person.o Vest.o main.o -o application.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
application.exe