#ifndef CCLASSES_H
#define CCLASSES_H

#ifdef __cplusplus
extern "C" {
#endif

/* Class creating */
#define cclass_(ClassName)          struct _##ClassName##_t;\
                                    typedef struct _##ClassName##_t* ClassName;\
                                    struct _##ClassName##_t

#define extends_(ClassName)         struct _##ClassName##_t;

#ifdef __cplusplus
}
#endif

#endif // CCLASSES_H
