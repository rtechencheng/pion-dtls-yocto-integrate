SUMMARY = "go.mod: golang.org/x/crypto"
HOMEPAGE = "https://pkg.go.dev/golang.org/x/crypto"

# License is determined by the modules included and will be therefore computed
LICENSE = "${@' & '.join(sorted(set(x for x in (d.getVar('GOSRC_LICENSE') or '').split(' ') if x)))}"

# inject the needed sources
require golang.org-x-crypto-sources.inc

GO_IMPORT = "golang.org/x/crypto"
GO_INSTALL = "${GO_IMPORT}/curve25519"

inherit gosrc

go_do_install_append() {
    # This is a workaround which prevent the split of main mod install the main mod src to sysroot
    # which will cause the conflict in depended recipes.
    # There is a ${BPN}-import-src_${PV}.bb which should be used by the depended recipes to get the main mod src.
    rm -rf ${D}${libdir}/go/src/${GO_IMPORT}
}
