# SenML Protobuf Serializer

This repo contains the Protobuf description of [RFC8428 - Sensor Measurement Lists (SenML)](https://tools.ietf.org/html/rfc8428) and generated source code for the following languages:
* C++
* Python 
* Java
* JavaScript
* C#
* Ruby
* PHP
* Go (using [protoc-gen-go](https://github.com/golang/protobuf) plugin)

## Go
[![GoDoc](https://godoc.org/github.com/farshidtz/senml.proto/go?status.svg)](https://godoc.org/github.com/farshidtz/senml.proto/go)
### Import
```
import senmlproto "github.com/farshidtz/senml.proto/go"
```

### Compile
```
protoc --go_out=go senml.proto
```
