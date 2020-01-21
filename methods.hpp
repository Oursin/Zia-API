#pragma once

#include <string>

namespace Zia::API::HTTP {

using Method = std::string;

static const Method Options = "OPTIONS";
static const Method Get = "GET";
static const Method Head = "HEAD";
static const Method Post = "POST";
static const Method Put = "PUT";
static const Method Patch = "PATCH";
static const Method Delete = "DELETE";
static const Method Trace = "TRACE";
static const Method Connect = "CONNECT";

}