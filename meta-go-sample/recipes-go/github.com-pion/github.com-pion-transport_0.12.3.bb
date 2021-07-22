SUMMARY = "go.mod: github.com/pion/transport"
HOMEPAGE = "https://pkg.go.dev/github.com/pion/transport"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-pion-transport-sources.inc

DEPENDS += "github.com-pion-logging"

GO_IMPORT = "github.com/pion/transport"

inherit gosrc
