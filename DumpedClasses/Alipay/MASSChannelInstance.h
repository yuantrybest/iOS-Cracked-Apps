//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSRunLoop, NSThread;

@interface MASSChannelInstance : NSObject
{
    NSThread *_mainThread;
    NSRunLoop *_mainRunloop;
}

@property(retain) NSRunLoop *mainRunloop; // @synthesize mainRunloop=_mainRunloop;
@property(retain) NSThread *mainThread; // @synthesize mainThread=_mainThread;
- (void).cxx_destruct;

@end

