//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface HySwizzleUtility : NSObject
{
}

+ (void)swizzledDelegateImplementationBlock:(Class)arg1 origSel:(SEL)arg2 altSel:(SEL)arg3 methodDescription:(struct objc_method_description)arg4 implementationBlock:(id)arg5 undefinedBlock:(id)arg6;
+ (_Bool)swizzledClasssImplementationBlock:(Class)arg1 origSel:(SEL)arg2 altSel:(SEL)arg3 withBlock:(id)arg4 error:(id *)arg5;
+ (_Bool)swizzledClasssImplementationBlock:(Class)arg1 origSel:(SEL)arg2 altSel:(SEL)arg3 withBlock:(id)arg4 isInstance:(_Bool)arg5 isLocal:(_Bool)arg6 error:(id *)arg7;
+ (_Bool)swizzledImplementationBlock:(Class)arg1 origSel:(SEL)arg2 altSel:(SEL)arg3 withBlock:(id)arg4 error:(id *)arg5;
+ (_Bool)swizzledImplementationBlock:(Class)arg1 origSel:(SEL)arg2 altSel:(SEL)arg3 withBlock:(id)arg4 isInstance:(_Bool)arg5 isLocal:(_Bool)arg6 error:(id *)arg7;
+ (_Bool)swizzledClassMethod:(Class)arg1 origSel:(SEL)arg2 withMethod:(SEL)arg3 error:(id *)arg4;
+ (_Bool)swizzledClassMethod:(Class)arg1 origSel:(SEL)arg2 withMethod:(SEL)arg3 isInstance:(_Bool)arg4 isLocal:(_Bool)arg5 error:(id *)arg6;
+ (_Bool)swizzledMethod:(Class)arg1 origSel:(SEL)arg2 withMethod:(SEL)arg3 error:(id *)arg4;
+ (_Bool)swizzledMethod:(Class)arg1 origSel:(SEL)arg2 withMethod:(SEL)arg3 isInstance:(_Bool)arg4 isLocal:(_Bool)arg5 error:(id *)arg6;
+ (SEL)swizzledSelectorForSelector:(SEL)arg1;

@end

