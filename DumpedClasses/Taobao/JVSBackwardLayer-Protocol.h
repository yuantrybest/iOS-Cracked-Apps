//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JVSForwardLayer.h"

@class JVSBackwardInvocationBuilder, NSArray;

@protocol JVSBackwardLayer <JVSForwardLayer>
- (NSArray *)backwardInvocations;
- (void)initializeBackward:(JVSBackwardInvocationBuilder *)arg1 batchSize:(int)arg2;
@end

