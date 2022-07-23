#pragma once

// Followed tutorial: https://www.youtube.com/watch?v=LHux_N6GgR0

#include <map>
#include <string>
#include <memory>

#include "./Token.h"

namespace byteofsin::datastructures {
    namespace js = javascript;
    namespace javascript {
        /* A class to represent, read, and render 
         * a json file */
        class Json {
            // Lifecycle Management
            public:
                ~Json();                                    // Destructor 
                Json(const Json&) = delete;                 // Copy Constructor
                Json(Json&&) = delete;                      // Move Constructor
                Json& operator=(const Json&) = delete;      // Copy Assignment
                Json& operator=(Json&&) = delete;           // Move Assignment


            // Class API
            public:
                Json();
                std::string ToString(){

                };

            // Properties
            private:   
                // Local struct to keep implementation scope local
                struct Implementation;

                // Contains pointer to implementation
                std::unique_ptr<struct Implementation> implementationPtr;
        };
    };
};