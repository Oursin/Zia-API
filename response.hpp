#pragma once

#include <any>
#include <string>
#include <map>
#include "status.hpp"

namespace Zia::API::HTTP {
/**
 *
 */
class IResponse {
    /**
     * Sets a cookie value
     * @param cookie The name of the cookie to set
     * @param value The value of the cookie
     */
    virtual void setCookie(std::string cookie, std::string value) = 0;
    /**
     * Delete a cookie
     * @param cookie The name of the cookie to delete
     */
    virtual void clearCookie(std::string cookie) = 0;
    /**
     * Returns the value of a header field
     * @param field The field to get
     * @return The value associated with the header field. Returns an empty string if not set.
     */
    virtual std::string getHeader(std::string field) const = 0;
    /**
     * Sets the value of a header field
     * @param field The field to set
     * @param value The value to associate with this header field
     */
    virtual void setHeader(std::string field, std::string value) = 0;
    /**
     * Gets the current status code set for the response
     * @return The Status value for the response
     */
    virtual Status::Status getStatus() const = 0;
    /**
     * Sets the status code for the response
     * @param statusCode The status code to set
     */
    virtual void setStatus(Status::Status statusCode) = 0;
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