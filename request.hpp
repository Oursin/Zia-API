#pragma once

#include <any>
#include <string>
#include <map>
#include "methods.hpp"

namespace Zia::API::HTTP {
class IRequest {
    /**
     * Gets the raw bytes of a request
     * @return The string that represents the request
     */
    virtual std::string getRaw() = 0;
    /**
     * Sets the raw bytes of the request.
     * This method should only be used by the Core and any module that deciphers the contents of the request.
     */
    virtual void setRqw(std::string raw) = 0;
    /**
     * Parses the request from it's raw bytes.
     * This method should at least fill the headers and the url parameters.
     */
     virtual void parse() = 0;
    /**
     * Returns the body of the request, as parsed by any body parsing module used.
     * @return The body of the request
     */
    virtual std::any body() = 0;
    /**
     * Gets the value of a header field
     * @param field The name of the field to get
     * @return The value of the field, an empty string if no such field is found.
     */
    virtual std::string getHeader(std::string field) = 0;
    /**
     * Returns the method of the request
     * @return The HTTP::Method object that corresponds to the method for this request
     */
    virtual HTTP::Method method() = 0;
    /**
     * Returns the protocol string for the request, e.g. HTTP/1.1
     * @return The protocol string
     */
    virtual std::string protocol() = 0;
    /**
     * The full url of the request, e.g. http://site.tld/page/info?query
     * @return The url string
     */
    virtual std::string url() = 0;
};
}