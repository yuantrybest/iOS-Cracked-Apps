//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_source>;

@interface GCDTimerWrapper : NSObject
{
    NSObject<OS_dispatch_source> *timer;
}

- (void).cxx_destruct;
- (void)dealloc;
- (void)cancel;
- (id)initWithDispatchTimer:(id)arg1;

@end
