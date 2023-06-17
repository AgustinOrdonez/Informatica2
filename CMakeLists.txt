cmake_minimum_required(VERSION 3.24)
project(Informatica2)

set(CMAKE_CXX_STANDARD 23)

add_executable(EjecicioFecha05-04 Clase02_5-04/EjercicioFecha/ejercicioDate.cpp Clase02_5-04/EjercicioFecha/Date.h Clase02_5-04/EjercicioFecha/Date.cpp)

add_executable(EjercicioPunto05-04 Clase02_5-04/EjercicioPunto/ejercicioPunto.cpp Clase02_5-04/EjercicioPunto/Punto2D.h Clase02_5-04/EjercicioPunto/Punto2D.cpp)
add_executable(EjercicioHerencia12-04 Clase03_12-04/EjercicioHerencia/EjercicioHerencia.cpp Clase03_12-04/EjercicioHerencia/Persona.cpp Clase03_12-04/EjercicioHerencia/Person.h Clase03_12-04/EjercicioHerencia/Student.cpp Clase03_12-04/EjercicioHerencia/Student.h)
#add_executable(EjercicioAuto19-04 Clase04_19-04/*)
add_executable(parcialMain PracticaPrimerParcial/parcialA/parcialMain.cpp PracticaPrimerParcial/parcialA/String.cpp PracticaPrimerParcial/parcialA/String.h PracticaPrimerParcial/parcialA/Avion.cpp PracticaPrimerParcial/parcialA/Avion.h PracticaPrimerParcial/parcialA/Hora.cpp PracticaPrimerParcial/parcialA/Hora.h PracticaPrimerParcial/parcialA/Partida.cpp PracticaPrimerParcial/parcialA/Partida.h)
add_executable(parcialB. PracticaPrimerParcial/parcialB/parcialB.cpp PracticaPrimerParcial/parcialB/Cliente.cpp PracticaPrimerParcial/parcialB/Cliente.h PracticaPrimerParcial/parcialB/Costo.cpp PracticaPrimerParcial/parcialB/Costo.h PracticaPrimerParcial/parcialB/Envio.cpp PracticaPrimerParcial/parcialB/Envio.h)

#QT directories
add_subdirectory(Clase07_10_05)
add_subdirectory(Clase08_17_05)


include_directories(DaniTest/inc)
add_executable(DANIMAIN DaniTest/main.cpp DaniTest/src/classDeparture.cpp DaniTest/src/classHour.cpp DaniTest/src/classPlane.cpp DaniTest/src/classString.cpp DaniTest/inc/classDeparture.hpp DaniTest/inc/classHour.hpp DaniTest/inc/classPlane.hpp DaniTest/inc/classString.hpp DaniTest/inc/utils.hpp DaniTest/src/utils.cpp )
add_executable(virtualMain PracticaPrimerParcial/VirtualMethods/virtualMain.cpp PracticaPrimerParcial/VirtualMethods/Parent.cpp PracticaPrimerParcial/VirtualMethods/Parent.h PracticaPrimerParcial/VirtualMethods/Child.cpp PracticaPrimerParcial/VirtualMethods/Child.h)