# Zia-API

[![star this repo](http://githubbadges.com/star.svg?user=Oursin&repo=Zia-API&style=default)](https://github.com/Oursin/Zia-API/stargazers)
[![fork this repo](http://githubbadges.com/fork.svg?user=Oursin&repo=Zia-API&style=default)](https://github.com/Oursin/Zia-API/fork)
[![GitHub Issues](https://img.shields.io/github/issues/Oursin/Zia-API.svg)](https://github.com/Oursin/Zia-API/issues)
[![GitHub contributors](https://img.shields.io/github/contributors/Oursin/Zia-API.svg)](https://GitHub.com/Oursin/Zia-API/graphs/contributors/)
![Contributions welcome](https://img.shields.io/badge/contributions-welcome-green.svg)
[![License](https://img.shields.io/badge/license-ISC-blue.svg)](https://opensource.org/licenses/ISC)

> Zia project's API for Epitech Students

### Introduction

Zia is an Epitech project, from the third year. The goal is to achieve a modulable HTTP server, fully configurable and using a common API shared among all students

___

Feel free to contribute !

____


## API

The API is divided into 3 major interfaces :
 - Module
 - Request
 - Response

### Module

The Module interface must be implemented by every modules. You can see them as middlewares, applied one after an other by your server for each incoming requests.

Every Module implements a single method, exec, taking as parameters the request and the response

```cpp
virtual void exec(Request &request, Response &response) = 0;
```

### Request

The Request represents the incoming HTTP request. It gives you access to a large variety of parameters from the request, such as the host, the body, headers, and so on

The Request can be modified by a module, so the next module will access the modified request. For example, you can implement a JSON parser module, parsing the textual body into JSON and forwarding the result to every modules coming after

### Response

The Response represent an HTTP response. Every modules can apply modifications on it, and once every modules are executed, the response will be serialized and sent according through the HTTP protocol

## Documentation

Documentation, automatically updated to match the latest api version, is available [HERE](https://oursin.github.io/Zia-API/)

## Roadmap

- [x] Module interface
- [x] Request interface
- [x] Response interface
- [x] HTTP status
- [x] HTTP methods

- [x] Code documentation
- [x] Documentation automatically generated and deployed
- [x] Issue template
- [x] Feature request template
- [ ] Pull request template

## Contributing

1. [Fork it](https://github.com/Oursin/Zia-API/fork)
2. Create your feature branch (`git checkout -b my-new-feature`)
3. Commit your changes (`git commit -am 'Add some feature'`)
4. Push to the branch (`git push origin my-new-feature`)
5. Create a [new Pull Request](https://github.com/Oursin/Zia-API/compare)

## Contributors

- [Oursin](https://github.com/Oursin) - Owner
- [LeChatErrant](https://github.com/LeChatErrant) - Creator and maintainer
- [Gabwiel](https://github.com/gabrielcolson) - CPP architect
- [Codelax](https://github.com/codelax) - Expert nitpicker
- [Yooooomi](https://github.com/Yooooomi) - Blockchain engineer
- [Rivalo](https://github.com/noerls) - Who's that guy?

