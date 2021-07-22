SUMMARY = "go.mod: golang.org/x/text"
HOMEPAGE = "https://pkg.go.dev/golang.org/x/text"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require golang.org-x-text-sources.inc

DEPENDS += "golang.org-x-tools-import-src"
DEPENDS += "golang.org-x-tools-go-buildutil"
DEPENDS += "golang.org-x-tools-go-callgraph"
DEPENDS += "golang.org-x-tools-go-loader"
DEPENDS += "golang.org-x-tools-go-ssa"
DEPENDS += "golang.org-x-mod"
DEPENDS += "golang.org-x-sys"
DEPENDS += "golang.org-x-xerrors"

GO_IMPORT = "golang.org/x/text"

inherit gosrc
