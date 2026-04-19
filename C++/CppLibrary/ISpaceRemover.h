#ifndef ISPACEREMOVER_H
#define ISPACEREMOVER_H

class ISpaceRemover {
public:
    virtual void ReplaceManySpacesWithOne() = 0;
    virtual void ClearEdges() = 0;
    virtual ~ISpaceRemover() {}
};

#endif