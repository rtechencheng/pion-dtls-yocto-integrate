SUMMARY = "go.mod: golang.org/x/net"
HOMEPAGE = "https://pkg.go.dev/golang.org/x/net"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require golang.org-x-net-sources.inc

DEPENDS += "golang.org-x-sys"

GO_IMPORT = "golang.org/x/net"
GO_INSTALL = "${GO_IMPORT}/ipv6"

inherit gosrc

go_do_install_append() {
    # This is a workaround which prevent the split of main mod install the main mod src to sysroot
    # which will cause the conflict in depended recipes.
    # There is a ${BPN}-import-src_${PV}.bb which should be used by the depended recipes to get the main mod src.
    rm -rf ${D}${libdir}/go/src/${GO_IMPORT}
}
