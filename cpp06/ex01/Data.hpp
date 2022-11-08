#pragma once

#include <iostream>
#include <string>

class Data {



};

uintptr_t serialize(Data *ptr);
Data *deserialize(uintptr_t raw);