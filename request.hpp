#pragma once

#include <any>
#include <string>
#include <map>

class IRequest {
    virtual std::string toString() = 0;
    virtual std::any body() = 0; // Body should be a string at first ? Can be changed by modules, like images or json object

    virtual std::string getHeader(std::string field) = 0;
    virtual std::string hostname() = 0;
    virtual std::string ip() = 0; // 1.1.1.1
    virtual std::string method() = 0; // GET
    virtual std::string protocol() = 0; // HTTP/1.1
    virtual std::string url() = 0; // http://site.tld/page/info?query

    virtual bool accept(std::string mimetype) = 0;
    virtual bool acceptCharset(std::string charset) = 0;
    virtual bool acceptEncoding(std::string encoding) = 0;
    virtual bool acceptLanguage(std::string language) = 0;
    virtual bool isType(std::string mimeType) = 0;
};
