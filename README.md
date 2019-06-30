# Генератор турнирной сетки

Курсовой проект по дисциплине Технологии разработки программного обеспечения.
[![Build Status](https://travis-ci.org/Ilihon/TRPO-kursovaya-tournament-grid.svg?branch=master)](https://travis-ci.org/Ilihon/TRPO-kursovaya-tournament-grid)

# О проекте
Проект представляет собой консольной приложение с использованием графических библиотек SFML, разработанное для OC Linux. 
Программа генерирует турнирную сетку в зависимости от колчиства команд и их названий.

# Сборка и запуск приложения

   Сборка возможна на Unix-подобных операционных системах на базе ядра Linux
   * $ git clone https://github.com/Ilihon/TRPO-kursovaya-tournament-grid.git
   * $ cd TRPO-kursovaya-tournament-grid
   * $ make
   * $ ./run.sh (Если вылезает ошибка "отказано в доступе", введите команду sudo chmod 777 run.sh)
# Сборка и запуск тестов
   * $ cd TRPO-kursovaya-tournament-grid
   * $ make test
   * $ ./runtest.sh (Если вылезает ошибка "отказано в доступе", введите команду sudo chmod 777 runtest.sh)
