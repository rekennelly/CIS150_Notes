//
//  Square.h
//  Class_Nov19
//
//  Created by Rachel Kennelly on 11/19/19.
//

#pragma once

class Square
{
public:
    Square()
    {
        setWidth(0);
    }
    
    void setWidth(double width)
    {
        if (width > 0)
        {
            this->width = width;
        }
        else
        {
            this->width = 0;
        }
    }
    
    double getWidth()
    {
        return width;
    }
    
    // Computed attribute
    double getArea()
    {
        return width * width;
    }
    
    
    
private:
    double width;
};
