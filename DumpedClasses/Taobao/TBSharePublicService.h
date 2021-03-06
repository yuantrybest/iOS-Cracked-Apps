//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBShareServiceProtocol.h"

@class NSString;

@interface TBSharePublicService : NSObject <TBShareServiceProtocol>
{
}

+ (id)sharedInstance;
- (void)letServerToStoreMyShareWithChannelStoreParameters:(id)arg1;
- (void)shareByCopyWithViewController:(id)arg1 content:(id)arg2 delegate:(id)arg3;
- (void)shareWithTitle:(id)arg1 content:(id)arg2 delegate:(id)arg3;
- (void)shareWithViewController:(id)arg1 title:(id)arg2 shareTypeList:(id)arg3 content:(id)arg4 delegate:(id)arg5;
- (void)shareWithViewController:(id)arg1 title:(id)arg2 content:(id)arg3 delegate:(id)arg4;
- (void)parseTextFromImage:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)hideText:(id)arg1 toImage:(id)arg2 withBlock:(CDUnknownBlockType)arg3;
- (void)copyWithContent:(id)arg1 delegate:(id)arg2;
- (void)share:(id)arg1 targets:(id)arg2 parent:(id)arg3 delegate:(id)arg4;
- (void)share:(id)arg1 parent:(id)arg2 delegate:(id)arg3;
- (_Bool)handleOpenURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

