/* Autogenerated config.h created for win32 Visual Studio builds */

/* PREFIX -- specifically added for Windows for easier moving */
#define PREFIX "C:\\gstreamer"

/* Define if building universal (internal helper macro) */
#undef AC_APPLE_UNIVERSAL_BUILD

/* The implementation that should be used for integer audio resampling witll
   be benchmarked at runtime */
#undef AUDIORESAMPLE_FORMAT_AUTO

/* The float implementation should be used for integer audio resampling */
#undef AUDIORESAMPLE_FORMAT_FLOAT

/* The int implementation should be used for integer audio resampling */
#undef AUDIORESAMPLE_FORMAT_INT

/* defined if cdda headers are in a cdda/ directory */
#undef CDPARANOIA_HEADERS_IN_DIR

/* Default audio sink */
#define DEFAULT_AUDIOSINK "directsoundsink"

/* Default audio source */
#undef DEFAULT_AUDIOSRC

/* Default video sink */
#define DEFAULT_VIDEOSINK "directdrawsink"

/* Default video source */
#undef DEFAULT_VIDEOSRC

/* Default visualizer */
#define DEFAULT_VISUALIZER "goom"

/* Disable Orc */
#undef DISABLE_ORC

/* Define to 1 if translation of program messages to the user's native
   language is requested. */
#undef ENABLE_NLS

/* gettext package name */
#define GETTEXT_PACKAGE "gst-plugins-base-0.10"

/* The GIO library directory. */
#undef GIO_LIBDIR

/* The GIO modules directory. */
#undef GIO_MODULE_DIR

/* The GnomeVFS modules directory. */
#undef GNOME_VFS_MODULES_DIR

/* system wide data directory */
#define GST_DATADIR PREFIX "\\share"

/* Extra platform specific plugin suffix */
#undef GST_EXTRA_MODULE_SUFFIX

/* macro to use to show function name */
#undef GST_FUNCTION

/* Defined if gcov is enabled to force a rebuild due to config.h changing */
#undef GST_GCOV_ENABLED

/* Defined when registry scanning through fork is unsafe */
#undef GST_HAVE_UNSAFE_FORK

/* plugin install helper script */
#define GST_INSTALL_PLUGINS_HELPER PREFIX "\\libexec\\gst-install-plugins-helper.exe"

/* Default errorlevel to use */
#define GST_LEVEL_DEFAULT GST_LEVEL_ERROR

/* GStreamer license */
#define GST_LICENSE "LGPL"

/* major/minor version */
#define GST_MAJORMINOR "0.10"

/* package name in plugins */
#define GST_PACKAGE_NAME "GStreamer Base Plug-ins prerelease"

/* package origin */
#define GST_PACKAGE_ORIGIN "Unknown package origin"

/* GStreamer package release date/time for plugins as YYYY-MM-DD */
#define GST_PACKAGE_RELEASE_DATETIME "2012-02-05T13:47Z"

/* I know the API is subject to change. */
#undef G_UDEV_API_IS_SUBJECT_TO_CHANGE

/* Define to enable ALSA (used by alsa). */
#undef HAVE_ALSA

/* Define to enable CDParanoia (used by cdparanoia). */
#undef HAVE_CDPARANOIA

/* Define to 1 if you have the MacOS X function CFLocaleCopyCurrent in the
   CoreFoundation framework. */
#undef HAVE_CFLOCALECOPYCURRENT

/* Define to 1 if you have the MacOS X function CFPreferencesCopyAppValue in
   the CoreFoundation framework. */
#undef HAVE_CFPREFERENCESCOPYAPPVALUE

/* Define if the host CPU is an Alpha */
#undef HAVE_CPU_ALPHA

/* Define if the host CPU is an ARM */
#undef HAVE_CPU_ARM

/* Define if the host CPU is a CRIS */
#undef HAVE_CPU_CRIS

/* Define if the host CPU is a CRISv32 */
#undef HAVE_CPU_CRISV32

/* Define if the host CPU is a HPPA */
#undef HAVE_CPU_HPPA

/* Define if the host CPU is an x86 */
#define HAVE_CPU_I386 1

/* Define if the host CPU is a IA64 */
#undef HAVE_CPU_IA64

/* Define if the host CPU is a M68K */
#undef HAVE_CPU_M68K

/* Define if the host CPU is a MIPS */
#undef HAVE_CPU_MIPS

/* Define if the host CPU is a PowerPC */
#undef HAVE_CPU_PPC

/* Define if the host CPU is a 64 bit PowerPC */
#undef HAVE_CPU_PPC64

/* Define if the host CPU is a S390 */
#undef HAVE_CPU_S390

