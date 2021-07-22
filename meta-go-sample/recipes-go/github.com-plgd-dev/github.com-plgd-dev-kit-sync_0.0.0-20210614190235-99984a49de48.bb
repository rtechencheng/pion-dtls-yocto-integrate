SUMMARY = "go.mod: github.com/plgd-dev/kit"
HOMEPAGE = "https://pkg.go.dev/github.com/plgd-dev/kit"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-plgd-dev-kit-sources.inc

GO_IMPORT = "github.com/plgd-dev/kit"
GO_INSTALL = "${GO_IMPORT}/sync"

inherit gosrc
