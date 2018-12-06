#pragma once
#include <set>
#include <map>
#include <string>
using namespace std;

//const map<string, int> keyword{ {"do", 12}, {}
//};

const set<string> keyword{
"asm",		"do",		"if",			"return",	"try",
"auto",		"double",	"inline",		"short",	"typedef",
"bool",		"mutable",	"int",			"signed",	"typeid",
"break",	"else",		"long",			"static",	"union",
"catch",	"explicit",	"namespace",	"struct",	"using",
"char",		"export",	"new",			"switch",	"virtual",
"extern",	"register",	"sizeof",		"typename",	"class",
"const",	"false",	"operator",		"template",	"void",
"float",	"private",	"static_cast",	"volatile",	"const_cast",
"continue",	"for",		"protected",	"throw",	"wchar_t",
"friend",	"public",	"true",			"while",	"default",
"case",		"enum",		"dynamic_cast",	"delete",	"goto",
"unsigned",	"this",		"reinterpret_cast" };

const set<string> arithmeticOperator{ "+", "-", "*", "/", "++", "--" };

const set<string> bitwiseOperator{ "&", "|", "~", "^", "<<", ">>" };

const set<string> relationalOperator{ "<", "<=", "=", ">", ">=", "<>", "==", "!=" };

const set<string> logicalOperator{ "&&", "||", "!" };

const set<string> separator{ ",", ";", ":=", ".", "(", ")", "{", "}" };

const set<string> comment{ "//", "/*", "*/" };