
#include "List.h"
#include <iostream>
#include <cstdlib>
using namespace std;

List::List(): _first(NULL), _last(NULL)
{


}

void List::add(Element* element, Element* quantity, Element* Id )

{
    if(_first == NULL)
    {
        _first = element;
        _last = element;
    }else{
        _last-> _next = element;
        _last = element;
    }

	//TODO: Implement this method
	cout << "You should write the code for adding " << element -> _name << endl;

}

void List::remove(int index)
{
	//TODO: Implement this method
	cout << "You should write the code for removing the index " << index << endl;
}

