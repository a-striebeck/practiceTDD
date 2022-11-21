:: Compilo código objeto
g++ -Wall -std=c++11 -I.\include -c .\src\Vest.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Person.cpp
g++ -Wall -std=c++11 -I.\include -I .\include\vendors\catch -c .\test\PersonUnitTest.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Arm.cpp 
g++ -Wall -std=c++11 -I.\include -I .\include\vendors\catch -c .\test\ArmUnitTest.cpp 
g++ -Wall -std=c++11 -I.\include -c .\src\Brain.cpp
g++ -Wall -std=c++11 -I.\include -I .\include\vendors\catch -c .\test\BrainUnitTest.cpp
g++ -Wall -std=c++11 -I.\include -c .\src\Leg.cpp
g++ -Wall -std=c++11 -I.\include -I .\include\vendors\catch -c .\test\LegUnitTest.cpp

:: Compilo el Binario
g++ -I.\include Arm.o Brain.o Leg.o Person.o Vest.o
g++ -I.\test PersonUnitTest.o ArmUnitTest.o BrainUnitTest.o LegUnitTest.o -o test.exe

:: Limpio los códigos objeto
DEL .\*.o

:: Ejecuto
test.exe