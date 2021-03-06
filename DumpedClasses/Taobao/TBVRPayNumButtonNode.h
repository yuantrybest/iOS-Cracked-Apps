//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRPayBaseButtonNode.h"

#import "TBVRPayNodeProtocol.h"

@class NSString, UILabel, UIView;

@interface TBVRPayNumButtonNode : TBVRPayBaseButtonNode <TBVRPayNodeProtocol>
{
    _Bool _isDelete;
    NSString *_num;
    UIView *_textureView;
    UILabel *_label;
}

@property(nonatomic) __weak UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIView *textureView; // @synthesize textureView=_textureView;
@property(readonly, nonatomic) _Bool isDelete; // @synthesize isDelete=_isDelete;
@property(readonly, copy, nonatomic) NSString *num; // @synthesize num=_num;
- (void).cxx_destruct;
- (void)redrawWithData:(id)arg1;
- (id)initWithParams:(id)arg1 data:(id)arg2 manager:(id)arg3;
@property(readonly, nonatomic) double ptHeight;
@property(readonly, nonatomic) double ptWidth;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

