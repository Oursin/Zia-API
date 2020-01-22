#pragma once

#include <any>
#include <string>
#include <map>
#include "Status.hpp"

namespace zia::http {

/**
 * The Response interface defines a set of methods to use to handle the crafting of the response that
 * will be sent back to the client.
 */
class Response {
public:

    /**
     * Used by the core to get the string representation of the response, which will be sent back to the client
     * @return The string representation of the request
     */
    virtual std::string toString() = 0;

    /**
     * Sets a cookie value via the Set-Cookie header, as defined in RFC 6265
     * @param cookie The name of the cookie to set
     * @param value The value of the cookie
     */
    virtual void setCookie(std::string cookie, std::string value) = 0;

    /**
     * Delete a cookie from the Set-Cookie header, as defined in RFC 6265
     * @param cookie The name of the cookie to delete
     */
    virtual void clearCookie(std::string cookie) = 0;

    /**
     * Returns the value of a header field, as defined in RFC 2616, 4.2
     * @param field The field to get
     * @return The value associated with the header field. Returns an empty string if not set.
     */
    virtual std::string getHeader(std::string field) const = 0;

    /**
     * Sets the value of a header field, as defined in RFC 2616, 4.2
     * @param field The field to set
     * @param value The value to associate with this header field
     */
    virtual void setHeader(std::string field, std::string value) = 0;

    /**
     * Gets the current status code set for the response, as defined in RFC 2616, 6.1
     * @return The Status value for the response
     */
    virtual http::Status getStatus() const = 0;

    /**
     * Sets the status code for the response, as defined in RFC 2616, 6.1
     * @param statusCode The status code to set
     */
    virtual void setStatus(http::Status statusCode) = 0;

    /**
     * Sets a file as the body of the reponse
     * @param filePath the file's path
     */
    virtual void setFile(std::string filePath) = 0;

    /**
     * Sets the body of the response from a file
     * @param body The body of the request
     */
    virtual void setBody(std::string body) = 0;
};
}
