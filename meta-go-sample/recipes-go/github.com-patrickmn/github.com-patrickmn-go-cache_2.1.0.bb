SUMMARY = "go.mod: github.com/patrickmn/go-cache"
HOMEPAGE = "https://pkg.go.dev/github.com/patrickmn/go-cache"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require github.com-patrickmn-go-cache-sources.inc

GO_IMPORT = "github.com/patrickmn/go-cache"

inherit gosrc
