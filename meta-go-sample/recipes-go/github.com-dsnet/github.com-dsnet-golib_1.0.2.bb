SUMMARY = "go.mod: github.com/dsnet/golib"
HOMEPAGE = "https://pkg.go.dev/github.com/dsnet/golib"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-dsnet-golib-sources.inc

GO_IMPORT = "github.com/dsnet/golib"

inherit gosrc