/* Define if the host CPU is a SPARC */
#undef HAVE_CPU_SPARC

/* Define if the host CPU is a x86_64 */
#undef HAVE_CPU_X86_64

/* Define if the GNU dcgettext() function is already present or preinstalled.
   */
#undef HAVE_DCGETTEXT

/* Define to 1 if you have the <dlfcn.h> header file. */
#undef HAVE_DLFCN_H

/* Define to 1 if you have the <emmintrin.h> header file. */
#undef HAVE_EMMINTRIN_H

/* Define to enable building of experimental plug-ins. */
#undef HAVE_EXPERIMENTAL

/* Define to enable building of plug-ins with external deps. */
#undef HAVE_EXTERNAL

/* FIONREAD ioctl found in sys/filio.h */
#undef HAVE_FIONREAD_IN_SYS_FILIO

/* FIONREAD ioctl found in sys/ioclt.h */
#undef HAVE_FIONREAD_IN_SYS_IOCTL

/* Define to 1 if fseeko (and presumably ftello) exists and is declared. */
#undef HAVE_FSEEKO

/* defined if the compiler implements __func__ */
#undef HAVE_FUNC

/* defined if the compiler implements __FUNCTION__ */
#undef HAVE_FUNCTION

/* Define if the GNU gettext() function is already present or preinstalled. */
#undef HAVE_GETTEXT

/* Define to enable GIO library (used by gio). */
#undef HAVE_GIO

/* Define to 1 if you have the `gmtime_r' function. */
#undef HAVE_GMTIME_R

/* Define to enable GNOME VFS (used by gnomevfs). */
#undef HAVE_GNOME_VFS

/* Define to enable Video 4 Linux (used by video4linux). */
#undef HAVE_GST_V4L

/* Whether gudev is available for device detection */
#undef HAVE_GUDEV

/* Define if you have the iconv() function and it works. */
#undef HAVE_ICONV

/* Define to 1 if you have the <inttypes.h> header file. */
#undef HAVE_INTTYPES_H

/* make use of iso-codes for ISO-639 */
#undef HAVE_ISO_CODES

/* Define to enable integer vorbis plug-in (used by ivorbisdec). */
#undef HAVE_IVORBIS

/* Define to 1 if you have the `asound' library (-lasound). */
#undef HAVE_LIBASOUND

/* Define to 1 if you have the `nsl' library (-lnsl). */
#undef HAVE_LIBNSL

/* Define to 1 if you have the `resolv' library (-lresolv). */
#undef HAVE_LIBRESOLV

/* Define to 1 if you have the `socket' library (-lsocket). */
#undef HAVE_LIBSOCKET

/* Define to enable libvisual visualization library (used by libvisual). */
#undef HAVE_LIBVISUAL

/* Define to 1 if you have the `localtime_r' function. */
#undef HAVE_LOCALTIME_R

/* Define to 1 if you have the `log2' function. */
#undef HAVE_LOG2

/* Define if you have C99's lrint function. */
#undef HAVE_LRINT

/* Define if you have C99's lrintf function. */
#undef HAVE_LRINTF

/* Define to 1 if you have the <malloc.h> header file. */
#undef HAVE_MALLOC_H

/* Define to 1 if you have the <memory.h> header file. */
#undef HAVE_MEMORY_H

/* Define to enable Xiph Ogg library (used by ogg). */
#undef HAVE_OGG

/* Use Orc */
#undef HAVE_ORC

/* Defined if compiling for OSX */
#undef HAVE_OSX

/* Define to enable Pango font rendering (used by pango). */
#undef HAVE_PANGO

/* defined if the compiler implements __PRETTY_FUNCTION__ */
#undef HAVE_PRETTY_FUNCTION

/* Define to 1 if you have the <process.h> header file. */
#define HAVE_PROCESS_H 1

/* Define if RDTSC is available */
#undef HAVE_RDTSC

/* Define to 1 if you have the <stdint.h> header file. */
#undef HAVE_STDINT_H

/* Define to 1 if you have the <stdlib.h> header file. */
#define HAVE_STDLIB_H 1

/* Define to 1 if you have the <strings.h> header file. */
#undef HAVE_STRINGS_H

/* Define to 1 if you have the <string.h> header file. */
#define HAVE_STRING_H 1

/* Define to 1 if you have the <sys/socket.h> header file. */
#undef HAVE_SYS_SOCKET_H

/* Define to 1 if you have the <sys/stat.h> header file. */
#define HAVE_SYS_STAT_H 1

/* Define to 1 if you have the <sys/types.h> header file. */
#define HAVE_SYS_TYPES_H 1

