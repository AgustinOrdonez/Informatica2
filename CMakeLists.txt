cmake_minimum_required(VERSION 3.24)
project(Informatica2)

set(CMAKE_CXX_STANDARD 23)

add_executable(EjecicioFecha05-04 Clase02_5-04/EjercicioFecha/ejercicioDate.cpp Clase02_5-04/EjercicioFecha/Date.h Clase02_5-04/EjercicioFecha/Date.cpp )

add_executable(EjercicioPunto05-04 Clase02_5-04/EjercicioPunto/ejercicioPunto.cpp Clase02_5-04/EjercicioPunto/Punto2D.h Clase02_5-04/EjercicioPunto/Punto2D.cpp)
add_executable(EjercicioHerencia12-04 Clase03_12-04/EjercicioHerencia/EjercicioHerencia.cpp Clase03_12-04/EjercicioHerencia/Persona.cpp Clase03_12-04/EjercicioHerencia/Person.h Clase03_12-04/EjercicioHerencia/Student.cpp Clase03_12-04/EjercicioHerencia/Student.h)
#add_executable(EjercicioAuto19-04 Clase04_19-04/*)