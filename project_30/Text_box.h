//
// Created by Alexander Li on 11/22/24.
//

#ifndef TEXT_BOX_H
#define TEXT_BOX_H
#include <iostream>

class Text_box {

    std::string value = "Constructor failed.";

    public:

        Text_box() = default;
        explicit Text_box(const std::string& text) : value(text) {};

        std::string get_text()
        {
            return value;
        }
};

#endif //TEXT_BOX_H
