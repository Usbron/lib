#pragma once

#define WIN32_LEAN_AND_MEAN             // Исключите редко используемые компоненты из заголовков Windows
#include <iostream>
#include <vector>
#include <string>

using Lexem = std::pair<std::string, std::string>;

const Lexem LEX_EMPTY = { "", "" };
const Lexem LEX_ERROR = { "error", "" };
const Lexem LEX_EOF = { "$", "" };

void read(char& cache, std::istream& stream);
std::pair<int, Lexem> tick(int state, std::istream& stream, char& cache);

