#pragma once

#include <variant>
#include <vector>
#include "request.hpp"
#include "response.hpp"

namespace Zia::API {

using ConfigValue = std::variant<std::string, std::vector<std::string>, int, bool>;

using Config = std::map<std::string, ConfigValue>;

enum ExecState {
    /**
     * Right after te request is received
     */
    Before,
    /**
     * While request is handled
     */
    During,
    /**
     * Right before the response is sent
     */
    Last,
    /**
     * After the response is sent back
     */
    After,
};

class IModule {
    /**
     * When represents the steps during request handling when the module expects to be called.
     * @return A vector of ExecState values
     */
    virtual std::vector<enum ExecState> when() = 0;
    /**
     * Exec is the main method of a module. It will be called by the core whenever the core decides to invoke the module.
     * @param request The Request object
     * @param response The Response object
     * @param when The time during execution where this module was called
     */
    virtual void exec(HTTP::IRequest &request, HTTP::IResponse &response, enum ExecState when) = 0;
    /**
     * Lets the module store it's config.
     * @param config A map of every config parameters
     */
    virtual void loadConfig(Config &config) = 0;
};

}