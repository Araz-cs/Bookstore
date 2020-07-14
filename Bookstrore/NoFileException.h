//
//  NoFileException.hpp
//  Bookstore
//
//  Created by Araz Sultanian on 11/25/17.
//  Copyright © 2017 Araz Sultanian. All rights reserved.
//

#include <stdexcept>
using namespace std;


class NoFileException :public runtime_error
{
public:
    
    NoFileException() :runtime_error("Error: file cannot be found")
    {
    }
    
};

