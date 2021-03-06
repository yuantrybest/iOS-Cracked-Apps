//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "WXComponent.h"

#import "TBARHeadingProtocol.h"

@class NSString;

@interface TBCatchCompassComponent : WXComponent <TBARHeadingProtocol>
{
    _Bool _rotateEnabled;
}

@property(nonatomic) _Bool rotateEnabled; // @synthesize rotateEnabled=_rotateEnabled;
- (void)didUpdateHeading:(id)arg1;
- (void)updateAttributes:(id)arg1;
- (void)parseAttributes:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidUnload;
- (id)initWithRef:(id)arg1 type:(id)arg2 styles:(id)arg3 attributes:(id)arg4 events:(id)arg5 weexInstance:(id)arg6;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

