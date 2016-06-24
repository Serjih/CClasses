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


/* Methods */
#define method_def_(retType, methodName, ClassName)\
    retType (*methodName)(ClassName self
#define method_body_(retType, methodName, ClassName)\
    static retType methodName(ClassName self

#ifdef __cplusplus
}
#endif

#endif // CCLASSES_H
