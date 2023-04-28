#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <elf.h>
#include <fcntl.h>
#include <string.h>

void error_exit(const char* msg) {
    fprintf(stderr, "Error: %s\n", msg);
    exit(98);
}

void print_hex(const unsigned char* buf, size_t len)
{
	size_t i;

    for (i = 0; i < len; i++) {
        printf("%02x ", buf[i]);
    }
    printf("\n");
}

int main(int argc, char* argv[])
{
	int fd;


    if (argc != 2) {
        error_exit("Usage: elf_header elf_filename");
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        error_exit("Could not open file");
    }

    Elf64_Ehdr ehdr;
    if (read(fd, &ehdr, sizeof(ehdr)) != sizeof(ehdr)) {
        error_exit("Failed to read ELF header");
    }

    if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0) {
        error_exit("Not an ELF file");
    }


    printf("Magic: ");
    print_hex(ehdr.e_ident, EI_NIDENT);

    printf("Class: ");
    switch (ehdr.e_ident[EI_CLASS]) {
        case ELFCLASS32: printf("ELF32\n"); break;
        case ELFCLASS64: printf("ELF64\n"); break;
        default: printf("Invalid\n");
    }

    printf("Data: ");
    switch (ehdr.e_ident[EI_DATA]) {
        case ELFDATA2LSB: printf("2's complement, little endian\n"); break;
        case ELFDATA2MSB: printf("2's complement, big endian\n"); break;
        default: printf("Invalid\n");
    }

    printf("Version: %d\n", ehdr.e_ident[EI_VERSION]);

    printf("OS/ABI: ");
    switch (ehdr.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM: printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("Unknown\n");
    }

    printf("ABI Version: %d\n", ehdr.e_ident[EI_ABIVERSION]);

    printf("Type: ");
    switch (ehdr.e_type) {
        case ET_NONE: printf("NONE (No file type)\n"); break;
        case ET_REL: printf("REL (Relocatable file)\n"); break;
        case ET_EXEC: printf("EXEC (Executable file)\n"); break;
        case ET_DYN: printf("DYN (Shared object file)\n"); break;
        case ET_CORE: printf("CORE (Core file)\n"); break;
        default: printf("Unknown\n");
    }

    printf("Entry point address: 0x%lx\n", (unsigned long)ehdr.e_entry);

    if (close(fd) == -1) {
        error_exit("Failed to close file");
    }
    return 0;
}

