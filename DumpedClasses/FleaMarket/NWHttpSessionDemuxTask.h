//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSThread, NSURLSessionDataTask;

@interface NWHttpSessionDemuxTask : NSObject
{
    NSURLSessionDataTask *_task;
    id <NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
}

@property(readonly, nonatomic) NSThread *thread; // @synthesize thread=_thread;
@property(readonly, nonatomic) id <NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
- (void).cxx_destruct;
- (void)invalidate;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)initWithTask:(id)arg1 delegate:(id)arg2;

@end
