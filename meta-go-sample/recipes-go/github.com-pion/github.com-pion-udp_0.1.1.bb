SUMMARY = "go.mod: github.com/pion/udp"
HOMEPAGE = "https://pkg.go.dev/github.com/pion/udp"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-pion-udp-sources.inc

DEPENDS += "github.com-pion-transport"

GO_IMPORT = "github.com/pion/udp"

inherit gosrc
