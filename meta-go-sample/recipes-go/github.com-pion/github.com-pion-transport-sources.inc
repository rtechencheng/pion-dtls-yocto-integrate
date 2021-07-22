# Get the version by curl https://proxy.golang.org/github.com/pion/transport/@latest
SRC_URI += "https://proxy.golang.org/github.com/pion/transport/@v/v0.12.3.zip;srcoutput=github.com/pion/transport;srcinput=github.com/pion/transport@v0.12.3;downloadfilename=github.com-pion-transport-v0.12.3.zip;name=github.com-pion-transport"
SRC_URI[github.com-pion-transport.sha256sum] = "522f48d3084ff5e407cd7f8544d3517c1dc29ef346e3f79a7d8baaf85b26b7d2"

GOSRC_LICENSE += "\
    MIT \
"
LIC_FILES_CHKSUM += "\
    file://src/github.com/pion/transport/LICENSE;md5=c25dca6f05d3d0d952c7fe9373c8b429 \
"

GOSRC_INCLUDEGUARD += "github.com-pion-transport-sources.inc"
