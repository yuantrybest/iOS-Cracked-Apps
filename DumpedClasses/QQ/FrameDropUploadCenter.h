//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ScrollPerformanceDelegate.h"

@class NSString;

@interface FrameDropUploadCenter : NSObject <ScrollPerformanceDelegate>
{
    int _scrollType;
}

+ (id)getInstance;
@property(nonatomic) int scrollType; // @synthesize scrollType=_scrollType;
- (void)stop;
- (void)stopWithKey:(id)arg1;
- (void)startWithKey:(id)arg1;
- (void)didReceiveDataFromAPM:(id)arg1 package:(id)arg2;
- (void)willUploadFrameDropDataToAPM:(id)arg1;
- (void)dealloc;
- (void)initUploadItems;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
