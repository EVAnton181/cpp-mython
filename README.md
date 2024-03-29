О cpp-mython
Это среда выполнения программ на языке Mython. 
Mython - упрощённое подмножество Python.
Поддерживает основные конструкции языка Python. 
Приложение состоит из 4 модулей: 
  - лексический анализатор
  - runtime-модуль 
  - синтаксический анализатор (использованна готовая реализация)
  - интерпретатор.
  
Сборка
Для сборки этого приложения вам понадобится: cmake версии 3.10 или выше (https://cmake.org/).
И компилятор с поддержкой С++17 и выше.

Для сборки (из директории ./mython) выполните следующие действия:
(Убедитесь, что у Вас есть права на создание файлов в рабочем каталоге)

1. создайте поддиректорию ./build
( mkdir ./build )
2. перейдя в ./build выполните
cmake ../ 
(По умолчанию будет создан makefile для релизной сборки пограммы,
если Вам необходима отладочная версия используйте флаг -DCMAKE_BUILD_TYPE=Debug )
3. cmake --build .

В результате последней команды будет создан исполняемый файл ./interpreter

Программа была успешно собрана на Debian/Linux version 5.10.0-14-amd64 с gcc версии 10.2.1

Применение
Программа считывает исходный код Mython со стандартного ввода, запускает его и выводит результат на стандартный вывод.

./interpreter [OPTIONS] < (ИСПОЛНЯЕМЫЙ ФАЙЛ)

Программа поддерживает опцию -t - запускает тесты перед выполнение программы Mython

Также в корне репозитория находится файл "example.my" с простой программой на языке mython.
Для ознакомления с работой интерпретатора можно запустить его на выполнение.
./interpreter < ../../example.my
