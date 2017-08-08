//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBAccessStatisticsDelegate-Protocol.h"
#import "FBLoomTraceProvider-Protocol.h"

@class NSString;

@interface FBLoomAccessStatisticsProvider : NSObject <FBLoomTraceProvider, FBAccessStatisticsDelegate>
{
    struct unordered_map<int, markerAndString, std::__1::hash<int>, std::__1::equal_to<int>, std::__1::allocator<std::__1::pair<const int, markerAndString>>> eventNameToIDMap;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)customHeaderFromProviderWithContext:(id)arg1;
- (unsigned long long)eventProviderIdentifier;
- (void)loomTraceDidEnd;
- (void)loomTraceWillBeginWithContext:(id)arg1;
- (void)addCounterEvent:(unsigned long long)arg1 time:(long long)arg2;
- (void)addDurationEvent:(unsigned long long)arg1 startTime:(long long)arg2 endTime:(long long)arg3 identifier:(id)arg4;
- (void)writeCounterLogEntry:(unsigned long long)arg1 time:(long long)arg2;
- (void)writeLogEntry:(int)arg1 eventName:(unsigned long long)arg2 time:(long long)arg3 identifier:(id)arg4;
- (void)writeStopLogEntry:(unsigned long long)arg1 endTime:(long long)arg2 identifier:(id)arg3;
- (void)writeStartLogEntry:(unsigned long long)arg1 startTime:(long long)arg2 identifier:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
