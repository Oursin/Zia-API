#pragma once

#include <string>

namespace Zia::API::HTTP {

using Method = std::string;

/**
 * OPTIONS Method, as defined in RFC 2616, 9.2
 */
static const Method Options = "OPTIONS";
/**
 * GET Method, as defined in RFC 2616, 9.3
 */
static const Method Get = "GET";
/**
 * HEAD Method, as defined in RFC 2616, 9.4
 */
static const Method Head = "HEAD";
/**
 * POST Method, as defined in RFC 2616, 9.5
 */
static const Method Post = "POST";
/**
 * GET Method, as defined in RFC 2616, 9.6
 */
static const Method Put = "PUT";
/**
 * GET Method, as defined in RFC 2616, 9.7
 */
static const Method Delete = "DELETE";
/**
 * GET Method, as defined in RFC 2616, 9.8
 */
static const Method Trace = "TRACE";
/**
 * GET Method, as defined in RFC 2616, 9.9
 */
static const Method Connect = "CONNECT";
/**
 * GET Method, as defined in RFC 5789
 */
static const Method Patch = "PATCH";
}