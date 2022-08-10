/*!
* @file parse.h
* @author Yandex Practicum
* @date 2022
* @version 1.0
* 
* @brief Заголовочный файл с описанием парсера
* 
* Модуль парсера, используя токены, поступающие от лексического анализатора, 
* формирует абстрактное синтаксическое дерево. 
* Узлы этого дерева — классы, которые реализуют интерфейс Executable, 
* соответствующие синтаксическим конструкциям языка Mython
* 
*/
#pragma once

#include <memory>
#include <stdexcept>

namespace parse {
class Lexer;
}

namespace runtime {
class Executable;
}

struct ParseError : std::runtime_error {
	using std::runtime_error::runtime_error;
};

std::unique_ptr<runtime::Executable> ParseProgram(parse::Lexer& lexer);
