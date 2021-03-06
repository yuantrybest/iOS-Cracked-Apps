//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "MQQSegmentedControlDelegate-Protocol.h"

@class MQQSegmentedControl, NSMutableDictionary, NSString, UIScrollView;

@interface MQQDoNotDisturbDetailView : UIView <MQQSegmentedControlDelegate>
{
    CDUnknownBlockType _onJumpSettingsActionBlock;
    CDUnknownBlockType _onShareActionBlock;
    MQQSegmentedControl *_segmentedControl;
    UIScrollView *_helpsScrollView;
    NSMutableDictionary *_helpSessionViewDictonary;
}

@property(retain, nonatomic) NSMutableDictionary *helpSessionViewDictonary; // @synthesize helpSessionViewDictonary=_helpSessionViewDictonary;
@property(retain, nonatomic) UIScrollView *helpsScrollView; // @synthesize helpsScrollView=_helpsScrollView;
@property(retain, nonatomic) MQQSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property(copy, nonatomic) CDUnknownBlockType onShareActionBlock; // @synthesize onShareActionBlock=_onShareActionBlock;
@property(copy, nonatomic) CDUnknownBlockType onJumpSettingsActionBlock; // @synthesize onJumpSettingsActionBlock=_onJumpSettingsActionBlock;
- (void)_appendTipLabelForSessionView:(id)arg1;
- (id)_loadHelpSessionViewAtIndex:(unsigned long long)arg1;
- (void)segmentedControlOnValueChanged:(id)arg1;
- (void)onShareButtonClick:(id)arg1;
- (void)onForwardSettingsButtonClick:(id)arg1;
- (void)doInitBottomViews;
- (void)doInitSettingsHelpView;
- (void)doInitSegmentController;
- (void)doInitSubviews;
- (void)doInitData;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

