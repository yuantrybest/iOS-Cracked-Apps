//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@protocol LSReplayToolBarDelegate <NSObject>
- (void)playToEnd;
- (void)playTimeUpdate:(double)arg1;
- (void)seekToTime:(double)arg1;
- (void)pauseLiveShow;
- (void)playLiveShow;
@end

