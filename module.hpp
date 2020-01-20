#pragma once

#include "request.hpp"
#include "response.hpp"

class IModule {
    virtual void exec(IRequest &request, IResponse &response) = 0;
};

// TODO module expose type MIME qu'ils expectent