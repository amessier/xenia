// generated from `xb buildhlsl`
// source: host_depth_store_1xmsaa.cs.hlsl
const uint8_t host_depth_store_1xmsaa_cs[] = {
    0x44, 0x58, 0x42, 0x43, 0x06, 0x8B, 0xC6, 0xDF, 0xF2, 0x58, 0x10, 0xB2,
    0xB6, 0xCC, 0xA8, 0x05, 0x1A, 0xA6, 0xF4, 0xA1, 0x01, 0x00, 0x00, 0x00,
    0x64, 0x09, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x34, 0x00, 0x00, 0x00,
    0xAC, 0x02, 0x00, 0x00, 0xBC, 0x02, 0x00, 0x00, 0xCC, 0x02, 0x00, 0x00,
    0xC8, 0x08, 0x00, 0x00, 0x52, 0x44, 0x45, 0x46, 0x70, 0x02, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x5C, 0x01, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x3C, 0x00, 0x00, 0x00, 0x01, 0x05, 0x53, 0x43, 0x00, 0x05, 0x00, 0x00,
    0x46, 0x02, 0x00, 0x00, 0x13, 0x13, 0x44, 0x25, 0x3C, 0x00, 0x00, 0x00,
    0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00,
    0x24, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xDC, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xF7, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x78, 0x65, 0x5F, 0x68, 0x6F, 0x73, 0x74, 0x5F,
    0x64, 0x65, 0x70, 0x74, 0x68, 0x5F, 0x73, 0x74, 0x6F, 0x72, 0x65, 0x5F,
    0x73, 0x6F, 0x75, 0x72, 0x63, 0x65, 0x00, 0x78, 0x65, 0x5F, 0x68, 0x6F,
    0x73, 0x74, 0x5F, 0x64, 0x65, 0x70, 0x74, 0x68, 0x5F, 0x73, 0x74, 0x6F,
    0x72, 0x65, 0x5F, 0x64, 0x65, 0x73, 0x74, 0x00, 0x58, 0x65, 0x48, 0x6F,
    0x73, 0x74, 0x44, 0x65, 0x70, 0x74, 0x68, 0x53, 0x74, 0x6F, 0x72, 0x65,
    0x52, 0x65, 0x63, 0x74, 0x61, 0x6E, 0x67, 0x6C, 0x65, 0x43, 0x6F, 0x6E,
    0x73, 0x74, 0x61, 0x6E, 0x74, 0x73, 0x00, 0x58, 0x65, 0x48, 0x6F, 0x73,
    0x74, 0x44, 0x65, 0x70, 0x74, 0x68, 0x53, 0x74, 0x6F, 0x72, 0x65, 0x52,
    0x65, 0x6E, 0x64, 0x65, 0x72, 0x54, 0x61, 0x72, 0x67, 0x65, 0x74, 0x43,
    0x6F, 0x6E, 0x73, 0x74, 0x61, 0x6E, 0x74, 0x73, 0x00, 0xAB, 0xAB, 0xAB,
    0x10, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x8C, 0x01, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x33, 0x01, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0xFC, 0x01, 0x00, 0x00,
    0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xB4, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF,
    0x00, 0x00, 0x00, 0x00, 0x78, 0x65, 0x5F, 0x68, 0x6F, 0x73, 0x74, 0x5F,
    0x64, 0x65, 0x70, 0x74, 0x68, 0x5F, 0x73, 0x74, 0x6F, 0x72, 0x65, 0x5F,
    0x72, 0x65, 0x63, 0x74, 0x61, 0x6E, 0x67, 0x6C, 0x65, 0x00, 0x64, 0x77,
    0x6F, 0x72, 0x64, 0x00, 0x00, 0x00, 0x13, 0x00, 0x01, 0x00, 0x01, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0xD2, 0x01, 0x00, 0x00, 0x24, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x04, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0xD8, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
    0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00, 0x78, 0x65, 0x5F, 0x68,
    0x6F, 0x73, 0x74, 0x5F, 0x64, 0x65, 0x70, 0x74, 0x68, 0x5F, 0x73, 0x74,
    0x6F, 0x72, 0x65, 0x5F, 0x72, 0x65, 0x6E, 0x64, 0x65, 0x72, 0x5F, 0x74,
    0x61, 0x72, 0x67, 0x65, 0x74, 0x00, 0x4D, 0x69, 0x63, 0x72, 0x6F, 0x73,
    0x6F, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4C, 0x53, 0x4C,
    0x20, 0x53, 0x68, 0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6F, 0x6D, 0x70,
    0x69, 0x6C, 0x65, 0x72, 0x20, 0x31, 0x30, 0x2E, 0x31, 0x00, 0xAB, 0xAB,
    0x49, 0x53, 0x47, 0x4E, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x4F, 0x53, 0x47, 0x4E, 0x08, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x53, 0x48, 0x45, 0x58,
    0xF4, 0x05, 0x00, 0x00, 0x51, 0x00, 0x05, 0x00, 0x7D, 0x01, 0x00, 0x00,
    0x6A, 0x08, 0x00, 0x01, 0x59, 0x00, 0x00, 0x07, 0x46, 0x8E, 0x30, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x59, 0x00, 0x00, 0x07,
    0x46, 0x8E, 0x30, 0x00, 0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x58, 0x18, 0x00, 0x07, 0x46, 0x7E, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x9C, 0x08, 0x00, 0x07, 0x46, 0xEE, 0x31, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x5F, 0x00, 0x00, 0x02,
    0x32, 0x00, 0x02, 0x00, 0x68, 0x00, 0x00, 0x02, 0x04, 0x00, 0x00, 0x00,
    0x9B, 0x00, 0x00, 0x04, 0x08, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x8A, 0x00, 0x00, 0x0B, 0x12, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x40, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x30, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x8A, 0x00, 0x00, 0x0B, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x40, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00,
    0x14, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x08,
    0x00, 0xD0, 0x00, 0x00, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x4F, 0x00, 0x00, 0x06, 0x22, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x02, 0x00, 0x1F, 0x00, 0x04, 0x03, 0x1A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x3E, 0x00, 0x00, 0x01, 0x15, 0x00, 0x00, 0x01,
    0x55, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x0A, 0x80, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00,
    0x36, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x0A, 0x80, 0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x8C, 0x00, 0x00, 0x14, 0x62, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x01, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x29, 0x00, 0x00, 0x06, 0x12, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x02, 0x00, 0x01, 0x40, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
    0x36, 0x00, 0x00, 0x04, 0x22, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x1A, 0x00, 0x02, 0x00, 0x23, 0x00, 0x00, 0x09, 0x32, 0x00, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x96, 0x05, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x06, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x0A, 0x80, 0x30, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00,
    0xFF, 0x03, 0x00, 0x00, 0x26, 0x00, 0x00, 0x0B, 0x00, 0xD0, 0x00, 0x00,
    0x52, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x40, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x4E, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x00, 0xD0, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x86, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x09,
    0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x0A,
    0x32, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x80,
    0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x86, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x26, 0x00, 0x00, 0x08, 0x00, 0xD0, 0x00, 0x00, 0x42, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x09,
    0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x23, 0x00, 0x00, 0x09,
    0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x2A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x00, 0x00, 0x07,
    0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x36, 0x00, 0x00, 0x08, 0xC2, 0x00, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x12, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x22, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x16, 0x7E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x42, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x96, 0x7C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x82, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x96, 0x73, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x00, 0x08, 0xF2, 0xE0, 0x21, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x1E, 0x00, 0x00, 0x07, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x0A, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x12, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x46, 0x7E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x22, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x16, 0x7E, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x46, 0x0F, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x42, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x03, 0x00, 0x00, 0x00, 0x96, 0x7C, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x1E, 0x00, 0x00, 0x0A, 0xF2, 0x00, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x02, 0x40, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2D, 0x00, 0x00, 0x08,
    0x82, 0x00, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x96, 0x73, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0xA4, 0x00, 0x00, 0x08, 0xF2, 0xE0, 0x21, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x56, 0x05, 0x10, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x46, 0x0E, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x3E, 0x00, 0x00, 0x01, 0x53, 0x54, 0x41, 0x54, 0x94, 0x00, 0x00, 0x00,
    0x2A, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00,
    0x05, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00,
};
