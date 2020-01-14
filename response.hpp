#pragma once

#include <any>
#include <string>
#include <map>
#include "status.hpp"

class IResponse {
    virtual std::map<std::string, std::any> locals() = 0;
    virtual void setLocals(std::string, std::any) = 0;

    virtual void setCookie(std::string cookie, std::string value) = 0;
    virtual void clearCookie(std::string cookie) = 0;
    virtual std::string getHeader(std::string header) const = 0;
    virtual void setHeader(std::string content) = 0;
    virtual void redirect(std::string) = 0; // redirect set header to redirect browser
    virtual enum Status getStatus() const = 0;
    virtual void setStatus(enum Status statusCode) = 0; // setStatus code of request
    virtual void setFile(std::string filePath) = 0; // setFile to body
    virtual void setBody(std::string) = 0;
};
