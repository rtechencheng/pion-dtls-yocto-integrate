# Get the version by curl https://proxy.golang.org/golang.org/x/net/@latest
SRC_URI += "https://proxy.golang.org/golang.org/x/net/@v/v0.0.0-20210716203947-853a461950ff.zip;srcoutput=golang.org/x/net;srcinput=golang.org/x/net@v0.0.0-20210716203947-853a461950ff;downloadfilename=golang.org-x-net-0.0.0-20210716203947-853a461950ff.zip;name=golang.org-x-net"
SRC_URI[golang.org-x-net.sha256sum] = "64882b0f17485c38dda91b9f74b25b6d65a60ade31f0f8d864e9d8c7cc701ded"

GOSRC_LICENSE += "\
    BSD-3-Clause \
"
LIC_FILES_CHKSUM += "\
    file://src/golang.org/x/net/LICENSE;md5=5d4950ecb7b26d2c5e4e7b4e0dd74707 \
"

GOSRC_INCLUDEGUARD += "golang.org-x-net-sources.inc"
