//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DTBootLoader.h"

@interface DTBootLoaderImpl : DTBootLoader
{
    _Bool _hasLaunched;
}

- (void)startIdleServices;
- (void)startDelayedServices;
- (void)splashScreenDidAppear:(id)arg1;
- (void)launchFinish;
- (void)didStartBootLoader;
- (void)willStartBootLoader;
- (id)createWindow;
- (void)start;
- (void)dealloc;
- (id)init;

@end

