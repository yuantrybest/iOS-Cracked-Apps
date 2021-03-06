//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMThreadSafeMutableArry<MCNavigatorCenterAfterFilterProtocol>, IMThreadSafeMutableArry<MCNavigatorCenterBeforFilterProtocol>;

@interface MCNavigatorCenter : NSObject
{
    IMThreadSafeMutableArry<MCNavigatorCenterBeforFilterProtocol> *_beforFilterList;
    IMThreadSafeMutableArry<MCNavigatorCenterAfterFilterProtocol> *_afterFilterList;
}

+ (id)navigationParams;
+ (void)removeAfterFilter:(id)arg1;
+ (void)addAfterFilter:(id)arg1;
+ (void)removeBeforFilter:(id)arg1;
+ (void)addBeforFilter:(id)arg1;
+ (_Bool)backFromTarget:(id)arg1;
+ (_Bool)openURL:(id)arg1 target:(id)arg2 params:(id)arg3 nativeParams:(id)arg4 userInfo:(id)arg5;
+ (_Bool)openURL:(id)arg1 fromTarget:(id)arg2 userInfo:(id)arg3;
+ (id)shareInstace;
@property(retain, nonatomic) IMThreadSafeMutableArry<MCNavigatorCenterAfterFilterProtocol> *afterFilterList; // @synthesize afterFilterList=_afterFilterList;
@property(retain, nonatomic) IMThreadSafeMutableArry<MCNavigatorCenterBeforFilterProtocol> *beforFilterList; // @synthesize beforFilterList=_beforFilterList;
- (void).cxx_destruct;
- (_Bool)doAfterFilterWithURL:(id)arg1 target:(id)arg2 params:(id)arg3 nativeParams:(id)arg4 openURLRet:(_Bool)arg5 userInfo:(id)arg6;
- (_Bool)doBeforFilterWithURL:(id)arg1 target:(id)arg2 params:(id)arg3 nativeParams:(id)arg4 userInfo:(id)arg5;
- (id)init;

@end