/* Define to 1 if you have the <sys/wait.h> header file. */
#undef HAVE_SYS_WAIT_H

/* Define to enable Xiph Theora video codec (used by theora). */
#undef HAVE_THEORA

/* Define to 1 if you have the <unistd.h> header file. */
#undef HAVE_UNISTD_H

/* Define if valgrind should be used */
#undef HAVE_VALGRIND

/* Define to enable Xiph Vorbis audio codec (used by vorbis). */
#undef HAVE_VORBIS

/* defined if vorbis_synthesis_restart is present */
#undef HAVE_VORBIS_SYNTHESIS_RESTART

/* Defined if compiling for Windows */
#define HAVE_WIN32 1

/* Define to 1 if you have the <winsock2.h> header file. */
#define HAVE_WINSOCK2_H 1

/* Define to enable X libraries and plugins (used by ximagesink). */
#undef HAVE_X

/* Define to 1 if you have the <xmmintrin.h> header file. */
#undef HAVE_XMMINTRIN_H

/* Define to enable X Shared Memory extension. */
#undef HAVE_XSHM

/* Define to enable X11 XVideo extensions (used by xvimagesink). */
#undef HAVE_XVIDEO

/* Define to enable zlib support for ID3 parsing in libgsttag. */
#undef HAVE_ZLIB

/* the host CPU */
#define HOST_CPU "i686"

/* prefix */
#undef ISO_CODES_PREFIX

/* */
#undef ISO_CODES_VERSION

/* directory in which the detected libvisual's plugins are located */
#undef LIBVISUAL_PLUGINSBASEDIR

/* gettext locale dir */
#define LOCALEDIR PREFIX "\\share\\locale"

/* Define to the sub-directory in which libtool stores uninstalled libraries.
   */
#undef LT_OBJDIR

/* Define if you have no native hstrerror() function. */
#undef NO_HSTRERROR

/* Define to 1 if your C compiler doesn't accept -c and -o together. */
#undef NO_MINUS_C_MINUS_O

/* Name of package */
#define PACKAGE "gst-plugins-base"

/* Define to the address where bug reports for this package should be sent. */
#define PACKAGE_BUGREPORT "http://bugzilla.gnome.org/enter_bug.cgi?product=GStreamer"

/* Define to the full name of this package. */
#define PACKAGE_NAME "GStreamer Base Plug-ins"

/* Define to the full name and version of this package. */
#define PACKAGE_STRING "GStreamer Base Plug-ins 0.10.35.2"

/* Define to the one symbol short name of this package. */
#define PACKAGE_TARNAME "gst-plugins-base"

/* Define to the home page for this package. */
#undef PACKAGE_URL

/* Define to the version of this package. */
#define PACKAGE_VERSION "0.10.35.2"

/* directory where plugins are located */
#ifdef _DEBUG
#  define PLUGINDIR PREFIX "\\debug\\lib\\gstreamer-0.10"
#else
#  define PLUGINDIR PREFIX "\\lib\\gstreamer-0.10"
#endif

/* The size of `char', as computed by sizeof. */
#undef SIZEOF_CHAR

/* The size of `int', as computed by sizeof. */
#undef SIZEOF_INT

/* The size of `long', as computed by sizeof. */
#undef SIZEOF_LONG

/* The size of `short', as computed by sizeof. */
#undef SIZEOF_SHORT

/* The size of `void*', as computed by sizeof. */
#undef SIZEOF_VOIDP

/* Define to 1 if you have the ANSI C header files. */
#undef STDC_HEADERS

/* "Define if building for android" */
#undef USE_TREMOLO

/* Version number of package */
#define VERSION "0.10.35.2"

/* Define WORDS_BIGENDIAN to 1 if your processor stores words with the most
   significant byte first (like Motorola and SPARC, unlike Intel). */
#if defined AC_APPLE_UNIVERSAL_BUILD
# if defined __BIG_ENDIAN__
#  define WORDS_BIGENDIAN 1
# endif
#else
# ifndef WORDS_BIGENDIAN
#  undef WORDS_BIGENDIAN
# endif
#endif

/* Define to 1 if the X Window System is missing or not being used. */
#undef X_DISPLAY_MISSING

/* Number of bits in a file offset, on hosts where this is settable. */
#undef _FILE_OFFSET_BITS

/* Define to 1 to make fseeko visible on some hosts (e.g. glibc 2.2). */
#undef _LARGEFILE_SOURCE

/* Define for large files, on AIX-style hosts. */
#undef _LARGE_FILES

/* We need at least WinXP SP2 for __stat64 */
#undef __MSVCRT_VERSION__
