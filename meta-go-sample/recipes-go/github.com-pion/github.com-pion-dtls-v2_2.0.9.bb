SUMMARY = "go.mod: github.com/pion/dtls/v2"
HOMEPAGE = "https://pkg.go.dev/github.com/pion/dtls/v2"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-pion-dtls-v2-sources.inc

# TODO: Does not compile!!!
DEPENDS += "github.com-pion-logging"
DEPENDS += "github.com-pion-transport"
DEPENDS += "github.com-pion-udp"
DEPENDS += "golang.org-x-crypto-native"
DEPENDS += "golang.org-x-crypto-import-src"
DEPENDS += "golang.org-x-crypto-cryptobyte"
DEPENDS += "golang.org-x-crypto-curve25519"
DEPENDS += "golang.org-x-xerrors"

GO_IMPORT = "github.com/pion/dtls/v2"

inherit gosrc
