# Get the version by curl https://proxy.golang.org/github.com/plgd-dev/kit/@latest
SRC_URI += "https://proxy.golang.org/github.com/plgd-dev/kit/@v/v0.0.0-20210614190235-99984a49de48.zip;srcoutput=github.com/plgd-dev/kit;srcinput=github.com/plgd-dev/kit@v0.0.0-20210614190235-99984a49de48;downloadfilename=github.com-plgd-dev-kit-0.0.0-20210614190235-99984a49de48.zip;name=github.com-plgd-dev-kit"
SRC_URI[github.com-plgd-dev-kit.sha256sum] = "1b5666a18c3f7dde60a0271f72fde983f7d09f268a9552578107776d17db56a8"

GOSRC_LICENSE += "\
    Apache-2.0 \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/plgd-dev/kit/LICENSE;md5=86d3f3a95c324c9479bd8986968f4327 \
"

GOSRC_INCLUDEGUARD += "github.com-plgd-dev-kit-sources.inc"
