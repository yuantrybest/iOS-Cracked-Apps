//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NTESQueue.h"

@class NSObject<OS_dispatch_semaphore>;

@interface NTESSynchronousQueue : NTESQueue
{
    NSObject<OS_dispatch_semaphore> *_lock;
}

- (void).cxx_destruct;
- (id)toArray;
- (unsigned long long)length;
- (void)clear;
- (id)objectAtIndex:(unsigned long long)arg1;
- (_Bool)isEmpty;
- (id)top;
- (id)dequeue;
- (void)enqueueFromArray:(id)arg1;
- (void)enqueue:(id)arg1;
- (id)init;

@end
