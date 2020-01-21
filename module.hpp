#pragma once

#include <variant>
#include <list>
#include "request.hpp"
#include "response.hpp"

namespace Zia::API {

using ConfigValue = std::variant<std::string, std::list<std::string>, int, bool>;

using Config = std::map<std::string, ConfigValue>;

enum ExecState {
    Before, // Before/While request
    After, // After request
};

class IModule {
    virtual enum ExecState when() = 0; // should return an ExecState to know when the module should be loaded
    virtual void exec(HTTP::IRequest &request, HTTP::IResponse &response) = 0;
    virtual void loadConfig(Config &config) = 0;
};

}