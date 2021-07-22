# Get the version by curl https://proxy.golang.org/golang.org/x/tools/@latest
SRC_URI += "https://proxy.golang.org/golang.org/x/tools/@v/v0.1.5.zip;srcoutput=golang.org/x/tools;srcinput=golang.org/x/tools@v0.1.5;downloadfilename=golang.org-x-tools-0.1.5.zip;name=golang.org-x-tools"
SRC_URI[golang.org-x-tools.sha256sum] = "ed4d85b0314249df4bc0d00f9f566348f3882e42b9c1319f7a85e0d5a37b705b"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/golang.org/x/tools/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707 \
"

GOSRC_INCLUDEGUARD += "golang.org-x-tools-sources.inc"
