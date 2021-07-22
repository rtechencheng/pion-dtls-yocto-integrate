SUMMARY = "go.mod: github.com/pion/logging"
HOMEPAGE = "https://pkg.go.dev/github.com/pion/logging"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-pion-logging-sources.inc

GO_IMPORT = "github.com/pion/logging"

inherit gosrc
