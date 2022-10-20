#include <string>
#include <sstream>
#include <vector>
#include <assert.h>



/**
 * alloc_chars
 */
char** alloc_chars(int n, int m) 
{
	char **chars;
	chars = calloc(sizeof(char *), n);

	for(int i = 0; i < n; i++) {
		chars[i] = calloc(sizeof(char), m); 
	}
 
	return chars;
}



void split(tstring<Elem> text, Elem const delimiter)
{
   auto sstr = tstringstream<Elem>{ text };
   auto tokens = std::vector<tstring<Elem>>{};
   auto token = tstring<Elem>{};
   while (std::getline(sstr, token, delimiter))
   {
      if (!token.empty()) tokens.push_back(token);
   }

   return tokens;
}

tsplit( char **result, int size, char *text, tstring<Elem> text, tstring<Elem> const & delimiters)
{


   size_t pos, prev_pos = 0;
   while ((pos = text.find_first_of(delimiters, prev_pos)) != std::string::npos)
   {
      if (pos > prev_pos)
         tokens.push_back(text.substr(prev_pos, pos - prev_pos));
      prev_pos = pos + 1;
   }

   if (prev_pos< text.length())
      tokens.push_back(text.substr(prev_pos, std::string::npos));

   return tokens;
}

int main()
{
   using namespace std::string_literals;

   std::vector<std::string> expected{"this", "is", "a", "sample"};

   assert(expected == split("this is a sample"s, ' '));
   assert(expected == split("this,is a.sample!!"s, ",.! "s));
}
