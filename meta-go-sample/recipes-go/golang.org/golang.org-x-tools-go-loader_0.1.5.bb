SUMMARY = "go.mod: golang.org/x/tools"
HOMEPAGE = "https://pkg.go.dev/golang.org/x/tools"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require golang.org-x-tools-sources.inc

DEPENDS += "golang.org-x-sys"

GO_IMPORT = "golang.org/x/tools"
GO_INSTALL = "${GO_IMPORT}/go/loader"

inherit gosrc

go_do_install_append() {
    # This is a workaround which prevent the split of main mod install the main mod src to sysroot
    # which will cause the conflict in depended recipes.
    # There is a ${BPN}-import-src_${PV}.bb which should be used by the depended recipes to get the main mod src.
    rm -rf ${D}${libdir}/go/src/${GO_IMPORT}
}
