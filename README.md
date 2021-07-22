# pion-dtls-yocto-integrate

This is a playground of Yocto meta layer trying to build go package https://pkg.go.dev/github.com/pion/dtls/v2

It is based on [meta-raspberrypi](https://github.com/agherzan/meta-raspberrypi), [meta-asm](https://github.com/priv-kweihmann/meta-sca) and official openembedded layers.

The source code of Yocto recipes which pion/dtls/v2 required including dependencies are under [meta-go-sample](./meta-go-sample/)

The build folder include all bitbake generated workspace of https://pkg.go.dev/github.com/pion/dtls/v2 is under [github.com-pion-dtls-v2](./build/github.com-pion-dtls-v2/)

## Version info

| Package | Version |
| :--- | --- |
| https://pkg.go.dev/github.com/pion/dtls/v2 | v2.0.9 |
| https://pkg.go.dev/github.com/pion/logging | v0.2.2 |
| https://pkg.go.dev/github.com/pion/transport | v0.12.3 |
| https://pkg.go.dev/github.com/pion/udp | v0.1.1 |
| https://pkg.go.dev/github.com/dsnet/golib | v1.0.2 |
| https://pkg.go.dev/github.com/patrickmn/go-cache | v2.1.0 |
| https://pkg.go.dev/github.com/plgd-dev/kit/sync | v0.0.0-20210614190235-99984a49de48 |
| https://pkg.go.dev/github.com/yuin/goldmark | v1.4.0 |
| https://pkg.go.dev/go.uber.org/atomic | v1.9.0 |
| https://pkg.go.dev/golang.org/x/crypto/cryptobyte | v0.0.0-20210711020723-a769d52b0f97 |
| https://pkg.go.dev/golang.org/x/crypto/curve25519 | v0.0.0-20210711020723-a769d52b0f97 |
| https://pkg.go.dev/golang.org/x/crypto/ed25519 | v0.0.0-20210711020723-a769d52b0f97 |
| https://pkg.go.dev/golang.org/x/mod | v0.4.2 |
| https://pkg.go.dev/golang.org/x/net/idna | v0.0.0-20210716203947-853a461950ff |
| https://pkg.go.dev/golang.org/x/net/ipv4 | v0.0.0-20210716203947-853a461950ff |
| https://pkg.go.dev/golang.org/x/net/ipv6 | v0.0.0-20210716203947-853a461950ff |
| https://pkg.go.dev/golang.org/x/sync | v0.0.0-20210220032951-036812b2e83c |
| https://pkg.go.dev/golang.org/x/sys | v0.0.0-20210630005230-0f9fa26af87c |
| https://pkg.go.dev/golang.org/x/term | v0.0.0-20210615171337-6886f2dfbf5b |
| https://pkg.go.dev/golang.org/x/text | v0.3.6 |
| https://pkg.go.dev/golang.org/x/tools/go/buildutil | v0.1.5 |
| https://pkg.go.dev/golang.org/x/tools/go/callgraph | v0.1.5 |
| https://pkg.go.dev/golang.org/x/tools/go/loader | v0.1.5 |
| https://pkg.go.dev/golang.org/x/tools/go/ssa | v0.1.5 |
| https://pkg.go.dev/golang.org/x/xerrors | v0.0.0-20200804184101-5ec99f83aff1 |
| Yocto | dunfell |

## Issue

You need to confiure your Yocto environment properly first of all.
Different people has different Yocto configuration so I am not illustrating it here.
But I can always explain if you want to know how.

When running `bitbake github.com-pion-dtls-v2`, there is an compiling error.
The **error log** is [log.do_compile](./build/github.com-pion-dtls-v2/2.0.9-r0/temp/log.do_compile.1112306)
The compiling script is [run.do_compile](./build/github.com-pion-dtls-v2/2.0.9-r0/temp/run.do_compile.1112306)

This is a part of work derived from my work at [Wittra](wittra.se).
But the Yocto codes are free.

A ticket is opened here: https://github.com/pion/dtls/issues/385

Please help! Thanks!
