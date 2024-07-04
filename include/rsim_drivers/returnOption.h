#ifndef RETURN_STRUCT_H
#define RETURN_STRUCT_H

#include <string>

// Generic struct to return error or success so that the caller can handle it
struct ReturnOption {
    bool success;
    std::string errorMessage;
    ReturnOption(bool success, std::string errorMessage) : success(success), errorMessage(errorMessage) {}
    ReturnOption() : success(true), errorMessage("") {}
    ReturnOption(std::string errorMessage) : success(false), errorMessage(errorMessage) {}
    ReturnOption(bool success) : success(success), errorMessage("") {}
};

template <typename T>
struct ReturnOptionT {
    bool success;
    std::string errorMessage;
    T value;
    ReturnOptionT(bool success, std::string errorMessage, T value) : success(success), errorMessage(errorMessage), value(value) {}
    ReturnOptionT() : success(true), errorMessage(""), value(T()) {}
    ReturnOptionT(std::string errorMessage) : success(false), errorMessage(errorMessage), value(T()) {}
};

#endif