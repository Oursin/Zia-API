#pragma once

#include <string>

namespace Zia::API::HTTP::Status {
typedef struct {
    int code;
    std::string description;
} Status;
static const Status Continue = {.code=100, .description="Continue"};
static const Status SwitchingProtocols = {.code=101, .description="Switching Protocols"};
static const Status Processing = {.code=102, .description="Processing"};
static const Status EarlyHints = {.code=103, .description="Early Hints"};
static const Status Ok = {.code=200, .description="OK"};
static const Status Created = {.code=201, .description="Created"};
static const Status Accepted = {.code=202, .description="Accepted"};
static const Status NonAuthoritativeInformation = {.code=203, .description="Non-Authoritative Information"};
static const Status NoContent = {.code=204, .description="No Content"};
static const Status ResetContent = {.code=205, .description="Reset Content"};
static const Status PartialContent = {.code=206, .description="Partial Content"};
static const Status MultiStatus = {.code=207, .description="Multi-Status"};
static const Status AlreadyReported = {.code=208, .description="Already Reported"};
static const Status IMUsed = {.code=226, .description="IM Used"};
static const Status MultipleChoices = {.code=300, .description="Multiple Choices"};
static const Status MovedPermanently = {.code=301, .description="Moved Permanently"};
static const Status Found = {.code=302, .description="Found"};
static const Status SeeOther = {.code=303, .description="See Other"};
static const Status NotModified = {.code=304, .description="Not Modified"};
static const Status UseProxy = {.code=305, .description="Use Proxy"};
static const Status SwitchProxy = {.code=306, .description="Switch Proxy"};
static const Status TemporaryRedirect = {.code=307, .description="Temporary Redirect"};
static const Status PermanentRedirect = {.code=308, .description="Permanent Redirect"};
static const Status BadRequest = {.code=400, .description="bad Request"};
static const Status Unauthorized = {.code=401, .description="Unauthorized"};
static const Status PaymentRequired = {.code=402, .description="Payment Required"};
static const Status Forbidden = {.code=403, .description="Forbidden"};
static const Status NotFound = {.code=404, .description="Not Found"};
static const Status MethodNotAllowed = {.code=405, .description="Method Not Allowed"};
static const Status NotAcceptable = {.code=406, .description="Not Acceptable"};
static const Status ProxyAuthenticationRequired = {.code=407, .description="Proxy Authentication Required"};
static const Status RequestTimeout = {.code=408, .description="Request Timeout"};
static const Status Conflict = {.code=409, .description="Conflict"};
static const Status Gone = {.code=410, .description="Gone"};
static const Status LengthRequired = {.code=411, .description="Length Required"};
static const Status PreconditionFailed = {.code=412, .description="Precondition Failed"};
static const Status PayloadTooLarge = {.code=413, .description="Payload Too Large"};
static const Status URITooLong = {.code=414, .description="URI Too Long"};
static const Status UnsupportedMediaType = {.code=415, .description="Unsupported Media Type"};
static const Status RangeNotSatisfiable = {.code=416, .description="Range Not Satifiable"};
static const Status ExpectationFailed = {.code=417, .description="Expectation Failed"};
static const Status Teapot = {.code=418, .description="I'm a Teapot"};
static const Status MisdirectedRequest = {.code=421, .description="Misdirected Request"};
static const Status UnprocessableEntity = {.code=422, .description="Unprocessable Entity"};
static const Status Locked = {.code=423, .description="Locked"};
static const Status FailedDependency = {.code=424, .description="Failed Dependency"};
static const Status TooEarly = {.code=425, .description="Too Early"};
static const Status UpgradeRequired = {.code=426, .description="Upgrade Required"};
static const Status PreconditionRequired = {.code=428, .description="Precondition Failed"};
static const Status TooManyRequests = {.code=429, .description="Too Many Requests"};
static const Status RequestHeaderFieldsTooLarge = {.code=431, .description="Request Header Fields Too Large"};
static const Status UnavailableForLegalReasons = {.code=451, .description="Unavailable For Legal Reasons"};
static const Status InternalServerError = {.code=500, .description="Internal Server Error"};
static const Status NotImplemented = {.code=501, .description="Not Implemented"};
static const Status BadGateway = {.code=502, .description="Bad Gateway"};
static const Status ServiceUnavailable = {.code=503, .description="Service Unavailable"};
static const Status GatewayTimeout = {.code=504, .description="Gateway Timeout"};
static const Status HTTPVersionNotSupported = {.code=505, .description="HTTP Version Not Supported"};
static const Status VariantAlsoNegotiates = {.code=506, .description="Variant Also Negotiates"};
static const Status InsufficientStorage = {.code=507, .description="Insufficient Storage"};
static const Status LoopDetected = {.code=508, .description="Loop Detected"};
static const Status NotExtended = {.code=510, .description="Not Extended"};
static const Status NetworkAuthenticationRequired = {.code=511, .description="Network Authentication Required"};
}

int function() {
    return Zia::API::HTTP::Status::InternalServerError.code;
}