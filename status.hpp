#pragma once

#include <string>
#include <utility>

namespace Zia::API::HTTP::Status {
struct Status {
    constexpr explicit Status(int _code, const char *_description) : code(_code), description(_description) {}
    int code;
    const char *description;
};

inline constexpr Status Continue {100, "Continue"};
inline constexpr Status SwitchingProtocols {101, "Switching Protocols"};
inline constexpr Status Processing {102, "Processing"};
inline constexpr Status EarlyHints {103, "Early Hints"};
inline constexpr Status Ok {200, "OK"};
inline constexpr Status Created {201, "Created"};
inline constexpr Status Accepted {202, "Accepted"};
inline constexpr Status NonAuthoritativeInformation {203, "Non-Authoritative Information"};
inline constexpr Status NoContent {204, "No Content"};
inline constexpr Status ResetContent {205, "Reset Content"};
inline constexpr Status PartialContent {206, "Partial Content"};
inline constexpr Status MultiStatus {207, "Multi-Status"};
inline constexpr Status AlreadyReported {208, "Already Reported"};
inline constexpr Status IMUsed {226, "IM Used"};
inline constexpr Status MultipleChoices {300, "Multiple Choices"};
inline constexpr Status MovedPermanently {301, "Moved Permanently"};
inline constexpr Status Found {302, "Found"};
inline constexpr Status SeeOther {303, "See Other"};
inline constexpr Status NotModified {304, "Not Modified"};
inline constexpr Status UseProxy {305, "Use Proxy"};
inline constexpr Status SwitchProxy {306, "Switch Proxy"};
inline constexpr Status TemporaryRedirect {307, "Temporary Redirect"};
inline constexpr Status PermanentRedirect {308, "Permanent Redirect"};
inline constexpr Status BadRequest {400, "bad Request"};
inline constexpr Status Unauthorized {401, "Unauthorized"};
inline constexpr Status PaymentRequired {402, "Payment Required"};
inline constexpr Status Forbidden {403, "Forbidden"};
inline constexpr Status NotFound {404, "Not Found"};
inline constexpr Status MethodNotAllowed {405, "Method Not Allowed"};
inline constexpr Status NotAcceptable {406, "Not Acceptable"};
inline constexpr Status ProxyAuthenticationRequired {407, "Proxy Authentication Required"};
inline constexpr Status RequestTimeout {408, "Request Timeout"};
inline constexpr Status Conflict {409, "Conflict"};
inline constexpr Status Gone {410, "Gone"};
inline constexpr Status LengthRequired {411, "Length Required"};
inline constexpr Status PreconditionFailed {412, "Precondition Failed"};
inline constexpr Status PayloadTooLarge {413, "Payload Too Large"};
inline constexpr Status URITooLong {414, "URI Too Long"};
inline constexpr Status UnsupportedMediaType {415, "Unsupported Media Type"};
inline constexpr Status RangeNotSatisfiable {416, "Range Not Satifiable"};
inline constexpr Status ExpectationFailed {417, "Expectation Failed"};
inline constexpr Status Teapot {418, "I'm a Teapot"};
inline constexpr Status MisdirectedRequest {421, "Misdirected Request"};
inline constexpr Status UnprocessableEntity {422, "Unprocessable Entity"};
inline constexpr Status Locked {423, "Locked"};
inline constexpr Status FailedDependency {424, "Failed Dependency"};
inline constexpr Status TooEarly {425, "Too Early"};
inline constexpr Status UpgradeRequired {426, "Upgrade Required"};
inline constexpr Status PreconditionRequired {428, "Precondition Failed"};
inline constexpr Status TooManyRequests {429, "Too Many Requests"};
inline constexpr Status RequestHeaderFieldsTooLarge {431, "Request Header Fields Too Large"};
inline constexpr Status UnavailableForLegalReasons {451, "Unavailable For Legal Reasons"};
inline constexpr Status InternalServerError {500, "Internal Server Error"};
inline constexpr Status NotImplemented {501, "Not Implemented"};
inline constexpr Status BadGateway {502, "Bad Gateway"};
inline constexpr Status ServiceUnavailable {503, "Service Unavailable"};
inline constexpr Status GatewayTimeout {504, "Gateway Timeout"};
inline constexpr Status HTTPVersionNotSupported {505, "HTTP Version Not Supported"};
inline constexpr Status VariantAlsoNegotiates {506, "Variant Also Negotiates"};
inline constexpr Status InsufficientStorage {507, "Insufficient Storage"};
inline constexpr Status LoopDetected {508, "Loop Detected"};
inline constexpr Status NotExtended {510, "Not Extended"};
inline constexpr Status NetworkAuthenticationRequired {511, "Network Authentication Required"};
}